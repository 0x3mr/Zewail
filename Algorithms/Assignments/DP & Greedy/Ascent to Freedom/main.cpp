#include <iostream>
#include <vector>

// int rec(int target, int increment)
// {
//     if (increment == target) return 1;
//     if (increment > target) return 0;

//     return (rec(target, increment + 1) + rec(target, increment + 2));
// }

int rec(int target, int increment, std::vector<int> &memo)
{
    if (increment == target) return 1;
    if (increment > target) return 0;
    if (memo[increment] != -1) return memo[increment];

    memo[increment] = rec(target, increment + 1, memo) + rec(target, increment + 2, memo);
    return memo[increment];
}

int main() {
    int target;
    std::cin >> target;
    std::vector<int> memo(target, -1);
    std::cout << rec(target, 0, memo) << std::endl;
    return 0;
}