#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main() {
    printf("[2] Testing with equal priorities\n");

    int pid1 = fork();
    if (pid1 == 0) {
        setprio(5);
        printf("Child 1 (PID: %d) with priority 5\n", getpid());
        exit(0);
    }

    int pid2 = fork();
    if (pid2 == 0) {
        setprio(5);
        printf("Child 2 (PID: %d) with priority 5\n", getpid());
        exit(0);
    }

    wait(0);
    wait(0);
    exit(0);
}
