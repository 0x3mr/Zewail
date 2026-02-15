# Lab 3

Deliverables

### Problem 1:
Write a function template that returns the minimum element in an array. The arguments of the function should be the array name and its size. Test your function with arrays of type `int`, `char`, and `string`, calling the function from `main()` and printing the result.

### Problem 2:
Write a class template `Matrix` to represent a 5x7 matrix that can store `int`, `double`, or `string` data types. Provide the following member functions:
- `AddValue(row, col, Value)`: Adds a value to the matrix.
- `BelongTo(Value)`: Checks whether a given value belongs to the matrix.
- `PrintRow(row)`: Prints all values in a given row.
- `Print()`: Prints all values in the matrix.
- `MaxValue()`: Returns the maximum value in the matrix.

### Problem 3:
Define a class `myDate` with data members (`day`, `month`, `year`) and member functions. Use the `Matrix` template to declare a `Matrix` of `myDate` objects. Call the member functions of `Matrix` using a `dateMatrix` object. Identify any issues in the code and write the necessary fixes.

### Problem 4 (Comprehensive):
Create a class template `myPair` to represent a generic key-value pair. Provide the following member functions:
- Non-default constructor for initialization.
- `setPair()`: Sets both the key and the value of the pair.
- Getters for the key and value members.
- Overload the `==` operator to check if two pairs have the same key-value combination.

Next, create a class template `myMap` that holds a list of 100 `myPair` objects and includes member functions for adding, updating, and deleting pairs, as well as searching for values by key. Write a program that uses the `myMap` class to map an ID (integer) to a name (string).

## Test Cases

### Test Case 1
Input:

```cpp
int arr[] = {3, 1, 4, 1, 5};
int size = sizeof(arr) / sizeof(arr[0]);
cout << "Minimum element in the array: " << getMin(arr, size) << endl;
```

Expected Output:
- Minimum element in the array: 1

### Test Case 2
Input:

```cpp
Matrix<int> mat;
mat.AddValue(2, 3, 42);
cout << "Matrix value at (2, 3): " << mat.BelongTo(42) << endl;
```

Expected Output:
- Matrix value at (2, 3): Yes

### Test Case 3
Input:

```cpp
myDate d1 = {1, 1, 2000};
myDate d2 = {25, 12, 2024};
Matrix<myDate> dateMatrix;
dateMatrix.AddValue(0, 0, d1);
dateMatrix.AddValue(1, 1, d2);
dateMatrix.Print();
```

Expected Output:
- Matrix prints all stored dates with day, month, and year values.

### Test Case 4
Input:

```cpp
myMap<int, string> idMap;
idMap.addPair(1, "Alice");
idMap.addPair(2, "Bob");
cout << "ID 1 belongs to: " << idMap.getValue(1) << endl;
```

Expected Output:
- ID 1 belongs to: Alice