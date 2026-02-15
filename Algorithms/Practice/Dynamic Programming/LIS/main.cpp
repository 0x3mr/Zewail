#include <iostream>
#include <vector>

int maxValue(int a, int b) { return ((a < b) ? b : a); }

int main() {
    int n;
    std::cin >> n;
    std::vector<int> amr(n);
    for (int i = 0; i < n; i++) std::cin >> amr[i];

    std::vector<int> memo(n, 1);

    for (int i = 0; i < n; i++)
    {
        int max = 0;
        for (int j = 0; j < i; j++)
        {
            if (amr[i] > amr[j])
            {
                max = maxValue(max, memo[j]);
            }
        }
        memo[i] = max + 1;
    }

    int ans = -1;
    for (int i : memo) ans = maxValue(ans, i);
    std::cout << ans << std::endl;

    return 0;
}
