# Lab 2

Deliverables

### Problem 1:
Write a recursive function RecursiveSum that computes the sum of all numbers from 1 to n, where n is given as input from user in the main which then calls the function and print the value returned.
Example: RecursiveSum (5) → returns (15)

### Problem 2:
Write a recursive function that calculates and returns the Fibonacci sequence value for a given integer number. Test your function from main by taking an integer input from the user, call the function and print the returned result.
A Fibonacci series can thus be given as, 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, . . . Test your function against series values.

### Problem 3:
Write a recursive function that sums all the elements of an array of integers. The function parameters should be int arr[ ], and int size.

### Problem 4:
Write a recursive function ZeroCount to Count the number of zeros in an array of integers recursively.

### Problem 5:
Write a recursive function to check whether an array is sorted in an increasing order.

### Problem 6:
Write a recursive function that returns the index of the first occurrence of an element in array if found and -1 if not found. What are the modifications to return the index of last occurrence?

### Problem 7:
Write a recursive function that checks whether a string is a substring of another string.

### Problem 8:
Write a recursive function GetMin to Find the minimum element in an array of integers.

### Problem 9:
The greatest common divisor of any two numbers (n, m) where m is greater than n, can be calculated according to the Euclidean equation GCD(n,m) = GCD(m, n mod m) and GCD(n, 0)= n . You are to implement a recursive function to find the GCD of any two numbers taken from the user, call it from the main and print the result in the main.
[Hint the user can enter the two numbers in any order].

### Problem 10:
Write a recursive function to determine how many digits a positive integer has, the integer is taken from the user, call it from the main and print the result in the main. [Hint you can find how many digits by dividing by 10 for example 145/10=14.5 , 14/10=1.4 , 1/10= 0.1 ]. [Hint know the difference between integer division and float division]

## Test Cases

### Test Case 1
Input:
```cpp
int main() {
    int n = 5;
    cout << "Sum from 1 to " << n << " is: " << RecursiveSum(n) << endl;
    return 0;
}
```
Expected Output:
- Sum from 1 to 5 is: 15

### Test Case 2
Input:
```cpp
int main() {
    int n = 6;
    cout << "Fibonacci number at position " << n << " is: " << Fibonacci(n) << endl;
    return 0;
}
```
Expected Output:
- Fibonacci number at position 6 is: 8

### Test Case 3
Input:
```cpp
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Sum of array elements: " << SumArray(arr, size) << endl;
    return 0;
}
```
Expected Output:
- Sum of array elements: 15

### Test Case 4
Input:
```cpp
int main() {
    int arr[] = {0, 1, 0, 3, 0, 5, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Number of zeros in the array: " << ZeroCount(arr, size) << endl;
    return 0;
}
```
Expected Output:
- Number of zeros in the array: 3

### Test Case 5
Input:
```cpp
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Is array sorted? " << (IsSorted(arr, size) ? "Yes" : "No") << endl;
    return 0;
}
```
Expected Output:
- Is array sorted? Yes

### Test Case 6
Input:
```cpp
int main() {
    int arr[] = {1, 2, 3, 2, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 2;
    cout << "First occurrence of " << target << " is at index: " << FindFirstOccurrence(arr, size, target) << endl;
    cout << "Last occurrence of " << target << " is at index: " << FindLastOccurrence(arr, size, target) << endl;
    return 0;
}
```
Expected Output:
- First occurrence of 2 is at index: 1
- Last occurrence of 2 is at index: 5

### Test Case 7
Input:
```cpp
int main() {
    string str = "Hello World";
    string substr = "World";
    cout << "Is '" << substr << "' a substring of '" << str << "'? " 
         << (IsSubstring(str, substr) ? "Yes" : "No") << endl;
    return 0;
}
```
Expected Output:
- Is 'World' a substring of 'Hello World'? Yes

### Test Case 8
Input:
```cpp
int main() {
    int arr[] = {5, 3, 1, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum element in the array: " << GetMin(arr, size) << endl;
    return 0;
}
```
Expected Output:
- Minimum element in the array: 1

### Test Case 9
Input:
```cpp
int main() {
    int a = 48, b = 18;
    cout << "GCD of " << a << " and " << b << " is: " << GCD(a, b) << endl;
    return 0;
}
```
Expected Output:
- GCD of 48 and 18 is: 6

### Test Case 10
Input:
```cpp
int main() {
    int num = 12345;
    cout << "Number of digits in " << num << " is: " << CountDigits(num) << endl;
    return 0;
}
```
Expected Output:
- Number of digits in 12345 is: 5