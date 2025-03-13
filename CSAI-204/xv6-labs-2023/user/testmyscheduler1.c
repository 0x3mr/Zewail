#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main() {
    printf("[1] Testing without setting priorities\n");

    int pid1 = fork();
    if (pid1 == 0) {
        printf("Child 1 running (PID: %d)\n", getpid());
        exit(0);
    }

    int pid2 = fork();
    if (pid2 == 0) {
        printf("Child 2 running (PID: %d)\n", getpid());
        exit(0);
    }

    wait(0);
    wait(0);
    exit(0);
}
