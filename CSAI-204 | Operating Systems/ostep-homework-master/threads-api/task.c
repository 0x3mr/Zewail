#include <stdio.h>

#include "common_threads.h"

int counter = 0;
pthread_mutex_t lock=PTHREAD_MUTEX_INITIALIZER;

void* worker(void* arg) {
    for (int i = 0; i < 100; i++) {
        Pthread_mutex_lock(&lock);
        counter++;
        Pthread_mutex_unlock(&lock);
    }
    return NULL;
}

int main(int argc, char *argv[]) {
    pthread_t p_array[10];
    for (int i = 0; i < 10; i++) {
        Pthread_create(&p_array[i], NULL, worker, NULL);
    }
    for (int i = 0; i < 10; i++) {
        Pthread_join(p_array[i], NULL);
    }
    printf("Final Counter = %d", counter);
    return 0;
}