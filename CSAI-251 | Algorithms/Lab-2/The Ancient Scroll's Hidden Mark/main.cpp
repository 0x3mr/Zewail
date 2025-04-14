#include <iostream>

int main() {
    char c;
    std::string input, amr = "";
    std::cin >> input >> c;
    for (int i = 0; i < input.length(); i++) if (input[i] == c) amr += std::to_string(i);
    if (amr.length() > 0) std::cout << amr[amr.length() - 1] << std::endl;
    else std::cout << -1 << std::endl;
    return 0;
}