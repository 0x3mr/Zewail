#include <iostream>

int main() {
    int n, max = -1;
    std::cin >> n;
    int amr[n];
    for (int i = 0; i < n; i++) std::cin >> amr[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            // std::cout << "i: " << amr[i] << " j: " << amr[j] << std::endl;
            int condition = ((amr[i] < amr[j]) ? amr[i] : amr[j]) * (j - i);
            // std::cout << "con: " << condition << std::endl;
            if (condition > max) max = condition;
        }
    }
    std::cout << max << std::endl;
    return 0;
}