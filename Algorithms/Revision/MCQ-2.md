### **Factorial**  

#### **Question 1:**  
*What is the time complexity of a recursive factorial function?*  

A. \( O(1) \)  
B. \( O(n) \)  
C. \( O(n^2) \)  
D. \( O(2^n) \)  

<details><summary>Answer</summary>  
**B. \( O(n) \)** (Each recursive call reduces the problem by 1, leading to \( n \) multiplications.)  
</details>  

---

#### **Question 2:**  
*What is the space complexity of an iterative factorial function?*  

A. \( O(1) \)  
B. \( O(n) \)  
C. \( O(n^2) \)  
D. \( O(\log n) \)  

<details><summary>Answer</summary>  
**A. \( O(1) \)** (Iterative factorial uses constant space.)  
</details>  

---

#### **Question 3:**  
*What is the worst-case time complexity of computing \( n! \) using a naive recursive approach?*  

A. \( O(n) \)  
B. \( O(n \log n) \)  
C. \( O(2^n) \)  
D. \( O(n!) \)  

<details><summary>Answer</summary>  
**A. \( O(n) \)** (Each call does \( O(1) \) work, and there are \( n \) calls.)  
</details>  

---

### **Sequential (Linear) Search**  

#### **Question 4:**  
*What is the worst-case time complexity of sequential search in an unsorted array?*  

A. \( O(1) \)  
B. \( O(\log n) \)  
C. \( O(n) \)  
D. \( O(n^2) \)  

<details><summary>Answer</summary>  
**C. \( O(n) \)** (May need to check all \( n \) elements.)  
</details>  

---

#### **Question 5:**  
*In the best case, sequential search finds an element in:*  

A. \( O(1) \)  
B. \( O(\log n) \)  
C. \( O(n) \)  
D. \( O(n^2) \)  

<details><summary>Answer</summary>  
**A. \( O(1) \)** (If the first element is the target.)  
</details>  

---

#### **Question 6:**  
*What is the average-case time complexity of sequential search if the target is equally likely to be at any position?*  

A. \( O(1) \)  
B. \( O(\log n) \)  
C. \( O(n) \)  
D. \( O(n^2) \)  

<details><summary>Answer</summary>  
**C. \( O(n) \)** (On average, \( \frac{n+1}{2} \) comparisons are needed.)  
</details>  

---

### **Binary Search**  

#### **Question 7:**  
*Binary search requires the input array to be:*  

A. Unsorted  
B. Sorted in ascending or descending order  
C. A linked list  
D. A heap  

<details><summary>Answer</summary>  
**B. Sorted in ascending or descending order**  
</details>  

---

#### **Question 8:**  
*What is the worst-case time complexity of binary search?*  

A. \( O(1) \)  
B. \( O(\log n) \)  
C. \( O(n) \)  
D. \( O(n \log n) \)  

<details><summary>Answer</summary>  
**B. \( O(\log n) \)** (Halves the search space each iteration.)  
</details>  

---

#### **Question 9:**  
*What is the space complexity of an iterative binary search?*  

A. \( O(1) \)  
B. \( O(\log n) \)  
C. \( O(n) \)  
D. \( O(n^2) \)  

<details><summary>Answer</summary>  
**A. \( O(1) \)** (Uses constant extra space.)  
</details>  

---

#### **Question 10:**  
*In binary search, the mid index is calculated as `low + (high - low) / 2` instead of `(low + high) / 2` to avoid:*  

A. Floating-point errors  
B. Integer overflow  
C. Infinite loops  
D. Cache misses  

<details><summary>Answer</summary>  
**B. Integer overflow** (Prevents overflow when `low` and `high` are large.)  
</details>  

---

### **Complexity Analysis**  

#### **Question 11:**  
*Which of the following is NOT a valid time complexity?*  

A. \( O(n!) \)  
B. \( O(n \log n) \)  
C. \( O(1.5^n) \)  
D. \( O(\log \log n) \)  

<details><summary>Answer</summary>  
**C. \( O(1.5^n) \)** (Standard notation uses \( O(c^n) \) where \( c \) is a constant > 1, but \( 1.5^n \) is unconventional.)  
</details>  

---

#### **Question 12:**  
*What is the time complexity of the following code?*  
```python
for i in range(n):  
    for j in range(i, n):  
        print(i, j)  
```  

A. \( O(n) \)  
B. \( O(n \log n) \)  
C. \( O(n^2) \)  
D. \( O(2^n) \)  

<details><summary>Answer</summary>  
**C. \( O(n^2) \)** (Total iterations = \( n + (n-1) + ... + 1 = \frac{n(n+1)}{2} \).)  
</details>  

---

#### **Question 13:**  
*Which function grows faster asymptotically: \( n^2 \) or \( n \log n \)?*  

A. \( n^2 \)  
B. \( n \log n \)  
C. They grow at the same rate  
D. Depends on the input  

<details><summary>Answer</summary>  
**A. \( n^2 \)** (For large \( n \), \( n^2 \) dominates \( n \log n \).)  
</details>  

---

#### **Question 14:**  
*What is the time complexity of \( T(n) = 2T(n/2) + n \)?*  

A. \( O(n) \)  
B. \( O(n \log n) \)  
C. \( O(n^2) \)  
D. \( O(2^n) \)  

<details><summary>Answer</summary>  
**B. \( O(n \log n) \)** (Matches the Master Theorem Case 2.)  
</details>  

---

### **Master Method**  

#### **Question 15:**  
*The Master Method applies to recurrences of the form:*  

A. \( T(n) = aT(n/b) + f(n) \)  
B. \( T(n) = T(n-1) + n \)  
C. \( T(n) = T(n/2) + T(n/2) + n \)  
D. Any recurrence relation  

<details><summary>Answer</summary>  
**A. \( T(n) = aT(n/b) + f(n) \)** (Standard form for the Master Method.)  
</details>  

---

#### **Question 16:**  
*For \( T(n) = 8T(n/2) + n^3 \), which Master Theorem case applies?*  

A. Case 1  
B. Case 2  
C. Case 3  
D. Does not apply  

<details><summary>Answer</summary>  
**C. Case 3** (Since \( n^3 \) dominates \( n^{\log_2 8} = n^3 \).)  
</details>  

---

#### **Question 17:**  
*What is the solution to \( T(n) = 4T(n/2) + n^2 \)?*  

A. \( O(n^2) \)  
B. \( O(n^2 \log n) \)  
C. \( O(n^3) \)  
D. \( O(2^n) \)  

<details><summary>Answer</summary>  
**B. \( O(n^2 \log n) \)** (Master Theorem Case 2: \( f(n) = \Theta(n^{\log_b a}) \).)  
</details>  

---

#### **Question 18:**  
*Which recurrence CANNOT be solved using the Master Method?*  

A. \( T(n) = 2T(n/2) + n \)  
B. \( T(n) = T(n/2) + n \log n \)  
C. \( T(n) = 3T(n/3) + n \)  
D. \( T(n) = T(n-1) + 1 \)  

<details><summary>Answer</summary>  
**D. \( T(n) = T(n-1) + 1 \)** (Not in the form \( T(n) = aT(n/b) + f(n) \).)  
</details>  

---

#### **Question 19:**  
*For \( T(n) = 7T(n/3) + n^2 \), what is the solution?*  

A. \( O(n^{\log_3 7}) \)  
B. \( O(n^2) \)  
C. \( O(n^2 \log n) \)  
D. \( O(n^3) \)  

<details><summary>Answer</summary>  
**B. \( O(n^2) \)** (Case 3: \( n^2 \) dominates \( n^{\log_3 7} \approx n^{1.77} \).)  
</details>  

---

#### **Question 20:**  
*If \( T(n) = T(n/2) + 1 \), what is the time complexity?*  

A. \( O(1) \)  
B. \( O(\log n) \)  
C. \( O(n) \)  
D. \( O(n \log n) \)  

<details><summary>Answer</summary>  
**B. \( O(\log n) \)** (Master Theorem Case 2 or telescoping series.)  
</details>  

---

### **Tricky Edge Cases**  

#### **Question 21:**  
*What is the time complexity of computing \( n! \) using dynamic programming (precompute and store factorials)?*  

A. \( O(1) \) per query after \( O(n) \) precomputation  
B. \( O(n) \) per query  
C. \( O(n^2) \)  
D. \( O(2^n) \)  

<details><summary>Answer</summary>  
**A. \( O(1) \) per query after \( O(n) \) precomputation**  
</details>  

---

#### **Question 22:**  
*Binary search on a linked list is:*  

A. \( O(1) \)  
B. \( O(\log n) \)  
C. \( O(n) \)  
D. Impossible (requires random access)  

<details><summary>Answer</summary>  
**D. Impossible (requires random access)**  
</details>  

---

#### **Question 23:**  
*The recurrence \( T(n) = 2T(n-1) + 1 \) has a solution of:*  

A. \( O(n) \)  
B. \( O(2^n) \)  
C. \( O(n \log n) \)  
D. \( O(n^2) \)  

<details><summary>Answer</summary>  
**B. \( O(2^n) \)** (Exponential due to branching.)  
</details>  

---

#### **Question 24:**  
*What is the time complexity of the following code?*  
```python
i = 1  
while i < n:  
    i *= 2  
```  

A. \( O(1) \)  
B. \( O(\log n) \)  
C. \( O(n) \)  
D. \( O(n \log n) \)  

<details><summary>Answer</summary>  
**B. \( O(\log n) \)** (Loop runs until \( i \) reaches \( n \), doubling each time.)  
</details>  

---

#### **Question 25:**  
*Which algorithm has the best worst-case time complexity?*  

A. Sequential Search  
B. Binary Search  
C. Bubble Sort  
D. Factorial (recursive)  

<details><summary>Answer</summary>  
**B. Binary Search (\( O(\log n) \))**  
</details>  
