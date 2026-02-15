#include <iostream>

bool isPalin(int least, int array[], int size, int most)
{
    if ((size == 1 && array[least] == array[most]) || (size == 2 && array[least] == array[most]))
        return true;

    if (array[least] != array[most])
        return false;

    return isPalin(least += 1, array, size -= 2, most -= 1);
}

int main() {
    long long n;
    std::cin >> n;
    std::string amr = std::to_string(n);
    int vect[amr.length()];
    for (int i = 0; i < amr.length(); i++) vect[i] = amr[i];
    if (isPalin(0, vect, amr.length(), amr.length() - 1)) {
        std::cout << "Yes" << std::endl;
    } else {
        bool boolean = false;
        int index = 0;
        int size = amr.length();
        for (int i = amr.length() - 1; i >= 0; ) {
            if (amr[index] == amr[i] && (size == 3 || size == 2))
            {
                std::cout << "Yes" << std::endl;
                break;
            }
            
            if (boolean == false) {
                if (amr[i] != '0') boolean = true;
            }
            
            if (amr[index] == amr[i]) {
                i--;
                index++;
                size -= 2;
            } else if (amr[index] != amr[i] && boolean == true) {
                std::cout << "No" << std::endl;
                break;
            } else {
                i--;
                size--;
            }
        }
    }
    return 0;
}