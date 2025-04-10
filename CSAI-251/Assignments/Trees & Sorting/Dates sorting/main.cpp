#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void customPrint(vector<int> array, int size)
{
    for (int i = 0; i < size; i++) {
        string ans = "", amr = to_string(array[i]);
        for (int j = 0; j < amr.length(); j++) {
            ans += amr[j];
            if (j == 3 || j == 5) ans += "-";
        }
        cout << ans << endl;
    }
}

void countSort(vector<int> &array, int size, int targetDigit)
{
    vector<int> freq(10, 0), space(size);

    for (int i = 0; i < size; i++) freq[(array[i] / targetDigit) % 10]++;

    for (int i = 1; i < 10; i++) freq[i] = freq[i] + freq[i - 1];

    for (int i = size - 1; i >= 0; i--)
    {
        int slicedNumber = (array[i] / targetDigit) % 10;
        space[freq[slicedNumber] - 1] = array[i];
        freq[slicedNumber]--;
    }

    array = space;
}

void radixSort(vector<int> &array, int size)
{
    int m = *max_element(array.begin(), array.end());

    int targetDigit = 1;

    for (; m / targetDigit > 0; targetDigit = targetDigit * 10) countSort(array, size, targetDigit);
}

int main() {
    int size;
    cin >> size;

    vector<int> amr(size);
    for (int i = 0; i < size; i++) cin >> amr[i];

    radixSort(amr, size);    
    customPrint(amr, size);

    return 0;
}
