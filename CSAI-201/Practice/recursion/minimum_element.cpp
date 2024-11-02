// Caclulate minimum element in array

#include <iostream>
using namespace std;

int minElement(int n, int arr[])
{
    if (n == 1) { return arr[0]; }
    return min(arr[n-1], minElement(n-1, arr));
}

int main() {
    int amr[6] = {2, 6, 9, 1, -99, 5};
    cout << "Recursion: " << minElement(5, amr) << endl;

    int min = amr[0];
    for (int i = 0; i < 5; i++)
    {
        if (amr[i] < min) { min = amr[i]; }
    }

    cout << "Loop:      " << min << endl;

    return 0;
}