#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printArray(vector<int> array, int size)
{
    cout << "Array: ";
    for (int i = 0; i < size; i++) cout << array[i] << ((i + 1 == size) ? "" : " ");
    cout << endl;
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
    vector<int> amr = { 202300501,
                        202300333,
                        202300609,
                        202400001,
                        202400000,
                        202300829,
                        202300111,
                        202300321,
                        202300213 };

    int size = amr.size();

    printArray(amr, size);

    // This function assumes that the input array
    // has numbers of same digit length size
    radixSort(amr, size);
    
    printArray(amr, size);

    return 0;
}
