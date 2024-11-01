#include <iostream>
using namespace std;

int factorial(int number) {
    int result;
    if (number == 0)
    {
        result = 1;
    }
    else
    {
        result = number * factorial(number-1);
    }
    return result;
}

int main() {
    cout << factorial(4) << endl;
    return 0;
}