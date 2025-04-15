#include <iostream>
#include <vector>

int maxValue(int a, int b) { return ((a < b) ? b : a); }

int LCS(std::string &A, std::string &B, int i, int j, std::vector<std::vector<int>> &memo)
{
    if (A[i] == '\0' || B[j] == '\0')
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
    std::string A = "bd";
    std::string B = "abcd";
    std::vector<std::vector<int>> memo(A.length(), std::vector<int>(B.length(), -1));

    std::cout << "Longest common subsequence of:" << std::endl;
    std::cout << A << std::endl;
    std::cout << B << std::endl;
    std::cout << LCS(A, B, 0, 0, memo) << std::endl;
    return 0;
}
