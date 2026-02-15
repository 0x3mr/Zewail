#include <iostream>
using namespace std;

char* CompressArray(char arr[], int size, int &compressedLen) {
    if (size == 0) { return 0; }

    char* amr = new char[size];
    for (int i = 0; i < size; i++) { amr[i] = ' '; }

    // print 'amr' array before compressing
    // for (int i = 0; i < size; i++) { cout << arr[i] << " "; }

    int k = 0;
    for (int i = 0; i < size; i++) {
        if (!(arr[i] == '#' || arr[i] == '$' || arr[i] == '&')) {
            amr[k] = arr[i];
            k++;
        }
    }
    compressedLen = k;

    // print 'amr' array after compressing
    // cout << endl;
    // for (int i = 0; i < size; i++) { cout << amr[i] << " "; }

    return amr;
}

int main() {
    char test[] = "ckeo$mp##m&$n";

    int compressedLen, testLen = sizeof(test)/sizeof(test[0]);

    cout << "           Array: ";
    for (int i = 0; i < testLen; i++) { cout << test[i]; }
    cout << endl;

    char* compressedArray = CompressArray(test, testLen, compressedLen);

    cout << "Compressed Array: ";
    for (int i = 0; i < compressedLen; i++) { cout << compressedArray[i]; }
    cout << endl;

    return 0;
}
