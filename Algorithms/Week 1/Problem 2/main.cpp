#include <iostream>
#include <vector>

int main()
{
    std::string output = "";
    int n, x;
    std::cin >> n;
    std::vector<int> amr(999999);
    for (int i = 0; i < n; i++)
    {
        std::cin >> x;
        if (amr[x] != 1) {
            output += ((output.length() == 0) ? "" : " ") + std::to_string(x);
        }
        amr[x] = 1;
    }
    std::cout << output << std::endl;
    return 0;
}