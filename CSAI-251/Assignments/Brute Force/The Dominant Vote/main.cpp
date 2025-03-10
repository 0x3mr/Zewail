#include <iostream>
#include <vector>

int main() {
    std::string ans = "";
    int n, maxValue = -1, maxValueIndex;
    std::cin >> n;
    std::vector<int> amr(1000, 0);
    for (int i = 0; i < n; i++) {
        int s;
        std::cin >> s;
        amr[s - 1] += 1;
        if (amr[s - 1] > maxValue) {
            maxValue = amr[s - 1];
            maxValueIndex = s - 1;
        }
    }
    ans = std::to_string(maxValueIndex + 1);
    for (int i = 0; i < 1000; i++) {
        if (amr[i] == maxValue && i != maxValueIndex) {
            ans = "-1";
            break;
        }
    }
    std::cout << ans << std::endl;
    return 0;
}