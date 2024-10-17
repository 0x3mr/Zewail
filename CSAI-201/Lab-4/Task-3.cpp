#include <iostream>
using namespace std;

char* CompressArray(char arr[], int size) {
    if (size == 0) { return 0; }

    char* amr = new char[size];
    if (size == 0) { return 0; }
    for (int i = 0; i < size; i++) {
        amr[i] = arr[i];
    }

    for (int i = 0; i < size; i++) { cout << amr[i] << " "; }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[j] == '#' || arr[j] == '$' || arr[j] == '&')
            {
                amr[j] = ' ';
            }
        }
    }

    cout << endl;
    for (int i = 0; i < size; i++) { cout << amr[i] << " "; }

    return amr;
}

int main() {
    char test[] = {'1', '2', '$', '3', '4', '5'};

    int num = sizeof(test)/sizeof(test[0]);

    char* compressedArray = CompressArray(test, num);

    int num2 = sizeof(compressedArray)/sizeof(compressedArray[0]);

    return 0;
}