#include <stdio.h>
#include <pthread.h>

void *mythread(void *arg) {
    printf("%s\n", (char *) arg);
    return NULL;
}

int main(int argc, char *argv[]) {
    pthread_t p1, p2;
    printf("main: begin\n");

    // Create threads (with error checking)
    if (pthread_create(&p1, NULL, mythread, "A") != 0) {
        perror("pthread_create failed");
        return 1;
    }
    if (pthread_create(&p2, NULL, mythread, "B") != 0) {
        perror("pthread_create failed");
        return 1;
    }

    // Wait for threads to finish
    if (pthread_join(p1, NULL) != 0) {
        perror("pthread_join failed");
        return 1;
    }
    if (pthread_join(p2, NULL) != 0) {
        perror("pthread_join failed");
        return 1;
    }

    printf("main: end\n");
    return 0;
}