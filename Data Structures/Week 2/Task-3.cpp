#include <iostream>

int SumArray(int arr[], int size) {
    if (size == 0) { return 0; }
    return arr[size-1] + SumArray(arr, size-1);
}

int main() {
    int amr[] = {1, 2, 3, 4, 5};
    int amrLen = sizeof(amr)/sizeof(amr[0]);

    std::cout << "Sum of the array is: " << SumArray(amr, amrLen) << std::endl;
    
    return 0;
}
