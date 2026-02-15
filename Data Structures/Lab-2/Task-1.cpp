#include <iostream>

int RecursiveSum(int n) {
    if (n != 0) { return n + RecursiveSum(n-1); }
    else { return n; }
}

int main() {
    std::cout << "Sum is: " << RecursiveSum(5) << std::endl;
    return 0;
}
