#include <iostream>

int exchange(int n) {
    int x = n;
    if (x == 0) return 0;
    else if (100 <= x) x -= 100;
    else if (50 <= x) x -= 50;
    else if (25 <= x) x -= 25;
    else if (10 <= x) x -= 10;
    else if (5 <= x) x -= 5;
    else if (1 <= x) x -= 1;
    return 1 + exchange(x);
}

int main() {
    int n;
    std::cin >> n;
    std::cout << exchange(n) << std::endl;
    return 0;
}