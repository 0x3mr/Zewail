#include <iostream>
#include <vector>

bool canSum(int target, std::vector<int> &array)
{
    if (target == 0) return true;
    if (target < 0) return false;

    for (int i : array)
        if (canSum(target - i, array))
            return true;

    return false;
}

int main() {
    int target = 8;
    std::vector<int> amr = {3, 5, 2};

    std::cout << "Can we get a sum of numbers from this array: " << std::endl;

    for (int num : amr) std::cout << num << " ";

    std::cout << std::endl << "that adds up to: " << target << std::endl;

    std::cout << canSum(target, amr) << std::endl;

    return 0;
}