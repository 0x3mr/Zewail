#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vect(n), dp(n);
    for (int i = 0; i < n; i++) std::cin >> vect[i];
    dp[0] = vect[0];
    dp[1] = std::max(vect[0], dp[0]);
    for (int i = 2; i < n; i++) {
        dp[i] = std::max(vect[i] + dp[i - 2], dp[i - 1]);
    }
    std::cout << dp[n - 1] << std::endl;
    return 0;
}
