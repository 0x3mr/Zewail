#include <iostream>
#include <vector>

int main() {
    int n, x;
    std::cin >> n >> x;
    std::vector<int> amr(n);
    for (int i = 0; i < n; i++) std::cin >> amr[i];
    std::vector<int> memo(x + 1, 0);
    memo[0] = 1;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = x; j >= amr[i]; j--)
        {
            memo[j] += memo[j - amr[i]];
        }
    }

    std::cout << memo[x] << std::endl;

    return 0;
}
