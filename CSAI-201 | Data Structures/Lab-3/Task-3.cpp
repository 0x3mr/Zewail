#include <iostream>
using namespace std;

class myDate {
    public:
        int day, month, year;

        myDate(int d = 1, int m = 1, int y = 2000) : day(d), month(m), year(y) {}

        bool operator==(const myDate &other) const
        {
            return (day == other.day && month == other.month && year == other.year);
        }

        bool operator>(const myDate &other) const
        {
            if (year > other.year)
            {
                return true;
            }

            if (year == other.year && month > other.month)
            {
                return true;
            }

            if (year == other.year && month == other.month && day > other.day)
            {
                return true;
            }

            return false;
        }

        friend ostream& operator<<(ostream &out, const myDate &date)
        {
            out << date.day << "/" << date.month << "/" << date.year;
            return out;
        }
};

template <class T>
class Matrix {
    private:
        int row = 5;
        int col = 7;
        T arr[5][7];

    public:
        Matrix() {
            for (int i = 0; i < row; i++) {
                for (int j = 0; j < col; j++) {
                    arr[i][j] = T();
                }
            }
        }

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
    Matrix<myDate> dateMatrix;

    dateMatrix.printMatrix();

    dateMatrix.addValue(3, 3, myDate(12, 10, 2020));
    dateMatrix.addValue(3, 4, myDate(13, 11, 2021));
    dateMatrix.addValue(3, 6, myDate(25, 12, 2022));

    dateMatrix.printMatrix();

    cout << "Does it belong to: " << dateMatrix.BelongTo(myDate(13, 11, 2021)) << endl << endl;

    cout << "Max value is: " << dateMatrix.maxValue() << endl << endl;

    dateMatrix.printRow(3);

    return 0;
}
