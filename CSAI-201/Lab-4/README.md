# Lab 4

Deliverables

### Exercise 1:
Answer the 6 questions found in the provided code, which demonstrates various pointer initialization methods, memory allocation, and deallocation techniques. Discuss your answers with your TA.

### Exercise 2:
Implement a function `CloneArray` that takes an array and its size as parameters, returning a new cloned array with the same contents as the input array.

### Exercise 3:
Write a function `CompressArray` that removes occurrences of `#`, `$`, and `&` from an input array of characters without altering the original array. Write a `main` function that asks the user to input the number of elements, the array, and then prints the result after calling `CompressArray`.

### Exercise 4:
Design a simple inventory management system with a class `InventoryItem` representing items in the inventory. The program should allow the user to add, update, display, and list inventory items using an array of `InventoryItem` objects.

## Test Cases

### Test Case 1
Input:
```cpp
int main() {
    int X = 7;
    int* P;
    P = &X;
    cout << "The value of X is: " << X << endl;
    return 0;
}
```
Expected Output:
- The value of X is: 7

### Test Case 2
Input:
```cpp
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int* clonedArr = CloneArray(arr, 5);
    for(int i = 0; i < 5; i++)
        cout << clonedArr[i] << " ";
    delete[] clonedArr;
    return 0;
}
```
Expected Output:
- 1 2 3 4 5

### Test Case 3
Input:
```cpp
int main() {
    char arr[] = "ckeo$mp##m&$n";
    char* compressedArr = CompressArray(arr);
    cout << compressedArr << endl;
    delete[] compressedArr;
    return 0;
}
```
Expected Output:
- ckeompmn

### Test Case 4
Input:
```cpp
int main() {
    InventoryItem items[3];
    items[0].setDetails(1, "Item1", 10.0);
    items[1].setDetails(2, "Item2", 20.0);
    items[2].setDetails(3, "Item3", 30.0);
    for(int i = 0; i < 3; i++) {
        items[i].display();
    }
    return 0;
}
```
Expected Output:
- Displays details of three inventory items.