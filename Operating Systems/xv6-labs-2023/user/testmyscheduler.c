#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
typedef long long int64;

int main() {
    char pa[10] = "parent\n";
    char ch[10] = "child\n";

    int rc = fork();
    if (rc < 0) {
        printf("fork failed\n");
    } else if (rc > 0) {
        setprio(10);
        for (int i = 0; i < 50; i++) {
            for (int64 j = 0; j <= 10000000; j++) {
                if (j == 10000000) {
                    write(1, pa, 10);
                }
            }
        }
        wait(0);
    } else {
        setprio(1);
        for (int i = 0; i < 50; i++) {
            for (int64 j = 0; j <= 10000000; j++) {
                if (j == 10000000) {
                    write(1, ch, 10);
                }
            }
        }
    }

    exit(0);
}y