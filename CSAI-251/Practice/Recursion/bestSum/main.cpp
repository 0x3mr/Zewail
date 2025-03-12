#include <iostream>
#include <vector>
#include <climits>
std::vector<int>dp;

int bestSum(int target, std::vector<int> &array)
{
    if (target == 0) return 1;

    if(dp[target] != -1)
        return dp[target];

    long long size = INT_MAX;
    for (int i : array)
    {
        if (i <= target) {
            long long result = bestSum(target - i, array);
         
            if (result != INT_MAX && result + 1 < size) 
                size = result + 1;
        }
    }
    dp[target] = size;
    return size;
}

int main() {
    // int target = 8;
    // std::vector<int> amr = {3, 5, 2};
    // dp = std::vector<int>(target + 5, -1);
    // std::cout << "Can we get a sum of numbers from this array: " << std::endl;

    // for (int num : amr) std::cout << num << " ";

    // std::cout << std::endl << "that adds up to: " << target << std::endl;

    // int condition = bestSum(target, amr);
    // std::cout << " ==" << condition << std::endl;
    // std::cout << ((condition == INT_MAX) ? -1 : condition) << std::endl;

    return 0;
}