#include <iostream>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    int amr[n];
    for (int i = 0; i < n; i++) { std::cin >> amr[i]; }

    // amrSort(amr, (sizeof(amr)/sizeof(amr[0])));

    std::sort(amr, amr + (sizeof(amr)/sizeof(amr[0])));

    // std::cout << "Sorted Array: ";
    // for (int i = 0; i < n; i++) { std::cout << amr[i] << " "; }
    // std::cout << std::endl;

    int amoor[n];
    int past, x;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            amoor[i] = amr[i];
            past = amoor[i];
            x = i;
            x++;
        }
        else
        {
            if (amr[i] == past) {
                // 
            }
            else {
                amoor[x] = amr[i];
                past = amr[i];
                x++;
            }
        }
    }

    // std::cout << "Final Result: ";
    for (int i = 0; i < (sizeof(amoor)/sizeof(amoor[0])); i++) { std::cout << amoor[i] << " "; } // idk how to stop the random addresses from being printed
    std::cout << std::endl;

    return 0;
}