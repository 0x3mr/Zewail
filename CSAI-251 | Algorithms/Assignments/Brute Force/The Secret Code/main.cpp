#include <iostream>
#include <vector>

int main() {
    int n, x = 101;
    std::cin >> n;
    std::string ans = "";
    std::vector<std::string> amr(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> amr[i];
        if (amr[i].length() < x) x = amr[i].length();
        // std::cout << "t" << std::endl;
    }
    // std::cout << "--" << std::endl;
    int j = 0;
    bool broke = false;
    while (broke == false)
    {
        int temp = amr[0].length() - 1 - j;
        if (temp < 0) temp = 0;
        char pointer = amr[0][temp];
        for (int i = 0; i < n; i++)
        {
            // std::cout << i << std::endl;
            // std::cout << "a\nb" << std::endl;
            int tempp = amr[i].length() - 1 - j;
            if (tempp < 0) tempp = 0;
            if (amr[i][tempp] != pointer) broke = true;
        }
        if (broke == true) break;
        else {
            ans = pointer + ans;
            j++;
            if (j > (amr[0].length() - 1)) broke = true;
        }
    }
    std::cout << ((ans.length() == 0) ? "Unlocked" : ans) << std::endl;
    return 0;
}