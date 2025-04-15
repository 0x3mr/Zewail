#include <iostream>
#include <vector>
#include <algorithm>

bool sortBoolean(std::string a, std::string b) { return (a + b > b + a); }

int main() {
    int n;
    std::cin >> n;
    std::string ans = "";
    std::vector<std::string> amr(n);
    for (int i = 0; i < n; i++) std::cin >> amr[i];
    std::sort(amr.begin(), amr.end(), sortBoolean);
    for (int i = 0; i < n; i++) ans += amr[i];
    std::cout << ans << std::endl;
    return 0;
}