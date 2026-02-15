#include <iostream>
#include <vector>

int maxValue(int a, int b) { return ((a < b) ? b : a); }

// int LPS(std::string &amr, int i, int j, std::vector)
// {
//     if (i > j) return 0; // even cases
//     if (i == j) return 1; // odd cases

//     if (amr[i] == amr[j])
//         return 2 + LPS(amr, i + 1, j - 1);
//     else
//         return maxValue(LPS(amr, i + 1, j), LPS(amr, i, j - 1));
// }

int LPS(std::string &amr, int i, int j, std::vector<std::vector<int>> &memo)
{
    if (i > j) return 0; // even cases
    if (i == j) return 1; // odd cases

    if (memo[i][j] != -1) return memo[i][j];

    // same exact as recursion
    // but we are going to save
    // our results
    if (amr[i] == amr[j])
        memo[i][j] = 2 + LPS(amr, i + 1, j - 1, memo);
    else
        memo[i][j] = maxValue(LPS(amr, i + 1, j, memo), LPS(amr, i, j - 1, memo));

    return memo[i][j];
}

int main() {
    std::string amr;
    std::cin >> amr;
    std::vector<std::vector<int>> memo(amr.length(), std::vector<int>(amr.length(), -1));
    std::cout << LPS(amr, 0, amr.length() - 1, memo) << std::endl;
    return 0;
}
