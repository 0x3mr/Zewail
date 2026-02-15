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

### **Sequential Search**  

#### **Question 3:**  
*In the worst case, sequential search in an unsorted array requires:*  

A. \( O(1) \) time  
B. \( O(\log n) \) time  
C. \( O(n) \) time  
D. \( O(n^2) \) time  

<details><summary>Answer</summary>  
**C. \( O(n) \)** (May need to check all \( n \) elements.)  
</details>  

---

#### **Question 4:**  
*What is the best-case time complexity of sequential search?*  

A. \( O(1) \)  
B. \( O(\log n) \)  
C. \( O(n) \)  
D. \( O(n^2) \)  

<details><summary>Answer</summary>  
**A. \( O(1) \)** (If the target is the first element.)  
</details>  

---

### **Binary Search**  

#### **Question 5:**  
*Binary search requires the input array to be:*  

A. Unsorted  
B. Sorted  
C. A linked list  
D. A heap  

<details><summary>Answer</summary>  
**B. Sorted**  
</details>  

---

#### **Question 6:**  
*What is the worst-case time complexity of binary search?*  

A. \( O(1) \)  
B. \( O(\log n) \)  
C. \( O(n) \)  
D. \( O(n \log n) \)  

<details><summary>Answer</summary>  
**B. \( O(\log n) \)** (Halves the search space each iteration.)  
</details>  

---

### **Complexity Analysis**  

#### **Question 7:**  
*Which of the following is NOT a valid time complexity?*  

A. \( O(n!) \)  
B. \( O(n \log n) \)  
C. \( O(1.5^n) \)  
D. \( O(\log \log n) \)  

<details><summary>Answer</summary>  
**C. \( O(1.5^n) \)** (Standard notation uses \( O(c^n) \) where \( c \) is a constant > 1.)  
</details>  

---

#### **Question 8:**  
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
**C. \( O(n^2) \)** (Total iterations = \( \frac{n(n+1)}{2} \).)  
</details>  

---

#### **Question 9:**  
*Which function grows faster asymptotically: \( n^2 \) or \( n \log n \)?*  

A. \( n^2 \)  
B. \( n \log n \)  
C. They grow at the same rate  
D. Depends on the input  

<details><summary>Answer</summary>  
**A. \( n^2 \)** (For large \( n \), \( n^2 \) dominates \( n \log n \).)  
</details>  

---

### **Master Method**  

#### **Question 10:**  
*The Master Method applies to recurrences of the form:*  

A. \( T(n) = aT(n/b) + f(n) \)  
B. \( T(n) = T(n-1) + n \)  
C. \( T(n) = T(n/2) + T(n/2) + n \)  
D. Any recurrence relation  

<details><summary>Answer</summary>  
**A. \( T(n) = aT(n/b) + f(n) \)**  
</details>  

---

#### **Question 11:**  
*For \( T(n) = 2T(n/2) + n \), what is the solution using the Master Method?*  

A. \( O(n) \)  
B. \( O(n \log n) \)  
C. \( O(n^2) \)  
D. \( O(2^n) \)  

<details><summary>Answer</summary>  
**B. \( O(n \log n) \)** (Case 2: \( f(n) = \Theta(n^{\log_b a}) \).)  
</details>  

---

#### **Question 12:**  
*Which recurrence CANNOT be solved using the Master Method?*  

A. \( T(n) = 2T(n/2) + n \)  
B. \( T(n) = T(n/2) + n \log n \)  
C. \( T(n) = 3T(n/3) + n \)  
D. \( T(n) = T(n-1) + 1 \)  

<details><summary>Answer</summary>  
**D. \( T(n) = T(n-1) + 1 \)** (Not in the form \( T(n) = aT(n/b) + f(n) \).)  
</details>  

---

### **Mixed Questions**  

#### **Question 13:**  
*What is the time complexity of computing factorial using dynamic programming (precompute and store)?*  

A. \( O(1) \) per query after \( O(n) \) precomputation  
B. \( O(n) \) per query  
C. \( O(n^2) \)  
D. \( O(2^n) \)  

<details><summary>Answer</summary>  
**A. \( O(1) \) per query after \( O(n) \) precomputation**  
</details>  

---

#### **Question 14:**  
*Binary search on a linked list is:*  

A. \( O(1) \)  
B. \( O(\log n) \)  
C. \( O(n) \)  
D. Impossible (requires random access)  

<details><summary>Answer</summary>  
**D. Impossible (requires random access)**  
</details>  

---

#### **Question 15:**  
*The recurrence \( T(n) = 2T(n-1) + 1 \) has a solution of:*  

A. \( O(n) \)  
B. \( O(2^n) \)  
C. \( O(n \log n) \)  
D. \( O(n^2) \)  

<details><summary>Answer</summary>  
**B. \( O(2^n) \)** (Exponential due to branching.)  
</details>  

---

#### **Question 16:**  
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

#### **Question 17:**  
*Which algorithm has the best worst-case time complexity?*  

A. Sequential Search  
B. Binary Search  
C. Bubble Sort  
D. Factorial (recursive)  

<details><summary>Answer</summary>  
**B. Binary Search (\( O(\log n) \))**  
</details>  

---

#### **Question 18:**  
*For \( T(n) = 4T(n/2) + n^2 \), what is the solution using the Master Method?*  

A. \( O(n^2) \)  
B. \( O(n^2 \log n) \)  
C. \( O(n^3) \)  
D. \( O(2^n) \)  

<details><summary>Answer</summary>  
**B. \( O(n^2 \log n) \)** (Case 2: \( f(n) = \Theta(n^{\log_b a}) \).)  
</details>  

---

#### **Question 19:**  
*What is the space complexity of binary search (iterative)?*  

A. \( O(1) \)  
B. \( O(\log n) \)  
C. \( O(n) \)  
D. \( O(n^2) \)  

<details><summary>Answer</summary>  
**A. \( O(1) \)** (Uses constant extra space.)  
</details>  

---

#### **Question 20:**  
*Which sorting algorithm is NOT comparison-based?*  

A. Mergesort  
B. Quicksort  
C. Heapsort  
D. Counting Sort  

<details><summary>Answer</summary>  
**D. Counting Sort** (Uses key counts, not comparisons.)  
</details>  
