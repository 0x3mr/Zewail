#include <iostream>
#include <vector>

int main() {
    int r, c, count = 0;
    std::cin >> r >> c;
    std::vector<int> amr(c, 0);
    for (int i = 0; i < r; i++) {
        int max = -9999;
        int last;
        for (int j = 0; j < c; j++) {
            int x;
            std::cin >> x;
            if (x >= max) {
                max = x;
                last = j;
            }
        }
        amr[last] = 1;
    }
    for (int i = 0; i < c; i++)
    {
        if (amr[i] != 0) count++;
    }
    std::cout << count << std::endl;
    return 0;
}