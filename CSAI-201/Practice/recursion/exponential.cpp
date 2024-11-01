#include <iostream>
using namespace std;

int exp(int num, int power)
{
    if (power == 0) { return 1; }
    return  num * exp(num, power-1);
}

int main() {
    int e = 2, x = 5;

    // 2 to the power of 5
    cout << exp(2, 5) << endl;

    return 0;
}