#include <iostream>

int main() {
    int n, target, c = 0;
    std::cin >> n >> target;
    int amr[n];
    for (int i = 0; i < n; i++) std::cin >> amr[i];
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (amr[i] + amr[j] == target && i != j) c++;
        }
    }
    std::cout << c << std::endl;
    return 0;
}