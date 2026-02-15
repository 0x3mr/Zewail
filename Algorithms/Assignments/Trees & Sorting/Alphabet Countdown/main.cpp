#include <iostream>
#include <vector>
#include <cctype>

int main() {
    int n;
    std::string amr;
    std::cin >> n >> amr;
    std::vector<int> freq(26, 0);
    for (int i = 0; i < n; i++)
        freq[amr[i] - 'a']++;
    for (int i = 0; i < 26; i++)
        for (int j = 0; j < freq[i]; j++)
            std::cout << static_cast<char>(i + 97);
    std::cout << std::endl;
    return 0;
}