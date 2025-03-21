### Question 1:
*What is the primary purpose of the `malloc` function in C?*

   A. To allocate memory on the stack.  
   B. To allocate memory on the heap.  
   C. To free memory allocated on the heap.  
   D. To allocate memory in the data segment.  

<details>
<summary>Answer</summary>
B. To allocate memory on the heap.
</details>

---

### Question 2:
*What does the `free` function do in C?*

   A. It allocates memory on the heap.  
   B. It deallocates memory previously allocated by `malloc`.  
   C. It initializes memory to zero.  
   D. It resizes a memory block.  

<details>
<summary>Answer</summary>
B. It deallocates memory previously allocated by `malloc`.
</details>

---

### Question 3:
*What is a "dangling pointer" in C?*

   A. A pointer that points to a valid memory block.  
   B. A pointer that points to a memory block that has been freed.  
   C. A pointer that points to the stack.  
   D. A pointer that points to the data segment.  

<details>
<summary>Answer</summary>
B. A pointer that points to a memory block that has been freed.
</details>

---

### Question 4:
*What is the output of the following code snippet?*

```c
int *x = malloc(10 * sizeof(int));
printf("%zu\n", sizeof(x));
```

   A. 10  
   B. 40  
   C. 4 or 8 (depending on the architecture)  
   D. 0  

<details>
<summary>Answer</summary>
C. 4 or 8 (depending on the architecture)
</details>

---

### Question 5:
*What is the primary purpose of the `calloc` function in C?*

   A. To allocate memory on the stack.  
   B. To allocate memory on the heap and initialize it to zero.  
   C. To free memory allocated on the heap.  
   D. To resize a memory block.  

<details>
<summary>Answer</summary>
B. To allocate memory on the heap and initialize it to zero.
</details>

---

### Question 6:
*What is the primary purpose of the `realloc` function in C?*

   A. To allocate memory on the stack.  
   B. To resize a memory block previously allocated by `malloc`.  
   C. To free memory allocated on the heap.  
   D. To initialize memory to zero.  

<details>
<summary>Answer</summary>
B. To resize a memory block previously allocated by `malloc`.
</details>

---

### Question 7:
*What happens if you call `free` on a pointer that has already been freed?*

   A. The program continues to run without any issues.  
   B. The program crashes with a segmentation fault.  
   C. The behavior is undefined.  
   D. The memory is reallocated.  

<details>
<summary>Answer</summary>
C. The behavior is undefined.
</details>

---

### Question 8:
*What is the primary purpose of the `brk` system call?*

   A. To allocate memory on the stack.  
   B. To change the size of the heap.  
   C. To free memory allocated on the heap.  
   D. To initialize memory to zero.  

<details>
<summary>Answer</summary>
B. To change the size of the heap.
</details>

---

### Question 9:
*What is the primary purpose of the `mmap` system call?*

   A. To allocate memory on the stack.  
   B. To map files or devices into memory.  
   C. To free memory allocated on the heap.  
   D. To initialize memory to zero.  

<details>
<summary>Answer</summary>
B. To map files or devices into memory.
</details>

---

### Question 10:
*What is the primary purpose of the `munmap` system call?*

   A. To allocate memory on the stack.  
   B. To unmap a memory region previously mapped by `mmap`.  
   C. To free memory allocated on the heap.  
   D. To initialize memory to zero.  

<details>
<summary>Answer</summary>
B. To unmap a memory region previously mapped by `mmap`.
</details>

---

### Question 11:
*What is the primary purpose of the `sbrk` system call?*

   A. To allocate memory on the stack.  
   B. To change the size of the heap.  
   C. To free memory allocated on the heap.  
   D. To initialize memory to zero.  

<details>
<summary>Answer</summary>
B. To change the size of the heap.
</details>

---

### Question 12:
*What is the primary purpose of the `shm_open` system call?*

   A. To allocate memory on the stack.  
   B. To create or open a shared memory object.  
   C. To free memory allocated on the heap.  
   D. To initialize memory to zero.  

<details>
<summary>Answer</summary>
B. To create or open a shared memory object.
</details>

---

### Question 13:
*What is the primary purpose of the `ftruncate` system call?*

   A. To allocate memory on the stack.  
   B. To change the size of a file.  
   C. To free memory allocated on the heap.  
   D. To initialize memory to zero.  

<details>
<summary>Answer</summary>
B. To change the size of a file.
</details>

---

### Question 14:
*What is the primary purpose of the `MAP_ANONYMOUS` flag in `mmap`?*

   A. To allocate memory on the stack.  
   B. To create an anonymous memory mapping (not backed by a file).  
   C. To free memory allocated on the heap.  
   D. To initialize memory to zero.  

<details>
<summary>Answer</summary>
B. To create an anonymous memory mapping (not backed by a file).
</details>

---

### Question 15:
*What is the primary purpose of the `MAP_SHARED` flag in `mmap`?*

   A. To allocate memory on the stack.  
   B. To create a memory mapping that is shared between processes.  
   C. To free memory allocated on the heap.  
   D. To initialize memory to zero.  

<details>
<summary>Answer</summary>
B. To create a memory mapping that is shared between processes.
</details>

---

### Question 16:
*What is the primary purpose of the `PROT_READ` flag in `mmap`?*

   A. To allow reading from the mapped memory.  
   B. To allow writing to the mapped memory.  
   C. To allow execution of code in the mapped memory.  
   D. To allow sharing of the mapped memory.  

<details>
<summary>Answer</summary>
A. To allow reading from the mapped memory.
</details>

---

### Question 17:
*What is the primary purpose of the `PROT_WRITE` flag in `mmap`?*

   A. To allow reading from the mapped memory.  
   B. To allow writing to the mapped memory.  
   C. To allow execution of code in the mapped memory.  
   D. To allow sharing of the mapped memory.  

<details>
<summary>Answer</summary>
B. To allow writing to the mapped memory.
</details>

---

### Question 18:
*What is the primary purpose of the `PROT_EXEC` flag in `mmap`?*

   A. To allow reading from the mapped memory.  
   B. To allow writing to the mapped memory.  
   C. To allow execution of code in the mapped memory.  
   D. To allow sharing of the mapped memory.  

<details>
<summary>Answer</summary>
C. To allow execution of code in the mapped memory.
</details>

---

### Question 19:
*What is the primary purpose of the `MAP_PRIVATE` flag in `mmap`?*

   A. To create a memory mapping that is private to the process.  
   B. To create a memory mapping that is shared between processes.  
   C. To free memory allocated on the heap.  
   D. To initialize memory to zero.  

<details>
<summary>Answer</summary>
A. To create a memory mapping that is private to the process.
</details>

---

### Question 20:
*What is the primary purpose of the `shm_unlink` system call?*

   A. To allocate memory on the stack.  
   B. To remove a shared memory object.  
   C. To free memory allocated on the heap.  
   D. To initialize memory to zero.  

<details>
<summary>Answer</summary>
B. To remove a shared memory object.
</details>

---

### Question 21:
*What is the primary purpose of the `MAP_FAILED` return value in `mmap`?*

   A. To indicate that the memory mapping was successful.  
   B. To indicate that the memory mapping failed.  
   C. To free memory allocated on the heap.  
   D. To initialize memory to zero.  

<details>
<summary>Answer</summary>
B. To indicate that the memory mapping failed.
</details>

---

### Question 22:
*What is the primary purpose of the `MAP_FIXED` flag in `mmap`?*

   A. To allocate memory at a fixed address.  
   B. To create a memory mapping that is shared between processes.  
   C. To free memory allocated on the heap.  
   D. To initialize memory to zero.  

<details>
<summary>Answer</summary>
A. To allocate memory at a fixed address.
</details>

---

### Question 23:
*What is the primary purpose of the `MAP_NORESERVE` flag in `mmap`?*

   A. To allocate memory on the stack.  
   B. To create a memory mapping without reserving swap space.  
   C. To free memory allocated on the heap.  
   D. To initialize memory to zero.  

<details>
<summary>Answer</summary>
B. To create a memory mapping without reserving swap space.
</details>

---

### Question 24:
*What is the primary purpose of the `MAP_POPULATE` flag in `mmap`?*

   A. To allocate memory on the stack.  
   B. To pre-populate the memory mapping with data from the file.  
   C. To free memory allocated on the heap.  
   D. To initialize memory to zero.  

<details>
<summary>Answer</summary>
B. To pre-populate the memory mapping with data from the file.
</details>

---

### Question 25:
*What is the primary purpose of the `MAP_LOCKED` flag in `mmap`?*

   A. To allocate memory on the stack.  
   B. To lock the memory mapping into RAM, preventing it from being swapped out.  
   C. To free memory allocated on the heap.  
   D. To initialize memory to zero.  

<details>
<summary>Answer</summary>
B. To lock the memory mapping into RAM, preventing it from being swapped out.
</details>
