#include <iostream>
using namespace std;

int main() {
    int X = 7;
    int* P;

    cout << "\nPointer Initialization - Method 1 -------" << endl;
    P = &X;
    cout << "\nThe & operator: &X = " << &X << endl; // address of x
    cout << "    The value of P = " << P << endl;    // address of x
    cout << " The value of X: X = " << X << endl;    // 7
    cout << "The * operator: *P = " << *P << endl;   // 7

    int* P2;

    cout << "\nPointer Initialization - Method 2 -------" << endl;
    P2 = P;
    cout << "\nP = " << P << " and P2 = " << P2;     // address of x and address of x
    *P2 = 30;
    cout << "\n\nAfter statement: *P2 = 30;";
    cout << "\nNow   X = " << X << ", why?" << endl;   // 30
    cout << "Now *P = " << *P2 << ", why?" << endl; // 30

    cout << "\n[Q1] How is the value of \"X\" changed?" << endl;
    cout << "\n*P2 points to the same memory as P, which is X, so *P2 = 30 changes X.\n";

    int* P3;

    cout << "\n\nPointer Initialization - Method 3 -------" << endl;
    P3 = new int;
    cout << "\n*P3 = " << *P3 << ", why?";

    cout << "\n[Q2] What is the value of *P3? and why?" << endl;
    cout << "\n*P3 is garbage because the memory was allocated but not initialized.\n";

    *P3 = 7777;
    cout << "\n\n*P3 = " << *P3;
    delete P3;

    P3 = new int;
    *P3 = 100;
    delete P3;

    cout << "\n\n*P3 (after delete) = " << *P3 << ", why?";

    cout << "\n[Q3] What is the value of *P3? and why?" << endl;
    cout << "\n*P3 is garbage after delete because the memory is freed.\n";

    cout << "\nP3 (after delete) = " << P3 << ", why not equal to NULL?";

    cout << "\n[Q4] What is the value of P3? and why not NULL?" << endl;
    cout << "\nP3 still holds the old address; delete doesn't reset the pointer itself.\n";

    P3 = NULL;
    cout << "\nP3 = " << P3 << endl;

    int s = 5;
    int* S1 = &s;

    // Fix:
    // int s = 5;
    // int* S1 = new int;
    // *S1 = s;

    // After the 1st run, Uncomment the next line and re-run
    // delete S1;

    cout << "\n[Q5] What happens when you uncomment & run? and why is that??" << endl;
    cout << "\nThe program crashes because you can't delete a pointer to stack memory like &s.\n";
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
    cout << "\nThe program crashes because you are trying to delete a pointer that was already deleted.\n";

    cout << endl;
    return 0;
}
