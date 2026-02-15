#include <iostream>

int exchange(int n)
{
    if (n <= 0) return 0;
    int div = ((n >= 100) ? 100 : (n >= 50) ? 50 : (n >= 25) ? 25 : (n >= 10) ? 10 : (n >= 5) ? 5 : 1);
    int c = n / div;
    n -= (c * div);
    return c + exchange(n);
}

int main() {
    int n;
    std::cin >> n;
    std::cout << exchange(n) << std::endl;
    return 0;
}