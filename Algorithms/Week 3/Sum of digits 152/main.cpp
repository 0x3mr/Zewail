#include <iostream>

int main() {
    long long n, c = 0;
    std::cin >> n;
    std::string amr = std::to_string(n);
    for (int i = 0; i < amr.length(); i++) c += amr[i] - '0';
    std::cout << c << std::endl;
    return 0;
}