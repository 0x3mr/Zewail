### Question 1:
*Queues:*

   A. First In First Out  
   B. First In Last Out  
   C. Fast In First Out  
   D. First In Fast Out  

<details>
<summary>Answer</summary>
A. First In First Out
</details>

---

### Question 2:
*Which operation adds an element to the end of the queue?*

   A. Enqueue  
   B. Dequeue  
   C. Push  
   D. Pop  

<details>
<summary>Answer</summary>
A. Enqueue
</details>

---

### Question 3:
*Which operation removes an element from the front of the queue?*

   A. Enqueue  
   B. Dequeue  
   C. Insert  
   D. Delete  

<details>
<summary>Answer</summary>
B. Dequeue
</details>

---

### Question 4:
*In a circular queue, how do you check if the queue is full?*

   A. `rear == size - 1`  
   B. `(rear + 1) % size == front`  
   C. `front == rear`  
   D. `rear == front`  

<details>
<summary>Answer</summary>
B. `(rear + 1) % size == front`
</details>

---

### Question 5:
*Which of the following data structures is ideal for a queue implementation?*

   A. Array  
   B. Linked List  
   C. Stack  
   D. Both Array and Linked List  

<details>
<summary>Answer</summary>
D. Both Array and Linked List
</details>

---

### Question 6:
*What is the main difference between a stack and a queue?*

   A. Stack is FIFO, Queue is LIFO  
   B. Stack is LIFO, Queue is FIFO  
   C. Both are LIFO  
   D. Both are FIFO  

<details>
<summary>Answer</summary>
B. Stack is LIFO, Queue is FIFO
</details>

---

### Question 7:
*Which scenario best describes an application of a queue?*

   A. Call stack for recursive functions  
   B. Undo functionality in text editors  
   C. Printer task scheduling  
   D. File organization on disk  

<details>
<summary>Answer</summary>
C. Printer task scheduling
</details>

---

### Question 8:
*What does the following code output?*

```cpp
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(5);
    q.push(10);
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
    return 0;
}
```

   A. 5 5  
   B. 10 10  
   C. 5 10  
   D. 10 5  

<details>
<summary>Answer</summary>
C. 5 10
</details>

---

### Question 9:
*In a priority queue, which element is dequeued first if priorities are represented as integers, with 1 as the highest?*

   A. The element with priority 1  
   B. The element with priority 10  
   C. The element at the front  
   D. The element at the rear  

<details>
<summary>Answer</summary>
A. The element with priority 1
</details>

---

### Question 10:
*Which data structure is often used to implement a priority queue?*

   A. Array  
   B. Linked List  
   C. Binary Heap  
   D. Stack  

<details>
<summary>Answer</summary>
C. Binary Heap
</details>

---

### Question 11:
*What will happen if you `dequeue` an element from an empty queue?*

   A. It will remove the front element  
   B. It will throw an error  
   C. It will return NULL  
   D. It will enqueue a new element  

<details>
<summary>Answer</summary>
B. It will throw an error
</details>

---

### Question 12:
*What is the time complexity of the `enqueue` operation in a queue implemented using a linked list?*

   A. O(1)  
   B. O(n)  
   C. O(log n)  
   D. O(n^2)  

<details>
<summary>Answer</summary>
A. O(1)
</details>

---

### Question 13:
*In a circular queue, how is the rear pointer updated after inserting an element?*

   A. `rear++`  
   B. `rear = (rear + 1) % size`  
   C. `rear--`  
   D. `rear = (rear - 1) % size`  

<details>
<summary>Answer</summary>
B. `rear = (rear + 1) % size`
</details>

---

### Question 14:
*Which C++ STL container supports queue operations?*

   A. vector  
   B. queue  
   C. stack  
   D. list  

<details>
<summary>Answer</summary>
B. queue
</details>

---

### Question 15:
*What is a potential problem with an array-based queue implementation?*

   A. Queue overflow when front and rear reach max size  
   B. No way to remove elements  
   C. Queue cannot handle negative integers  
   D. Requires O(n) for dequeue operations  

<details>
<summary>Answer</summary>
A. Queue overflow when front and rear reach max size
</details>

---

### Question 16:
*Which operation would you use to view the first element without removing it in a queue?*

   A. `pop`  
   B. `front`  
   C. `back`  
   D. `push`  

<details>
<summary>Answer</summary>
B. `front`
</details>

---

### Question 17:
*What is the result of the following C++ code?*

```cpp
#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;
    pq.push(10);
    pq.push(5);
    pq.push(20);
    cout << pq.top() << endl;
    return 0;
}
```

   A. 5  
   B. 10  
   C. 20  
   D. Compilation error  

<details>
<summary>Answer</summary>
C. 20
</details>

---

### Question 18:
*Which of the following is true for a priority queue?*

   A. Dequeues elements in random order  
   B. Dequeues elements based on priority  
   C. Operates in LIFO order  
   D. Operates in FIFO order  

<details>
<summary>Answer</summary>
B. Dequeues elements based on priority
</details>

---

### Question 19:
*What is the main issue with using arrays for queue implementation?*

   A. Constant time complexity for all operations  
   B. Fixed size  
   C. Dynamic memory allocation  
   D. Flexibility in element access  

<details>
<summary>Answer</summary>
B. Fixed size
</details>

---

### Question 20:
*Which operation can check if a queue is empty?*

   A. `isEmpty`  
   B. `isFull`  
   C. `peek`  
   D. `size`  

<details>
<summary>Answer</summary>
A. `isEmpty`
</details>

---

### Question 21:
*What is the time complexity of dequeueing from a linked-list queue?*

   A. O(1)  
   B. O(n)  
   C. O(log n)  
   D. O(n^2)  

<details>
<summary>Answer</summary>
A. O(1)
</details>

---

### Question 22:
*What is the purpose of `rear` in a queue?*

   A. Tracks the front element  
   B. Points to the last element  
   C. Points to the middle element  
   D. Points to an empty position  

<details>
<summary>Answer</summary>
B. Points to the last element
</details>

---

### Question 23:
*Which C++ library function checks if a queue is empty?*

   A. `empty()`  
   B. `isFull()`  
   C. `top()`  
   D. `size()`  

<details>
<summary>Answer</summary>
A. `empty()`
</details>

---

### Question 24:
*In a priority queue, how is priority usually represented?*

   A. Boolean values  
   B. Strings  
   C. Integer values  
   D. Floats  

<details>
<summary>Answer</summary>
C. Integer values
</details>

---

### Question 25:
*Which of the following can cause a circular queue overflow?*

   A. `front = -1`  
   B. `(rear + 1) % size == front`  
   C. `rear = -1`  
   D. `rear = front`  

<details>
<summary>Answer</summary>
B. `(rear + 1) % size == front`
</details>

---
