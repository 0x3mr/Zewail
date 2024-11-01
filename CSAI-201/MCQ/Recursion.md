### Question 1: Basic Terminology
*What is direct recursion?*

   A. When a function calls another indirectly.  
   B. When a function calls itself directly.  
   C. When a function calls another function in a chain.  
   D. When a function has no recursive calls.

<details>
<summary>Answer</summary>
B. When a function calls itself directly.
</details>

---

### Question 2: Recursive Types
*Which of the following describes linear recursion?*

   A. A recursive function calls itself more than once.  
   B. A recursive function calls itself exactly once.  
   C. A recursive function does not have a base case.  
   D. A recursive function has multiple base cases.

<details>
<summary>Answer</summary>
B. A recursive function calls itself exactly once.
</details>

---

### Question 3: Recursive Base Case
*What is the purpose of a base case in recursion?*

   A. To increase the size of the problem in each recursive call.  
   B. To provide a termination point for the recursion.  
   C. To reduce memory usage in recursion.  
   D. To add complexity to the recursive algorithm.

<details>
<summary>Answer</summary>
B. To provide a termination point for the recursion.
</details>

---

### Question 4: Recursion Structure
*Which statement correctly describes the recursive step in a function?*

   A. It simplifies the problem into a smaller instance.  
   B. It removes the need for a base case.  
   C. It directly solves the problem without further recursion.  
   D. It increases the problem size each time it recurses.

<details>
<summary>Answer</summary>
A. It simplifies the problem into a smaller instance.
</details>

---

### Question 5: Tail Recursion
*What defines a tail recursive function?*

   A. The function contains multiple recursive calls.  
   B. The recursive call is the last action in the function.  
   C. The recursive call is placed at the beginning of the function.  
   D. The function has multiple base cases.

<details>
<summary>Answer</summary>
B. The recursive call is the last action in the function.
</details>

---

### Question 6: Memory Usage
*Why can recursion lead to high memory usage?*

   A. Each recursive call creates a new stack frame.  
   B. Recursive functions skip the base case.  
   C. Recursive functions are faster than iterative ones.  
   D. The recursive calls reduce the stack memory.

<details>
<summary>Answer</summary>
A. Each recursive call creates a new stack frame.
</details>

---

### Question 7: Common Mistakes
*What is a common mistake in recursive implementations?*

   A. Having too many base cases.  
   B. Missing a base case or failing to reduce the problem size.  
   C. Recursively calling a different function.  
   D. Using tail recursion exclusively.

<details>
<summary>Answer</summary>
B. Missing a base case or failing to reduce the problem size.
</details>

---

### Question 8: Applications of Recursion
*Which of the following is NOT typically solved using recursion?*

   A. Tree and Graph Traversal  
   B. Depth-First Search  
   C. Fibonacci Sequence Calculation  
   D. Simple Multiplication

<details>
<summary>Answer</summary>
D. Simple Multiplication
</details>

---

### Question 9: Drawbacks of Recursion
*Which of the following is a drawback of using recursion?*

   A. Recursive code always runs faster.  
   B. Recursive functions can lead to stack overflow errors.  
   C. Recursive functions reduce memory usage.  
   D. Recursive functions are easier to debug.

<details>
<summary>Answer</summary>
B. Recursive functions can lead to stack overflow errors.
</details>

---

### Question 10: Types of Recursion
*What type of recursion is used when a function indirectly calls itself by calling another function that then calls the original function?*

   A. Direct Recursion  
   B. Tree Recursion  
   C. Indirect Recursion  
   D. Tail Recursion

<details>
<summary>Answer</summary>
C. Indirect Recursion
</details>

---

### Question 11: Tail Recursion Characteristics
*What advantage does tail recursion provide over other types of recursion?*

   A. It requires fewer recursive calls.  
   B. It allows compilers to optimize memory usage by reusing the stack frame.  
   C. It eliminates the need for a base case.  
   D. It is always faster than other types of recursion.

<details>
<summary>Answer</summary>
B. It allows compilers to optimize memory usage by reusing the stack frame.
</details>

---

### Question 12: Recursive Steps
*Which of the following ensures that a recursive function will terminate?*

   A. Increasing the problem size in each recursive call  
   B. Including a recursive step with no recursive call  
   C. Using an iterative process inside the recursive function  
   D. Reducing the problem size towards a base case

<details>
<summary>Answer</summary>
D. Reducing the problem size towards a base case
</details>

---

### Question 13: Analyzing Code Execution
*What is the output of the following code snippet?*

```cpp
#include <iostream>
using namespace std;

int countDown(int n) {
    if (n <= 0)
        return 0;
    cout << n << " ";
    return countDown(n - 1);
}

int main() {
    countDown(3);
    return 0;
}
```

   A. 3 2 1 0  
   B. 3 2 1  
   C. 0 1 2 3  
   D. Infinite loop

<details>
<summary>Answer</summary>
B. 3 2 1
</details>

---

### Question 14: Recursive Algorithm Design
*Which of the following is the correct base case for a recursive factorial function?*

```cpp
int factorial(int n) {
    // Base case
    if (______) 
        return 1;
    // Recursive step
    return n * factorial(n - 1);
}
```

   A. `n > 1`  
   B. `n == 0`  
   C. `n == 1`  
   D. Both B and C  

<details>
<summary>Answer</summary>
D. Both B and C
</details>

---

### Question 15: Debugging Recursive Functions
*What will be the result of calling `sum(4)` in the following code?*

```cpp
int sum(int n) {
    if (n <= 1) 
        return n;
    return n + sum(n - 2);
}
```

   A. 10  
   B. 6  
   C. Infinite recursion  
   D. 4

<details>
<summary>Answer</summary>
B. 6
</details>

---

### Question 16: Recursion Complexity
*Which of the following statements about recursion complexity is TRUE?*

   A. Linear recursion has exponential time complexity.  
   B. Tree recursion often has exponential time complexity.  
   C. Tail recursion always has constant time complexity.  
   D. Indirect recursion is always less complex than direct recursion.

<details>
<summary>Answer</summary>
B. Tree recursion often has exponential time complexity.
</details>

---

### Question 17: Recursive Tree Traversal
*In which of the following scenarios can infinite recursion occur if a base case is not defined?*

    A. A function that increments a counter until it reaches a maximum
    B. A function that calls itself to decrement a number until it reaches zero
    C. A function that swaps values in a list until they are in order
    D. A function that converts a string to uppercase

<details>
<summary>Answer</summary>
B. A function that calls itself to decrement a number until it reaches zero
</details>

---

### Question 18: Recursive Stack Behavior
*Consider the following recursive function:*

```cpp
int mystery(int n) {
    if (n == 0)
        return 1;
    return n * mystery(n - 1);
}
```

*What is the sequence of return values when `mystery(3)` is called?*

   A. 1, 2, 6  
   B. 3, 2, 1  
   C. 6, 2, 1  
   D. 1, 6, 2

<details>
<summary>Answer</summary>
A. 1, 2, 6
</details>

---

### Question 19: Tail Recursion Optimization
*Which of the following can optimize a tail-recursive function to avoid stack overflow?*

   A. Compiler optimizations that replace recursive calls with loops  
   B. Increasing stack memory size manually  
   C. Implementing the function in an iterative manner  
   D. Changing the recursion into tree recursion

<details>
<summary>Answer</summary>
A. Compiler optimizations that replace recursive calls with loops
</details>

---

### Question 20: Recursive vs Iterative Solutions
*Which is NOT a drawback of recursion compared to iteration?*

   A. Potential for stack overflow with deep recursion  
   B. Higher memory consumption due to multiple stack frames  
   C. Generally easier to implement and understand for all types of problems  
   D. May be slower than iterative solutions in terms of performance

<details>
<summary>Answer</summary>
C. Generally easier to implement and understand for all types of problems
</details>

---

### Question 21: Fibonacci Sequence Recursion
*What is the time complexity of a naive recursive Fibonacci function?*

```cpp
int fibonacci(int n) {
    if (n <= 1) 
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
```

   A. O(n)  
   B. O(log n)  
   C. O(2^n)  
   D. O(n^2)

<details>
<summary>Answer</summary>
C. O(2^n)
</details>

---

### Question 22: Base Case Pitfalls
*Which of the following causes a recursive function to run indefinitely?*

   A. Having no recursive call  
   B. Having no base case  
   C. Using a loop in the recursive function  
   D. Having multiple base cases

<details>
<summary>Answer</summary>
B. Having no base case
</details>

---

### Question 23: Recursive Stack Frames
*Which of the following statements about stack frames in recursion is FALSE?*

   A. Each recursive call creates a new stack frame.  
   B. Each stack frame is deleted immediately after the recursive call is made.  
   C. Stack frames contain the function’s local variables and return address.  
   D. A deep recursion can lead to stack overflow due to too many stack frames.

<details>
<summary>Answer</summary>
B. Each stack frame is deleted immediately after the recursive call is made.
</details>

---

### Question 24: Recursion on Arrays
*What is the base case in the following recursive function that finds the minimum value in an array?*

```cpp
int findMin(int arr[], int n) {
    if (n == 1)
        return arr[0];
    return min(arr[n-1], findMin(arr, n-1));
}
```

   A. When `n` is equal to 0  
   B. When `n` is equal to 1  
   C. When `arr[n-1]` is the smallest  
   D. When `arr[0]` is the smallest

<details>
<summary>Answer</summary>
B. When `n` is equal to 1
</details>

---

### Question 25: Recursive Tree Depth
*How many recursive calls are made when calculating `fibonacci(5)` with the following recursive function?*

```cpp
int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
```

   A. 10  
   B. 11  
   C. 15  
   D. 9

<details>
<summary>Answer</summary>
C. 15
</details>

---

### Question 26: Recursive Functions with Multiple Calls
*Which type of recursion is used in the following example?*

```cpp
int complexRecursion(int n) {
    if (n <= 1)
        return n;
    return complexRecursion(n - 1) + complexRecursion(n - 2);
}
```

   A. Linear Recursion  
   B. Tail Recursion  
   C. Tree Recursion  
   D. Indirect Recursion

<details>
<summary>Answer</summary>
C. Tree Recursion
</details>

---

### Question 27: Identifying Indirect Recursion
*Which of the following code examples demonstrates indirect recursion?*

   A.
   ```cpp
   void funcA() {
       funcA();
   }
   ```
   B.
   ```cpp
   void funcB() {
       funcC();
   }
   void funcC() {
       funcB();
   }
   ```
   C.
   ```cpp
   void funcD(int x) {
       if (x > 0) funcD(x - 1);
   }
   ```
   D.
   ```cpp
   int funcE(int n) {
       return funcE(n - 1) + 1;
   }
   ```

<details>
<summary>Answer</summary>
B.
</details>

---

### Question 28: Performance Comparison
*Which is generally faster, an iterative or a recursive Fibonacci function?*

   A. Recursive, because it uses multiple calls  
   B. Iterative, because it calculates each value only once  
   C. Recursive, because it avoids loops  
   D. They have identical performance

<details>
<summary>Answer</summary>
B. Iterative, because it calculates each value only once
</details>

---

### Question 29: Recursive and Iterative Equivalence
*Which of the following can always be implemented both recursively and iteratively?*

   A. Depth-First Tree Traversal  
   B. Quicksort  
   C. Fibonacci Sequence  
   D. All of the above

<details>
<summary>Answer</summary>
D. All of the above
</details>

---

### Question 30: Recursive Dynamic Programming
*Which of the following improves the efficiency of a recursive Fibonacci function to O(n)?*

   A. Replacing recursion with iteration  
   B. Using dynamic programming or memoization  
   C. Adding more base cases  
   D. Increasing the depth of recursion

<details>
<summary>Answer</summary>
B. Using dynamic programming or memoization
</details>

---
