#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printArray(vector<int> array, int size)
{
    for (int i = 0; i < size; i++) cout << array[i] << ((i + 1 == size) ? "" : " ");
    cout << endl;
}

void countSort(vector<int> &array, int size)
{
    int maxValue = *max_element(array.begin(), array.end()) + 1;

    vector<int> amr(maxValue, 0), space(size);
    
    for (int i = 0; i < size; i++) amr[array[i]]++;
    for (int i = 1; i < maxValue; i++) amr[i] = amr[i] + amr[i - 1];

    for (int i = 0; i < size; i++) {
        space[amr[array[i]] - 1] = array[i];
        amr[array[i]]--;
    }

    array = space;
}

int main() {
    vector<int> amr = {0, 1, 4, 1, 0, 2, 7, 5, 2};
    int size = amr.size();

    cout << "Before: ";
    printArray(amr, size);
    
    countSort(amr, size);
    
    cout << "After:  ";
    printArray(amr, size);

    return 0;
}