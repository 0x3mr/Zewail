#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> amr(n);
    for (int i = 0; i < n; i++) std::cin >> amr[i];
    std::sort(amr.begin(), amr.end(), std::greater<int>());
    do {
        for (int i = 0; i < n; i++) std::cout << amr[i] << ((i + 1 > n) ? "" : " ");
        std::cout << std::endl;
    } while (prev_permutation(amr.begin(), amr.end()));
    return 0;
}