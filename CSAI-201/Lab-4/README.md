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
    InventoryItem inventory[3] = {
        InventoryItem(101, "Laptop", 999.99),
        InventoryItem(102, "Mouse", 29.99),
        InventoryItem(103, "Keyboard", 59.99)
    };

    cout << "=== Inventory Management System ===\n\n";

    cout << "1. Listing all items:\n";
    for (int i = 0; i < 3; i++) {
        inventory[i].display();
    }
    cout << endl;

    cout << "2. Updating item ID 102:\n";
    for (int i = 0; i < 3; i++) {
        if (inventory[i].getItemID() == 102) {
            cout << "Before update: ";
            inventory[i].display();
            
            inventory[i].setItemName("Wireless Mouse");
            inventory[i].setItemPrice(39.99);
            
            cout << "After update: ";
            inventory[i].display();
        }
    }
    cout << endl;

    cout << "3. Displaying item ID 101:\n";
    for (int i = 0; i < 3; i++) {
        if (inventory[i].getItemID() == 101) {
            inventory[i].display();
        }
    }

    return 0;
}
```

Expected Output:
```
=== Inventory Management System ===

1. Listing all items:

 Item #101:
  - Laptop
  - $999.99

 Item #102:
  - Mouse
  - $29.99

 Item #103:
  - Keyboard
  - $59.99

2. Updating item ID 102:
Before update: 
 Item #102:
  - Mouse
  - $29.99
After update: 
 Item #102:
  - Wireless Mouse
  - $39.99

3. Displaying item ID 101:

 Item #101:
  - Laptop
  - $999.99
```