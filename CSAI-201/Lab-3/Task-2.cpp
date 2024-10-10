#include <iostream>
using namespace std;

template <class T>
class Matrix {
    private:
        T row = 5;
        T col = 7;
        T arr[5][7] = {{0}};

    public:
        // Matrix() {
        //     for (int i = 0; i < row; i++) {
        //         for (int j = 0; j < col; j++) {
        //             arr[i][j] = 0;
        //         }
        //     }
        // }

        void addValue(int col, int row, T value) {
            arr[col-1][row-1] = value;
        }

        bool BelongTo(T value) {
            for (int i = 0; i < row; i++) {
                for (int j = 0; j < col; j++) {
                    if (arr[i][j] == value) { return true; }
                }
            }
            return false;
        }

        void printRow(int row) {
            if (row >= 0 && row < 5) {
                cout << "The row is:" << endl;
                for (int i = 0; i < 7; i++) {
                    cout << arr[row-1][i] << " ";
                }
                cout << endl;
            }
        }

        void printMatrix() {
            cout << "All matrix is: ";
            for (int i = 0; i < row; i++) {
                cout << "\n";
                for (int j = 0; j < col; j++) {
                    cout << "[" << arr[i][j] << "] ";
                }
            }
            cout << endl << endl;
        }

        T maxValue() {
            T max = arr[0][0];
            for (int i = 0; i < row; i++) {
                for (int j = 0; j < col; j++) {
                    if (arr[i][j] > max) { max = arr[i][j]; }
                }
            }
            return max;
        }
};

int main() {
    int row = 5;
    int column = 7;

    Matrix<int> amr;
    amr.printMatrix();

    amr.addValue(3, 3, 3);
    amr.addValue(3, 4, 5);
    amr.addValue(3, 6, 9);


    amr.printMatrix();

    cout << "Does it belong to: " << amr.BelongTo(55) << endl << endl;

    cout << "Max value is: " << amr.maxValue() << endl << endl;

    amr.printRow(3);

    return 0;
}
