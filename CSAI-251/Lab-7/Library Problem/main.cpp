#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, c = 0;
    std::cin >> n;
    std::vector<int> amr(n);
    for (int i = 0; i < n; i++) std::cin >> amr[i];
    std::vector<int> sorted(amr.begin(), amr.end());
    std::sort(sorted.begin(), sorted.end());
    for (int i = 0; i < n; i++) if (amr[i] != sorted[i]) c++;
    std::cout << c << std::endl;
    return 0;
}