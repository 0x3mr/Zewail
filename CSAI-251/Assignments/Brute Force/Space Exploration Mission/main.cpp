#include <iostream>

int main() {
    int n;
    std::string ans = "Communication is clear.";
    std::cin >> n;
    for (int i = 0, x = n - 1; i < n; i++, x--) {
        for (int j = 0; j < n; j++) {
            int amr;
            std::cin >> amr;
            if (i == j || x == j) if (amr != 0) ans = "We are doomed!";
        }
    }
    std::cout << ans << std::endl;
    return 0;
}