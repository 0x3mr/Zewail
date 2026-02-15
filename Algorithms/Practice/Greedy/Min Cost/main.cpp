#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, o, x = 0, y = 0, z = 0, cost = 0;
    std::cin >> n;
    std::vector<int> amr;
    for (int i = 0; i < n; i++)
    {
        std::cin >> o;
        amr.push_back(o);
    }
    std::sort(amr.begin(), amr.end());
    while (amr.size() > 1)
    {
        x = amr.front();
        amr.erase(amr.begin());

        y = amr.back();
        amr.pop_back();

        z = ((x > y) ? y : x);
        cost += z;
        amr.push_back(z);
    }
    std::cout << cost << std::endl;
    return 0;
}