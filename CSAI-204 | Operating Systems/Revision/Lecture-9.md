### Question 1:
*In a multi-threaded program with shared address space, what happens to the heap segment when a context switch occurs between threads?*

   A. The heap is saved and restored for each thread  
   B. Each thread gets its own separate heap segment  
   C. The heap remains unchanged and accessible to all threads  
   D. The heap is temporarily locked during context switches  

<details>
<summary>Answer</summary>
C. The heap remains unchanged and accessible to all threads
</details>

---

### Question 2:
*Consider the assembly code sequence for `counter = counter + 1`. If Thread 1 executes `mov 0x8049a1c, %eax` and gets interrupted before `add $0x1, %eax`, what critical information is lost when Thread 2 completes the same operation?*

   A. The program counter state  
   B. The original value loaded by Thread 1 into %eax register  
   C. The memory address of the counter variable  
   D. The stack pointer of Thread 1  

<details>
<summary>Answer</summary>
B. The original value loaded by Thread 1 into %eax register
</details>

---

### Question 3:
*In the pthread_create function signature, why is the argument parameter defined as `void* arg` instead of a specific data type?*

   A. To reduce memory overhead  
   B. To allow passing any type of argument through type casting  
   C. To maintain thread safety  
   D. To prevent race conditions  

<details>
<summary>Answer</summary>
B. To allow passing any type of argument through type casting
</details>

---

### Question 4:
*What is the most dangerous consequence of returning a pointer to a local variable from a thread function that is being terminated?*

   A. Memory leak  
   B. Segmentation fault when accessing the returned pointer  
   C. Thread deadlock  
   D. Stack overflow  

<details>
<summary>Answer</summary>
B. Segmentation fault when accessing the returned pointer
</details>

---

### Question 5:
*In the race condition example where counter starts at 50, why does the final result become 51 instead of the expected 52?*

   A. One thread's increment operation was completely lost  
   B. The threads executed sequentially instead of concurrently  
   C. Integer overflow occurred  
   D. The context switch happened at the wrong time  

<details>
<summary>Answer</summary>
A. One thread's increment operation was completely lost
</details>

---

### Question 6:
*When pthread_join(tid, &retval) is called, what does the double pointer `void **value_ptr` specifically enable?*

   A. Passing multiple return values from the thread  
   B. Modifying the original pointer to point to the thread's return value  
   C. Creating a copy of the return value for safety  
   D. Preventing memory leaks in thread termination  

<details>
<summary>Answer</summary>
B. Modifying the original pointer to point to the thread's return value
</details>

---

### Question 7:
*In a two-threaded address space diagram, what is the primary reason each thread needs its own stack?*

   A. To prevent memory fragmentation  
   B. To store thread-specific local variables, function parameters, and return addresses  
   C. To improve cache performance  
   D. To enable faster context switching  

<details>
<summary>Answer</summary>
B. To store thread-specific local variables, function parameters, and return addresses
</details>

---

### Question 8:
*What is the subtle but critical difference between the program counter (PC) in single-threaded vs multi-threaded programs?*

   A. Multi-threaded programs have multiple PCs, one per thread  
   B. Multi-threaded programs use a shared PC with thread identifiers  
   C. Single-threaded programs don't need a PC  
   D. The PC operates at different speeds in multi-threaded programs  

<details>
<summary>Answer</summary>
A. Multi-threaded programs have multiple PCs, one per thread
</details>

---

### Question 9:
*In the thread creation example (t0.c), what would happen if pthread_join() calls were removed from lines 19-20?*

   A. The program would crash immediately  
   B. The main thread might terminate before child threads complete, potentially cutting off their output  
   C. The threads would run infinitely  
   D. Memory leaks would occur  

<details>
<summary>Answer</summary>
B. The main thread might terminate before child threads complete, potentially cutting off their output
</details>

---

### Question 10:
*Why is the instruction `memory-add 0x8049alc, $0x1` described as an "ideal approach" but generally unavailable?*

   A. It's too slow for modern processors  
   B. Most instruction sets don't provide atomic read-modify-write operations for arbitrary memory locations  
   C. It consumes too much power  
   D. It's incompatible with virtual memory systems  

<details>
<summary>Answer</summary>
B. Most instruction sets don't provide atomic read-modify-write operations for arbitrary memory locations
</details>

---

### Question 11:
*In the context switch between threads T1 and T2, what remains constant that doesn't need to be saved/restored?*

   A. Register values  
   B. Program counter  
   C. Address space mappings  
   D. Stack pointer  

<details>
<summary>Answer</summary>
C. Address space mappings
</details>

---

### Question 12:
*What is the fundamental difference between multiprogramming across processes and threading within I/O operations?*

   A. Threading is faster than multiprogramming  
   B. Threading enables I/O overlap within a single program, while multiprogramming does it across different programs  
   C. Multiprogramming requires more memory  
   D. Threading doesn't support I/O operations  

<details>
<summary>Answer</summary>
B. Threading enables I/O overlap within a single program, while multiprogramming does it across different programs
</details>

---

### Question 13:
*In the pthread_create function, what happens if the `attr` parameter is set to NULL?*

   A. The thread creation fails  
   B. Default thread attributes are used (default stack size, scheduling priority, etc.)  
   C. The thread runs with maximum priority  
   D. The thread becomes detached automatically  

<details>
<summary>Answer</summary>
B. Default thread attributes are used (default stack size, scheduling priority, etc.)
</details>

---

### Question 14:
*Why does the race condition example specifically show the OS performing an "interrupt" between assembly instructions rather than between C statements?*

   A. C statements are atomic by default  
   B. To demonstrate that race conditions occur at the instruction level, not source code level  
   C. Assembly instructions are slower  
   D. The compiler prevents interrupts between C statements  

<details>
<summary>Answer</summary>
B. To demonstrate that race conditions occur at the instruction level, not source code level
</details>

---

### Question 15:
*What is the critical assumption violated when two threads execute `counter = counter + 1` concurrently?*

   A. That the counter variable exists in memory  
   B. That the operation is atomic (appears to execute as a single indivisible unit)  
   C. That both threads have access to the counter  
   D. That the compiler will optimize the code  

<details>
<summary>Answer</summary>
B. That the operation is atomic (appears to execute as a single indivisible unit)
</details>

---

### Question 16:
*In the thread trace examples, what determines whether pthread_join() returns immediately or blocks?*

   A. The priority of the calling thread  
   B. Whether the target thread has already completed execution  
   C. The size of the thread's stack  
   D. The number of other threads running  

<details>
<summary>Answer</summary>
B. Whether the target thread has already completed execution
</details>

---

### Question 17:
*What is the primary purpose of Thread Control Blocks (TCBs) in the context of thread management?*

   A. To store the executable code for each thread  
   B. To maintain the register state and context information for each thread  
   C. To allocate memory for thread stacks  
   D. To prevent race conditions between threads  

<details>
<summary>Answer</summary>
B. To maintain the register state and context information for each thread
</details>

---

### Question 18:
*Why must pthread_mutex_lock() not return until the calling thread acquires the lock?*

   A. To prevent deadlocks  
   B. To ensure mutual exclusion - only one thread can be in the critical section  
   C. To improve performance  
   D. To maintain thread priority  

<details>
<summary>Answer</summary>
B. To ensure mutual exclusion - only one thread can be in the critical section
</details>

---

### Question 19:
*In the myarg_t structure example, what potential problem could occur if the main thread exits before the created thread accesses the args structure?*

   A. Memory corruption because args is stack-allocated in main  
   B. The thread would run indefinitely  
   C. A compilation error would occur  
   D. The program would become single-threaded  

<details>
<summary>Answer</summary>
A. Memory corruption because args is stack-allocated in main
</details>

---

### Question 20:
*What is the significance of the `-pthread` flag when compiling threaded programs?*

   A. It enables thread debugging  
   B. It links the pthread library and may enable thread-specific compiler optimizations  
   C. It prevents race conditions  
   D. It automatically initializes mutexes  

<details>
<summary>Answer</summary>
B. It links the pthread library and may enable thread-specific compiler optimizations
</details>

---

### Question 21:
*In the address space diagram, why do thread stacks grow in opposite directions (one upward, one downward)?*

   A. To prevent stack overflow collisions between threads  
   B. To improve memory access performance  
   C. To simplify garbage collection  
   D. This is just one possible implementation - the direction is not mandated  

<details>
<summary>Answer</summary>
D. This is just one possible implementation - the direction is not mandated
</details>

---

### Question 22:
*What happens if pthread_mutex_unlock() is called on a mutex that the calling thread doesn't own?*

   A. The operation succeeds normally  
   B. The behavior is undefined and may cause program crashes or corruption  
   C. The mutex is automatically transferred to the calling thread  
   D. A deadlock occurs  

<details>
<summary>Answer</summary>
B. The behavior is undefined and may cause program crashes or corruption
</details>

---

### Question 23:
*Why does the lecture emphasize that race condition results are "indeterminate" rather than just "wrong"?*

   A. Because the results vary unpredictably based on timing  
   B. Because race conditions always produce the same wrong answer  
   C. Because race conditions only affect performance, not correctness  
   D. Because modern compilers can detect and fix race conditions  

<details>
<summary>Answer</summary>
A. Because the results vary unpredictably based on timing
</details>

---

### Question 24:
*In the context of parallelization, what is the key challenge when transforming a single-threaded program to multi-threaded?*

   A. Rewriting all functions to be thread-safe  
   B. Identifying which parts can run concurrently without interfering with each other  
   C. Increasing memory allocation  
   D. Changing the programming language  

<details>
<summary>Answer</summary>
B. Identifying which parts can run concurrently without interfering with each other
</details>

---

### Question 25:
*When a process creates multiple threads, what fundamental resource management difference exists compared to creating multiple child processes via fork()?*

   A. Each thread gets its own process ID, while child processes share the parent's PID  
   B. Threads share file descriptors and signal handlers, while each process has independent copies  
   C. Processes share memory space, while threads have isolated memory  
   D. Thread creation requires more system resources than process creation  

<details>
<summary>Answer</summary>
B. Threads share file descriptors and signal handlers, while each process has independent copies
</details>

---

### Question 26:
*In terms of scheduling and context switching overhead, what is the primary performance difference between switching from Process A to Process B versus switching from Thread 1 to Thread 2 within the same process?*

   A. Thread switching is slower because it requires more register saves  
   B. Process switching is faster because it uses hardware acceleration  
   C. Process switching requires expensive memory management unit (MMU) operations to change address spaces, while thread switching does not  
   D. There is no significant performance difference between the two  

<details>
<summary>Answer</summary>
C. Process switching requires expensive memory management unit (MMU) operations to change address spaces, while thread switching does not
</details>

---

### Question 27:
*In the race condition scenario, what would happen if both threads were interrupted at exactly the same point (after mov but before add)?*

   A. Both would read the same initial value and the final result would still be incorrect  
   B. The program would deadlock  
   C. The OS would detect the conflict and serialize the operations  
   D. Both threads would crash  

<details>
<summary>Answer</summary>
A. Both would read the same initial value and the final result would still be incorrect
</details>

---

### Question 28:
*What is the most important property that pthread_join() guarantees about thread execution order?*

   A. Threads will execute in the order they were created  
   B. The calling thread will not proceed until the specified thread has completed  
   C. All threads will finish at the same time  
   D. Threads will execute with equal priority  

<details>
<summary>Answer</summary>
B. The calling thread will not proceed until the specified thread has completed
</details>

---

### Question 29:
*Why is it crucial that each thread has its own set of registers during context switching?*

   A. To prevent register corruption between threads  
   B. To improve processing speed  
   C. To enable thread identification  
   D. To support different instruction sets  

<details>
<summary>Answer</summary>
A. To prevent register corruption between threads
</details>

---

### Question 30:
*What fundamental assumption about program execution does the introduction of threads challenge?*

   A. That programs must be written in high-level languages  
   B. That programs execute as a single sequential flow of instructions  
   C. That programs require operating system support  
   D. That programs need memory management  

<details>
<summary>Answer</summary>
B. That programs execute as a single sequential flow of instructions
</details>

---

### Question 31:
*A parent process creates a child process using fork(), and later the same parent creates a thread using pthread_create(). If both the child process and the thread modify the same global variable 'counter', what is the fundamental difference in their impact?*

   A. The thread modification affects the parent's counter, but the child process modification does not  
   B. Both modifications affect the parent's counter equally  
   C. The child process modification affects the parent's counter, but the thread modification does not  
   D. Neither modification affects the parent's counter  

<details>
<summary>Answer</summary>
A. The thread modification affects the parent's counter, but the child process modification does not
</details>

---

### Question 32:
*Consider two scenarios: (1) A process crashes due to segmentation fault, (2) A thread crashes due to segmentation fault. What is the critical difference in their impact on other concurrent execution units?*

   A. Process crash affects only itself; thread crash affects only itself  
   B. Process crash affects only itself; thread crash can terminate the entire process and all its threads  
   C. Both crashes affect all other processes and threads in the system  
   D. Process crash can affect other processes; thread crash affects only itself  

<details>
<summary>Answer</summary>
B. Process crash affects only itself; thread crash can terminate the entire process and all its threads
</details>

---

### Question 33:
*If you need to share a large data structure between two concurrent execution units, what is the most significant overhead difference between using processes vs threads?*

   A. Threads require more CPU time for data sharing  
   B. Processes require expensive IPC mechanisms (shared memory, pipes, etc.) while threads can directly access shared memory  
   C. Processes are faster at sharing data than threads  
   D. There is no significant difference in data sharing overhead  

<details>
<summary>Answer</summary>
B. Processes require expensive IPC mechanisms (shared memory, pipes, etc.) while threads can directly access shared memory
</details>

---

### Question 34:
*What is the subtle difference between PTHREAD_MUTEX_INITIALIZER and pthread_mutex_init()?*

   A. PTHREAD_MUTEX_INITIALIZER is for static initialization, pthread_mutex_init() is for dynamic initialization  
   B. PTHREAD_MUTEX_INITIALIZER is faster  
   C. pthread_mutex_init() provides better error checking  
   D. They are completely identical in functionality  

<details>
<summary>Answer</summary>
A. PTHREAD_MUTEX_INITIALIZER is for static initialization, pthread_mutex_init() is for dynamic initialization
</details>

---

### Question 35:
*Why might the heap segment be shown growing upward while stack segments grow downward in the address space diagram?*

   A. This is a hardware requirement  
   B. To maximize the available space between heap and stack before they collide  
   C. To improve memory access patterns  
   D. To simplify virtual memory management  

<details>
<summary>Answer</summary>
B. To maximize the available space between heap and stack before they collide
</details>

---

### Question 36:
*What is the purpose of the pthread_join function in a multithreaded program?*

   A. To terminate a thread immediately  
   B. To wait for a thread to finish execution and retrieve its return value  
   C. To create a new thread  
   D. To check if a thread has completed without blocking  

<details>
<summary>Answer</summary>
B. To wait for a thread to finish execution and retrieve its return value
</details>

---

### Question 37:
*Why do we use void **value_ptr as an argument in pthread_join?*

   A. To pass an integer value to the thread  
   B. To pass the thread ID to the joining function  
   C. To retrieve the exit status of the joined thread  
   D. To specify the number of threads to join  

<details>
<summary>Answer</summary>
C. To retrieve the exit status of the joined thread
</details>

---

### Question 38:
*What is the risk of a thread returning a pointer to a local variable to pthread_join?*

   A. There is no risk as the local variable's scope is extended  
   B. It might lead to a segmentation fault because the local variable goes out of scope  
   C. It increases the execution time of the thread  
   D. It automatically deallocates the memory used by the thread  

<details>
<summary>Answer</summary>
B. It might lead to a segmentation fault because the local variable goes out of scope
</details>

---

### Question 39:
*In a simple threading example, if a thread function returns (void *)(arg + 1), where arg is the thread argument, what type of data manipulation is being performed?*

   A. Logical manipulation  
   B. Pointer arithmetic  
   C. Memory allocation  
   D. Integer to pointer type casting  

<details>
<summary>Answer</summary>
B. Pointer arithmetic
</details>

---