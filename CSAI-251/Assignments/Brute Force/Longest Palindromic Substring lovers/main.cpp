#include <iostream>

bool isPalindrome(std::string amr, int start, int end) {
    if (start >= end) return true;
    if (amr[start] != amr[end]) return false;
    return isPalindrome(amr, start + 1, end - 1);
}

int main() {
    int max = -1, maxI, maxJ;
    std::string amr;
    std::cin >> amr;
    for (int j = amr.length() - 1; j >= 0; j--) {
        for (int i = j; i >= 0; i--) {
            if (isPalindrome(amr, i, j)) {
                if ((j - i) + 1 >= 4 && (j - i) + 1 > max) {
                    max = (j - i) + 1;
                    maxI = i;
                    maxJ = j;
                }
            }
        }
    }
    if (max == -1) {
        std::cout << "Not Found" << std::endl;
    } else {
        std::string ans = "";
        for (int i = maxI; i <= maxJ; i++) ans += amr[i];
        std::cout << ans << std::endl;
    }
    return 0;
}