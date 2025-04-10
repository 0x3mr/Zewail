#include <stdlib.h>
#include <stdio.h>

int main() {
    int* data = malloc(100 * sizeof(int)); // Allocate memory
    
    if (data == NULL) return -1; // Allocation failed

    data[100] = 0; // Is this safe assignment?

    return 0;
}