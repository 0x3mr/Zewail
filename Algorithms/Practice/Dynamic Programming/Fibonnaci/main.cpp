#include <iostream>
#include <vector>

int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    std::vector<int> res(n + 1);
    res[0] = 0;
    res[1] = 1;

    for (int i = 2; i <= n; i++) {
        res[i] = res[i - 1] + res[i - 2];
    }

    return res[n];
}

int main() {
    std::cout << "Fib 3: " << fib(3) << std::endl;
    std::cout << "Fib 7: " << fib(7) << std::endl;
    return 0;
}
