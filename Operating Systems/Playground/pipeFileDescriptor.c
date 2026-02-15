#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    int pipeFileDescriptor[2];
    pid_t pid;
    
    // safety check
    if (pipe(pipeFileDescriptor) == -1)
    {
        perror("pipe");
        exit(EXIT_FAILURE);   
    }

    pid = fork();

    // validate it actually forked:
    if (pid == -1)
    {
        perror("fork");
        exit(EXIT_FAILURE);
    }

    // beginning of execution
    if (pid == 0)
    {
        // pipeFileDescriptor[0] - read mode
        // pipeFileDescriptor[1] - write mode
        close(pipeFileDescriptor[0]);
        dup2(pipeFileDescriptor[1], STDOUT_FILENO);
        close(pipeFileDescriptor[1]);

        execlp("ls", "ls", NULL);
        perror("execlp ls");
        exit(EXIT_FAILURE);
    }
    else
    {
        close(pipeFileDescriptor[1]);
        dup2(pipeFileDescriptor[0], STDIN_FILENO);
        close(pipeFileDescriptor[0]);

        execlp("grep", "grep", "", NULL);
        perror("execlp grep");
        exit(EXIT_FAILURE);
    }

    return 0;
}