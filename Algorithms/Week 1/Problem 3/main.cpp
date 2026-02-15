#include <iostream>
#include <stack>
#include <algorithm>

int main() {
    int n, target;
    std::stack<int> x, y;
    std::cin >> n >> target;
    int amr[n];
    for (int i = 0; i < n; i++) { std::cin >> amr[i]; }
    // std::cout << "0 1 2 3 5 7 8" << std::endl;
    std::sort(amr, amr + (sizeof(amr)/sizeof(amr[0])));
    for (int i = 0, j = n - 1; ; )
    {
        // std::cout << "p: " << i << " q: " << j << std::endl;

        if (amr[i] + amr[j] == target) {
            // std::cout << "+" << std::endl;
            x.push(amr[i]);
            y.push(amr[j]);
        }

        if (amr[j] >= target)
        {
            j--;
        }
        else
        {
            i++;
        }
        if (i == j) break;
    }

    std::cout << "{";

    int size = x.size();
    for (int i = 0; i < size; i++)
    {
        std::cout << "(" << x.top() << ", " << y.top() << ")";
        x.pop();
        y.pop();
        if (i+1 != size) std::cout << ", ";
    }

    std::cout << "}" << std::endl;

    return 0;
}