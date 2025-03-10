#include <iostream>
#include <cmath>

bool isPerfectSquare(int sampleTest) { return (static_cast<int>(sqrt(sampleTest)) * static_cast<int>(sqrt(sampleTest)) != sampleTest); }

int main() {
    int n, max = -1;
    std::cin >> n;
    int amr[n];
    for (int i = 0; i < n; i++) std::cin >> amr[i];
    for (int i = 0; i < n; i++)
        if (isPerfectSquare(amr[i]))
            if (amr[i] > max) max = amr[i];
    std::cout << max << std::endl;
    return 0;
}