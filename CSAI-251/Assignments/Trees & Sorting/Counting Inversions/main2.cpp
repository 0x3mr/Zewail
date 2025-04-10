#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, count = 0;
    std::cin >> n;
    std::vector<int> amr(n);
    for (int i = 0; i < n; i++) std::cin >> amr[i];
    for (int j = 0; j < n; j++) {
        std::vector<int> sorted(amr.begin() + j, amr.end());
        std::stable_sort(sorted.begin(), sorted.end());
        for (int i = 0; sorted[i] < amr[j]; i++) {
            if (sorted[i] == amr[j]) break;
            count++;
        }
    }
    std::cout << count << std::endl;
    return 0;
}
