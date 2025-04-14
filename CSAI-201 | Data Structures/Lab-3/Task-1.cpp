#include <iostream>
using namespace std;

template <typename T> T GetMin(T arr[], T size) {
    if (size <= 0) { return 0; }
    if (size == 1) { return arr[0]; }
    return std::min(arr[size-1], GetMin<int>(arr, size-1));
}

int main() {
    int amr[] = {5, 3, 1, -1, 4, 2};
    int amrLen = ( sizeof(amr)/sizeof(amr[0]) );

    std::cout << "Min of the array is: " << GetMin<int>(amr, amrLen) << std::endl;
    
    return 0;
}
