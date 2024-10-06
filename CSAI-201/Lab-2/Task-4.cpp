#include <iostream>

int ZeroCount(int arr[], int size) {
    if (size <= 0) { return 0; };
    if (arr[size-1] == 0) { return 1 + ZeroCount(arr, size-1); }
    return ZeroCount(arr, size-1);
}

int main() {
    int amr[] = {0, 1, 0, 3, 0, 5};
    int amrLen = ( sizeof(amr)/sizeof(amr[0]) );

    std::cout << "Count of zeros in the array is: " << ZeroCount(amr, amrLen) << std::endl;    
    return 0;
}
