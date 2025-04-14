#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/mman.h>

int main() {
    // Print the process ID
    printf("PID: %d\n", getpid());

    // Map an anonymous page
    void* page = mmap(NULL, getpagesize(), PROT_READ | PROT_WRITE,
                      MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);

    if (page == MAP_FAILED) {
        perror("mmap failed");
        return 1;
    }

    printf("Page mapped, press ENTER to continue...\n");
    getchar();

    // Clean up and unmap the page before exiting
    if (munmap(page, getpagesize()) == -1) {
        perror("munmap failed");
        // Continue to pause even if munmap fails to allow for memory measurement
    }

    printf("Memory unmapped, press ENTER to exit...\n");
    getchar();

    return 0;
}
