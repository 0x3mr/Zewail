#include <iostream>

int main() {
    int n, target, c = 0;
    std::cin >> n >> target;
    int amr[n];
    for (int i = 0; i < n; i++) std::cin >> amr[i];
    for (int i = 0; i < n - 1; i++) {
        if (amr[i] + amr[i+1] == target) c++;
    }
    std::cout << c << std::endl;
    return 0;
}