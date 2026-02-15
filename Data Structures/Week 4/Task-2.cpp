#include <iostream>
using namespace std;

int* CloneArray(int arr[], int size) {
    int* amr = new int[size];
    if (size == 0) { return 0; }
    for (int i = 0; i < size; i++) {
        amr[i] = arr[i];
        // cout << amr[i] << " = " << arr[i] << endl;
    }

    // Manually testing
    //
    // for (int i = 0; i < size; i++) { cout << arr[i] << " "; }
    // cout << endl;
    // for (int i = 0; i < size; i++) { cout << amr[i] << " "; }

    return amr;
}

// Broken function
// void printArr(int arr[], int size) {
//     for (int i = 0; i < size; i++) { cout << arr[i] << " "; }
//     cout << endl;
// }

// int sizeArr(int arr[]) {
//     int num = sizeof(arr)/sizeof(arr[0]);

//     if (num > 0) {
//         return sizeof(arr)/sizeof(arr[0]);
//     } else {
//         return 0;
//     }
// }
//
//  Function not working because there's an issue in passing the actual array
//  (to fix later)
//

int main() {
    int test[] = {1, 2, 3, 4, 5};

    int num = sizeof(test)/sizeof(test[0]);

    int* someone = CloneArray(test, num);

    int num2 = sizeof(someone)/sizeof(someone[0]);

    // printArr(test, num);
    // printArr(someone, num2);

    return 0;
}