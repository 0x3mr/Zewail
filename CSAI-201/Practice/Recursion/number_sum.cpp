#include <iostream>
using namespace std;

int numSum(int number) {
    if (number == 0) { return 0; }
    return number + numSum(number-1);
}

int main() {
    cout << numSum(5) << endl;
    return 0;
}