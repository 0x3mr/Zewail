#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, o, cost = 0;
    std::cin >> n;
    std::vector<int> amr;
    for (int i = 0; i < n; i++)
    {
        std::cin >> o;
        amr.push_back(o);
    }
    std::sort(amr.begin(), amr.end());
    while (amr.size() > 2)
    {
        for (int i = 2; i >= 0; i--)
        {
            if (i) cost += amr.back();
            amr.pop_back();
        }
    }
    while (amr.size())
    {
        cost += amr.back();
        amr.pop_back();
    }
    std::cout << cost << std::endl;
    return 0;
}