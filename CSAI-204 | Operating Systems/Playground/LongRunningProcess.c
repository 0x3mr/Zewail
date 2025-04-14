#include <stdio.h>
#include <unistd.h> // for sleep() and getpid()

int main() {
    printf("Starting long-running process...\n");

    // Output the process ID, so we can use it to inspect memory usage
    printf("Process ID: %d\n", getpid());

    // Run for a long duration by sleeping
    for (int i = 0; i < 120; ++i) {
        printf("Sleeping minute: %d\n", i + 1);
        sleep(60); // Sleep for 60 seconds
    }

    printf("Process finished.\n");
    return 0;
}