#include <iostream>

int main() {
    int n;

    std::string ans = "True";
    std::cin >> n;

    char map[n];
    int amr[n];
    int j = 1;
    int max = 2;
    bool second = false;

    for (int i = 0; i < n; i++) std::cin >> amr[i];

    for (int i = 1; i < n; i++) {
        if (second == false) {
            map[i] = 'L';
            if (j + 1 > max / 2) {
                second = true;
                j = 1;
            }
            j++;
        } else if (second) {
            map[i] = 'R';
            if (j + 1 > max) {
                second = false;
                max += max;
                j = 1;
            }
            j++;
        }
    }

    j = 1;
    max = 2;
    second = false;
    int root = amr[0];

    map[0] = 'X';
    for (int i = 0; i < n; i++) std::cout << map[i] << " ";
    std::cout << std::endl;
    for (int i = 1; i < n; i++) {
        if (amr[i] < root)
        {
            if (map[i] != 'L')
            {
                ans = "False";
                std::cout << "3213" << std::endl;
                break;
            }
            else
            {
                if (second == false) {
                    if (j % 2 == 0) {
                        if (amr[i] < amr[i - 1]) {
                            ans = "False";
                            std::cout << "21332" << std::endl;
                            break;
                        }
                    }
                    if (j + 1 > max / 2) {
                        second = true;
                        j = 1;
                    }
                    j++;
                } else if (second) {
                    if (j % 2 == 0) {
                        if (amr[i] < amr[i - 1]) {
                            ans = "False";
                            std::cout << "32132323" << std::endl;
                            break;
                        }
                    }
                    if (j + 1 > max) {
                        second = false;
                        max += max;
                        j = 1;
                    }
                    j++;
                }
            }
            
        }
        else
        {
            if (map[i] != 'R')
            {
                ans = "False";
                std::cout << "32323213" << std::endl;
                break;
            }
            else
            {
                if (second == false) {
                    if (j % 2 == 0) {
                        if (amr[i] < amr[i - 1]) {
                            ans = "False";
                            std::cout << "3212113" << std::endl;
                            break;
                        }
                    }
                    if (j + 1 > max / 2) {
                        second = true;
                        j = 1;
                    }
                    j++;
                } else if (second) {
                    if (j % 2 == 0) {
                        if (amr[i] < amr[i - 1]) {
                            ans = "False";
                            std::cout << "321113" << std::endl;
                            break;
                        }
                    }
                    if (j + 1 > max) {
                        second = false;
                        max += max;
                        j = 1;
                    }
                    j++;
                }
            }
        }
    }
    std::cout << ans << std::endl;

    return 0;
}