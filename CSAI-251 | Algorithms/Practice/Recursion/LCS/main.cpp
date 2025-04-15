#include <iostream>

int maxValue(int a, int b) { return ((a < b) ? b : a); }

int LCS(std::string A, std::string B, int i, int j)
{
    if (A[i] == '\0' || B[j] == '\0')
        return 0;
    else if (A[i] == B[j])
        return 1 + LCS(A, B, i + 1, j + 1);
    else
        return maxValue(LCS(A, B, i + 1, j), LCS(A, B, i, j + 1));
}

int main() {
    std::string A = "bd";
    std::string B = "abcd";
    std::cout << "Longest common subsequence of:" << std::endl;
    std::cout << A << std::endl;
    std::cout << B << std::endl;
    std::cout << LCS(A, B, 0, 0) << std::endl;
    return 0;
}