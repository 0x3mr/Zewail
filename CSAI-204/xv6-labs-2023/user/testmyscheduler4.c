#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main() {
    printf("[4] Testing printf vs write\n");

    int pid = fork();
    if (pid == 0) {
        for (int i = 0; i < 5; i++) {
            printf("printf: Child message %d\n", i);
            write(1, "write: Child message\n", 21);
            sleep(1);
        }
        exit(0);
    }

    wait(0);
    exit(0);
}
