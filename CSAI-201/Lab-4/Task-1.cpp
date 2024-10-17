#include <iostream>
using namespace std;

int main() {
    int X = 7;
    int* P;

    cout << "\nPointer Initialization - Method 1 -------" << endl;
    P = &X;
    cout << "\nThe & operator: &X = " << &X << endl;
    cout << "    The value of P = " << P << endl;
    cout << " The value of X: X = " << X << endl;
    cout << "The * operator: *P = " << *P << endl;

    int* P2;

    cout << "\nPointer Initialization - Method 2 -------" << endl;
    P2 = P;
    cout << "\nP = " << P << " and P2 = " << P2;
    *P2 = 30;
    cout << "\n\nAfter statement: *P2 = 30;";
    cout << "\nNow X = " << X << ", why?" << endl;

    cout << "\n[Q1] How is the value of \"X\" changed?" << endl;
    cout << "\nBecause you are changing the value of the address located at P2 which is X since you cloned it from P which was was previously set to &X" << endl;

    int* P3;

    cout << "\n\nPointer Initialization - Method 3 -------" << endl;
    P3 = new int;
    cout << "\n*P3 = " << *P3 << ", why?";

    cout << "\n[Q2] What is the value of *P3? and why?" << endl;
    cout << "\nBecause you never set it to any value so it would be set to 0 by default." << endl;

    *P3 = 7777;
    cout << "\n\n*P3 = " << *P3;
    delete P3;

    P3 = new int;
    *P3 = 100;
    delete P3;
    cout << "\n\n*P3 (after delete) = " << *P3 << ", why?";

    cout << "\n[Q3] What is the value of *P3? and why?" << endl;
    cout << "\nSince you deleted it, it has no value now and it is now assigned a garbage value\n" << endl;

    cout << "\nP3 (after delete) = " << P3 << ", why not equal to NULL?";

    cout << "\n[Q4] What is the value of P3? and why not NULL?" << endl;
    cout << "\nIt is the same value of its originally address.\nThe address does not change after deletion.\nOnly the value of the pointer changes.\n" << endl;

    P3 = NULL;
    cout << "\nP3 = " << P3 << endl;

    int s = 5;
    int* S1 = &s;
    // int* S1 = new int;
    // *S1 = s;

    // After the 1st run, Uncomment the next line and re-run
    // delete S1;

    cout << "\n[Q5] What happens when you uncomment & run? and why is that??" << endl;
    cout << "\nWhen I uncommented:\nThe entire program stopped.\nIt stopped because 'delete' setted a garbage value to S1\nAnd S1's value is &s therefore it setted the garbage value to the address of integer s\nwhich will break the program." << endl;
    cout << "\nWe can fix it by changing the line to:\n    int* S1 = new int;\n    *S1 = s;" << endl;
    // cout << s << endl;
    // cout << &s << endl;
    // cout << S1 << endl;
    // cout << &S1 << endl;
    // cout << *S1 << endl;

    int* S2 = new int;
    int* S3 = S2;
    delete S3;

    // After the 1st run, Uncomment the next line and re-run
    // delete S2;

    cout << "\n[Q6] What happens when you uncomment & run? and why is that??" << endl;
    cout << "\nThe program breaks.\nI do not know why." << endl;

    cout << endl;
    return 0;
}
