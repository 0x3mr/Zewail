### Question 1:  
*What is the worst-case time complexity of standard Mergesort?*  

A. O(n)  
B. O(n log n)  
C. O(n²)  
D. O(log n)  

<details><summary>Answer</summary>  
B. O(n log n)  
</details>  

---

### Question 2:  
*In Quicksort, what is the primary reason for poor performance (O(n²)) in the worst case?*  

A. Excessive heap allocations  
B. Unbalanced partitioning (e.g., already sorted input)  
C. High memory usage due to recursion  
D. Frequent cache misses  

<details><summary>Answer</summary>  
B. Unbalanced partitioning (e.g., already sorted input)  
</details>  

---

### Question 3:  
*Which sorting algorithm is preferred when sorting linked lists?*  

A. Quicksort  
B. Heapsort  
C. Mergesort  
D. Counting Sort  

<details><summary>Answer</summary>  
C. Mergesort (due to sequential access and stable O(n log n) performance)  
</details>  

---

### Question 4:  
*What is the key advantage of Heapsort over Quicksort?*  

A. Lower worst-case time complexity (O(n log n) vs. O(n²))  
B. Better cache locality  
C. No recursion overhead  
D. Stable sorting  

<details><summary>Answer</summary>  
A. Lower worst-case time complexity (O(n log n) vs. O(n²))  
</details>  

---

### Question 5:  
*Counting Sort is NOT suitable when:*  

A. The range of input elements (k) is much larger than the number of elements (n)  
B. The input contains floating-point numbers  
C. The data is already partially sorted  
D. The algorithm must be in-place  

<details><summary>Answer</summary>  
A. The range of input elements (k) is much larger than the number of elements (n)  
</details>  

---

### Question 6:  
*Radix Sort is most efficient when:*  

A. The keys are very long strings  
B. The range of individual digits/characters is small  
C. The input is already mostly sorted  
D. The data is stored in a linked list  

<details><summary>Answer</summary>  
B. The range of individual digits/characters is small  
</details>  

---

### Question 7:  
*Which sorting algorithm does NOT use comparisons?*  

A. Mergesort  
B. Quicksort  
C. Heapsort  
D. Radix Sort  

<details><summary>Answer</summary>  
D. Radix Sort (it uses digit/character counts)  
</details>  

---

### Question 8:  
*In Quicksort, which pivot selection strategy guarantees O(n log n) worst-case time?*  

A. First element as pivot  
B. Random pivot  
C. Median-of-three pivoting  
D. Median-of-medians (BFPRT algorithm)  

<details><summary>Answer</summary>  
D. Median-of-medians (BFPRT algorithm)  
</details>  

---

### Question 9:  
*What is the space complexity of in-place Mergesort?*  

A. O(1)  
B. O(log n)  
C. O(n)  
D. O(n log n)  

<details><summary>Answer</summary>  
B. O(log n) (due to recursion stack)  
</details>  

---

### Question 10:  
*Which property makes Heapsort less cache-friendly than Mergesort?*  

A. Random access pattern in heap operations  
B. High memory usage  
C. Unstable sorting  
D. Recursive nature  

<details><summary>Answer</summary>  
A. Random access pattern in heap operations  
</details>  

---

### Question 11:  
*Why is Quicksort generally faster than Mergesort in practice?*  

A. Lower constant factors and better cache locality  
B. It has a lower worst-case time complexity  
C. It requires no additional memory  
D. It is always stable  

<details><summary>Answer</summary>  
A. Lower constant factors and better cache locality  
</details>  

---

### Question 12:  
*Which algorithm is best suited for sorting 1 million 32-bit integers?*  

A. Counting Sort  
B. Radix Sort  
C. Mergesort  
D. Insertion Sort  

<details><summary>Answer</summary>  
B. Radix Sort (fixed-length keys, O(n) time)  
</details>  

---

### Question 13:  
*What is the time complexity of building a max-heap from an unsorted array?*  

A. O(n)  
B. O(n log n)  
C. O(log n)  
D. O(n²)  

<details><summary>Answer</summary>  
A. O(n) (using heapify-down)  
</details>  

---

### Question 14:  
*Which sorting algorithm is NOT stable by default?*  

A. Mergesort  
B. Counting Sort  
C. Radix Sort  
D. Heapsort  

<details><summary>Answer</summary>  
D. Heapsort (swaps can disrupt order)  
</details>  

---

### Question 15:  
*When is Counting Sort asymptotically faster than Quicksort?*  

A. When k = O(n)  
B. When the input is almost sorted  
C. When the data is uniformly distributed  
D. When the input size is small  

<details><summary>Answer</summary>  
A. When k = O(n) (range of elements is linear in input size)  
</details>  

---

### Question 16:  
*In Radix Sort, why is LSD (Least Significant Digit) preferred over MSD for integers?*  

A. LSD is inherently stable  
B. MSD requires recursion  
C. LSD processes digits from right to left  
D. MSD has higher space complexity  

<details><summary>Answer</summary>  
A. LSD is inherently stable  
</details>  

---

### Question 17:  
*What is the main drawback of Heapsort compared to Quicksort?*  

A. Worse cache performance  
B. Higher worst-case time complexity  
C. Not in-place  
D. Unstable  

<details><summary>Answer</summary>  
A. Worse cache performance (random access in heap)  
</details>  

---

### Question 18:  
*Which algorithm would you choose to sort a deck of playing cards by suit and rank?*  

A. Quicksort  
B. Radix Sort (LSD)  
C. Counting Sort  
D. Mergesort  

<details><summary>Answer</summary>  
B. Radix Sort (LSD) (stable, fixed-length keys)  
</details>  

---

### Question 19:  
*What is the key reason Mergesort is preferred over Quicksort for external sorting?*  

A. Sequential access pattern (minimizes disk I/O)  
B. Lower space complexity  
C. No worst-case O(n²) scenario  
D. Better for small datasets  

<details><summary>Answer</summary>  
A. Sequential access pattern (minimizes disk I/O)  
</details>  

---

### Question 20:  
*Which sorting algorithm modifies the input array to satisfy the heap property?*  

A. Mergesort  
B. Quicksort  
C. Heapsort  
D. Radix Sort  

<details><summary>Answer</summary>  
C. Heapsort  
</details>  

---

### Question 21:  
*Why is Quicksort not ideal for sorting large datasets on disk?*  

A. Random access pattern (expensive disk seeks)  
B. High memory usage  
C. Unstable sorting  
D. Recursion depth limit  

<details><summary>Answer</summary>  
A. Random access pattern (expensive disk seeks)  
</details>  

---

### Question 22:  
*In which scenario does Radix Sort outperform Counting Sort?*  

A. When keys are strings of varying lengths  
B. When the range of keys is extremely large  
C. When the input is already sorted  
D. When stability is not required  

<details><summary>Answer</summary>  
B. When the range of keys is extremely large (Radix Sort processes digits, not entire keys)  
</details>  

---

### Question 23:  
*What is the space complexity of standard (non-in-place) Mergesort?*  

A. O(1)  
B. O(log n)  
C. O(n)  
D. O(n log n)  

<details><summary>Answer</summary>  
C. O(n) (auxiliary array for merging)  
</details>  

---

### Question 24:  
*Which algorithm is least efficient for sorting small arrays (e.g., n ≤ 10)?*  

A. Insertion Sort  
B. Quicksort  
C. Heapsort  
D. Mergesort  

<details><summary>Answer</summary>  
C. Heapsort (high overhead for small n)  
</details>  

---

### Question 25:  
*What is the primary disadvantage of Radix Sort for floating-point numbers?*  

A. Cannot handle negative numbers  
B. Requires expensive bitwise operations  
C. Needs extra passes for exponents/sign bits  
D. Not comparison-based  

<details><summary>Answer</summary>  
C. Needs extra passes for exponents/sign bits  
</details>  
