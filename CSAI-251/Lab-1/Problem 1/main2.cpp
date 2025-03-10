#include <iostream>
#include <vector>

int main() {
    int target;
    std::string x;
    std::vector<std::string> amr;
    while (std::cin >> x && x != "Reorder") { amr.push_back(x); }
    std::cin >> x >> target;
    // std::cin >> target;
    amr.push_back(std::to_string(target));
    for (int i = amr.size() - 1; i != 0; i--)
    {
        if (amr[i-1] > amr[i]) {
            std::string temp = amr[i];
            amr[i] = amr[i - 1];
            amr[i - 1] = temp;
        }
    }
    for (int i = 0; i < amr.size(); i ++) { std::cout << amr[i] << " "; }
}