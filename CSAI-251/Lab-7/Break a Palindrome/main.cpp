#include <iostream>

int main() {
    bool b = false;
    std::string amr;
    std::cin >> amr;
    if (amr.length() == 1) std::cout << "" << std::endl;
    else
    {
        for (int i = 0; i < amr.length()/2; i++) {
            if (amr[i] != 'a') {
                amr[i] = 'a';
                b = true;
                break;
            }
        }
        if (!b) if (amr[amr.length() - 1] == 'a') amr[amr.length() - 1] = 'b';
        std::cout << amr << std::endl;
    }
    return 0;
}