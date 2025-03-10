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
    int n;
    std::cin >> n;
    int amr[n];
    for (int i = 0; i < n; i++) { std::cin >> amr[i]; }
    int size = sizeof(amr)/sizeof(amr[0]);
    std::cout << ((isPalin(0, amr, size, n - 1) == 1) ? "True" : "False") << std::endl;
    return 0;
}