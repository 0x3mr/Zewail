#include <iostream>
#include <vector>

int maxValue(int a, int b) { return ((a < b) ? b : a); }

int LCS(std::vector<std::string> &A, std::vector<std::string> &B, int i, int j, std::vector<std::vector<int>> &memo)
{
    if (i == A.size() || j == B.size())
        return 0;

    if (memo[i][j] != -1)
        return memo[i][j];

    if (A[i] == B[j])
        memo[i][j] = 1 + LCS(A, B, i + 1, j + 1, memo);
    else
        memo[i][j] = maxValue(LCS(A, B, i + 1, j, memo), LCS(A, B, i, j + 1, memo));

    return memo[i][j];
}

int main() {
    int n;
    std::cin >> n;
    std::vector<std::string> amr(n);
    for (int i = 0; i < n; i++) std::cin >> amr[i];

    int nn;
    std::cin >> nn;
    std::vector<std::string> amoor(nn);
    for (int i = 0; i < nn; i++) std::cin >> amoor[i];

    std::vector<std::vector<int>> memo(n, std::vector<int>(nn, -1));

    std::cout << LCS(amr, amoor, 0, 0, memo) << std::endl;

    return 0;
}