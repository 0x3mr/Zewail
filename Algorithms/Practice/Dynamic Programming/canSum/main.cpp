#include <iostream>
#include <vector>
#include <map>

bool canSum(int target, std::vector<int> &array, std::map<int, bool> &memo)
{
    if (target == 0) return true;
    if (target < 0) return false;

    // we are comparing whether the returned value of memo.find(target) is unequal to "null" (not null but same meaning)
    if (memo.find(target) != memo.end())
        return memo[target]; // the boolean value stored at that specific target

    for (int i : array)
    {
        if (canSum(target - i, array, memo))
        {
            memo[target] = true;
            return memo[target];
        }
    }

    return false;
}

int main() {
    int target = 8;
    std::vector<int> amr = {3, 5, 2};
    std::map<int, bool> memorizedValues;

    std::cout << "Can we get a sum of numbers from this array: " << std::endl;

    for (int num : amr) std::cout << num << " ";

    std::cout << std::endl << "that adds up to: " << target << std::endl;

    if (canSum(target, amr, memorizedValues)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}