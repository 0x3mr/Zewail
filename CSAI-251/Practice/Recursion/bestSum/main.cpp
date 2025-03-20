#include <iostream>
#include <vector>
#include <climits>

int bestSum(int target, const std::vector<int> &array) {
    if (target == 0) return 0;

    int minElements = INT_MAX;

    for (int num : array) {
        if (num <= target) {
            int result = bestSum(target - num, array);
            if (result != INT_MAX && result + 1 < minElements) {
                minElements = result + 1;
            }
        }
    }

    return minElements;
}

int main() {
    int target = 8;
    std::vector<int> array = {3, 5, 2};

    std::cout << "Can we get a sum of numbers from this array: " << std::endl;
    for (int num : array) std::cout << num << " ";
    std::cout << std::endl << "that adds up to: " << target << std::endl;

    int result = bestSum(target, array);
    std::cout << "Minimum number of elements required: " << (result == INT_MAX ? -1 : result) << std::endl;

    return 0;
}
