### Question 1:
*What is the fundamental principle of a Stack data structure?*

    A. First In First Out (FIFO)
    B. Last In First Out (LIFO)
    C. Random Access
    D. Priority Based Access
<details>
<summary>Answer</summary>
B. Last In First Out (LIFO)
</details>

---

### Question 2:
*Which pointer/index in a stack always points to the last item pushed?*

    A. Base
    B. Top
    C. Head
    D. Tail
<details>
<summary>Answer</summary>
B. Top
</details>

---

### Question 3:
*What is the initial value of 'Top' in an empty array-based stack implementation?*

    A. 0
    B. 1
    C. -1
    D. NULL
<details>
<summary>Answer</summary>
C. -1
</details>

---

### Question 4:
*Which of these is NOT a basic operation of Stack ADT?*

    A. Push
    B. Pop
    C. Peek
    D. Sort
<details>
<summary>Answer</summary>
D. Sort
</details>

---

### Question 5:
*How can a Stack be implemented?*

    A. Only using Arrays
    B. Only using Linked Lists
    C. Using either Arrays or Linked Lists
    D. Using only Binary Trees
<details>
<summary>Answer</summary>
C. Using either Arrays or Linked Lists
</details>

---

### Question 6:
*In an array-based implementation, when is a stack considered full?*

    A. When Top = -1
    B. When Top = 0
    C. When Top = Max_Size
    D. When Top = Max_Size - 1
<details>
<summary>Answer</summary>
D. When Top = Max_Size - 1
</details>

---

### Question 7:
*What is returned by Pop() operation when the stack is empty in the given implementation?*

```cpp
class Stack {
private:
    int Top;
    int* Stack_Array;
    int Max_Size;

public:
    Stack(int n) {
        Stack_Array = new int[n];
        Max_Size = n;
        Top = -1;
    }

    int Pop() {
        if (!Is_Empty()) {
            int d = Stack_Array[Top];
            Top = Top - 1;
            return d;
        }
        else {
            std::cout << "\n The stack is empty";
            return -10000;  // Error value
        }
    }

    bool Is_Empty() {
        return (Top == -1);
    }
};
```

    A. 0
    B. -1
    C. NULL
    D. -10000
<details>
<summary>Answer</summary>
D. -10000
</details>

---

### Question 8:
*In a linked list implementation of stack, where is a new element inserted?*

    A. At the end of the list
    B. At the beginning of the list
    C. At a random position
    D. At the middle of the list
<details>
<summary>Answer</summary>
B. At the beginning of the list
</details>

---

### Question 9:
*Which of these is an application of Stack?*

    A. Queue management
    B. Decimal to binary conversion
    C. Sorting algorithms
    D. Binary search
<details>
<summary>Answer</summary>
B. Decimal to binary conversion
</details>

---

### Question 10:
*What happens when you try to push an element into a full stack?*

    A. Stack overflow
    B. Stack underflow
    C. Element gets added anyway
    D. Previous elements get deleted
<details>
<summary>Answer</summary>
A. Stack overflow
</details>

---

### Question 11:
*What is the time complexity of Push operation in a stack?*

    A. O(n)
    B. O(log n)
    C. O(1)
    D. O(n²)
<details>
<summary>Answer</summary>
C. O(1)
</details>

---

### Question 12:
*Which operation is used to read the top element without removing it?*

    A. Pop
    B. Push
    C. Peek
    D. IsEmpty
<details>
<summary>Answer</summary>
C. Peek
</details>

---

### Question 13:
*In linked list implementation, what is the Count variable used for?*

    A. To store the maximum size
    B. To keep track of number of elements
    C. To store the top value
    D. To check if stack is empty
<details>
<summary>Answer</summary>
B. To keep track of number of elements
</details>

---

### Question 14:
*Which of these applications uses stack for its implementation?*

    A. Breadth First Search
    B. Function Call Processing
    C. Priority Queue
    D. Round Robin Scheduling
<details>
<summary>Answer</summary>
B. Function Call Processing
</details>

---

### Question 15:
*What is the main advantage of linked list implementation over array implementation of stack?*

    A. Better memory utilization
    B. Faster access time
    C. Simpler implementation
    D. Random access capability
<details>
<summary>Answer</summary>
A. Better memory utilization
</details>

---

### Question 16:
*Which parsing application commonly uses stack?*

    A. XML parsing
    B. Regular expression parsing
    C. Balanced parentheses checking
    D. String parsing
<details>
<summary>Answer</summary>
C. Balanced parentheses checking
</details>

---

### Question 17:
*What is the condition for stack underflow?*

    A. When trying to push into a full stack
    B. When trying to pop from an empty stack
    C. When top reaches maximum size
    D. When stack is initialized
<details>
<summary>Answer</summary>
B. When trying to pop from an empty stack
</details>

---

### Question 18:
*In array implementation, what is Max_Size used for?*

    A. Current number of elements
    B. Maximum allowed elements
    C. Size of top element
    D. Minimum size required
<details>
<summary>Answer</summary>
B. Maximum allowed elements
</details>

---

### Question 19:
*Which data structure is typically used in implementing the 'undo' operation in text editors?*

    A. Queue
    B. Stack
    C. Linked List
    D. Binary Tree
<details>
<summary>Answer</summary>
B. Stack
</details>

---

### Question 20:
*What happens to the Top pointer after a successful push operation?*

    A. Decrements by 1
    B. Increments by 1
    C. Remains unchanged
    D. Becomes NULL
<details>
<summary>Answer</summary>
B. Increments by 1
</details>

---

### Question 21:
*In linked list implementation, what does Top point to after a pop operation?*

    A. NULL
    B. First node
    C. Next node in sequence
    D. Previous top node's next pointer
<details>
<summary>Answer</summary>
C. Next node in sequence
</details>

---

### Question 22:
*Which operation is used to check if a stack is empty?*

    A. Peek()
    B. isEmpty()
    C. isFull()
    D. Pop()
<details>
<summary>Answer</summary>
B. isEmpty()
</details>

---

### Question 23:
*What is the space complexity of an array implementation of stack?*

    A. O(1)
    B. O(n)
    C. O(log n)
    D. O(n²)
<details>
<summary>Answer</summary>
B. O(n)
</details>

---

### Question 24:
*Which of these is NOT a typical application of stack?*

    A. Expression evaluation
    B. Backtracking
    C. Sorting
    D. Function calls
<details>
<summary>Answer</summary>
C. Sorting
</details>

---

### Question 25:
*What happens to Count variable after a successful push operation in linked list implementation?*

    A. Decrements by 1
    B. Increments by 1
    C. Remains unchanged
    D. Becomes 0
<details>
<summary>Answer</summary>
B. Increments by 1
</details>

---

### Question 26:
*Which of the following operations is typically performed in constant time O(1) in a stack data structure?*

    A. Push an element onto the stack
    B. Pop an element from the stack
    C. Peek at the top element of the stack
    D. All of the above
<details>
<summary>Answer</summary>
D. All of the above
</details>

---

### Question 27:
*What is the time complexity of Peek operation?*


    A. O(n)
    B. O(log n)
    C. O(1)
    D. O(n²)
<details>
<summary>Answer</summary>
C. O(1)
</details>

---

### Question 28:

*What will happen if you attempt to pop an element from an empty stack?*

    A. The stack will return a null value.
    B. The stack will throw an underflow exception.
    C. The stack will return the last pushed element.
    D. The operation will succeed without any issues.
<details>
<summary>Answer</summary>
B. The stack will throw an underflow exception.
</details>

---

### Question 29:
*What is the main disadvantage of array implementation of stack?*

    A. Slower access time
    B. More complex implementation
    C. Fixed size
    D. Higher memory usage
<details>
<summary>Answer</summary>
C. Fixed size
</details>

---

### Question 30:
*Which of these best describes a stack data structure?*

    A. Linear data structure with two-way access
    B. Non-linear data structure
    C. Linear data structure with one-way access
    D. Hierarchical data structure
<details>
<summary>Answer</summary>
C. Linear data structure with one-way access
</details>

---
