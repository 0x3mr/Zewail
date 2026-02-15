#include <iostream>

int maxValue(int a, int b) { return ((a < b) ? b : a); }

int LPS(std::string &amr, int i, int j)
{
    if (i > j) return 0; // even cases
    if (i == j) return 1; // odd cases

    if (amr[i] == amr[j])
        return 2 + LPS(amr, i + 1, j - 1);
    else
        return maxValue(LPS(amr, i + 1, j), LPS(amr, i, j - 1));
}

int main() {
    std::string amr;
    std::cin >> amr;
    std::cout << LPS(amr, 0, amr.length() - 1) << std::endl;
    return 0;
}
