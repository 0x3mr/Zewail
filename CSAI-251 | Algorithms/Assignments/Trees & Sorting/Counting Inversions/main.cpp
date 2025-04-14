#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//
// COPY OF PSEUDOCODE IN THE LECTURE
//
void merge(vector<int> &A, int p, int q, int r) {
    int n_L = q - p + 1;            // length of A[p:q]
    int n_R = r - q;                // length of A[q+1:r]

    vector<int> L(n_L), R(n_R);     // let L & R be new arrays

    // Copy A[p:q] into L[0:n_L - 1]
    for (int i = 0; i < n_L; i++)
        L[i] = A[p + i];

    // Copy A[q+1:r] into R[0:n_R - 1]
    for (int j = 0; j < n_R; j++)
        R[j] = A[q + 1 + j];

    int i = 0, j = 0, k = p;

    // Merge L and R into A[p:r]
    while (i < n_L && j < n_R) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements from L
    while (i < n_L) {
        A[k] = L[i];
        i++;
        k++;
    }

    // Copy remaining elements from R
    while (j < n_R) {
        A[k] = R[j];
        j++;
        k++;
    }
}

//
// COPY OF PSEUDOCODE IN THE LECTURE
//
void mergeSort(vector<int> &A, int p, int r) {
    if (p >= r)                     // zero or one element?
        return;

    int q = (p + r) / 2;            // midpoint of A[p:r]
    mergeSort(A, p, q);             // recursively sort left half
    mergeSort(A, q + 1, r);         // recursively sort right half
    merge(A, p, q, r);              // merge the 2 sorted halves
}

int main() {
    int n, count = 0;
    cin >> n;
    vector<int> amr(n);
    for (int i = 0; i < n; i++) cin >> amr[i];
    for (int j = 0; j < n; j++) {
        vector<int> sorted(amr.begin() + j, amr.end());
        // stable_sort(sorted.begin(), sorted.end());
        // either we use this as merge sort or
        // manually implement it as so:
        mergeSort(sorted, 0, sorted.size() - 1);
        for (int i = 0; sorted[i] < amr[j]; i++) {
            if (sorted[i] == amr[j]) break;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}