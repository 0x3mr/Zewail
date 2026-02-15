### Question 1:
*What is the primary problem with the first attempt at implementing a lock using just a flag variable?*

   A. The flag variable consumes too much memory  
   B. Race condition between testing and setting the flag  
   C. The flag cannot be accessed by multiple threads  
   D. Flag variables are not supported by modern processors  

<details>
<summary>Answer</summary>
B. Race condition between testing and setting the flag
</details>

---

### Question 2:
*In the TestAndSet atomic instruction, what happens if two threads call it simultaneously on the same memory location?*

   A. Both threads get the same old value  
   B. The hardware ensures only one thread executes the instruction at a time  
   C. A segmentation fault occurs  
   D. The memory location becomes corrupted  

<details>
<summary>Answer</summary>
B. The hardware ensures only one thread executes the instruction at a time
</details>

---

### Question 3:
*Why doesn't disabling interrupts work as a locking mechanism on multiprocessor systems?*

   A. Interrupts cannot be disabled on multiprocessor systems  
   B. Each processor can still execute concurrently even with interrupts disabled  
   C. It causes system instability  
   D. Modern processors don't support interrupt disabling  

<details>
<summary>Answer</summary>
B. Each processor can still execute concurrently even with interrupts disabled
</details>

---

### Question 4:
*What is the main disadvantage of spin locks in a single CPU system?*

   A. They don't provide mutual exclusion  
   B. They waste CPU cycles by continuously polling  
   C. They cannot be implemented without hardware support  
   D. They cause memory corruption  

<details>
<summary>Answer</summary>
B. They waste CPU cycles by continuously polling
</details>

---

### Question 5:
*In the CompareAndSwap instruction, when does it update the memory location?*

   A. Always, regardless of the current value  
   B. Only when the actual value equals the expected value  
   C. Only when the new value is different from the current value  
   D. Never, it only reads the value  

<details>
<summary>Answer</summary>
B. Only when the actual value equals the expected value
</details>

---

### Question 6:
*What problem does the yield() approach solve in spin locks, and what problem does it NOT solve?*

   A. Solves CPU waste but not starvation  
   B. Solves starvation but not CPU waste  
   C. Solves both CPU waste and starvation  
   D. Solves neither CPU waste nor starvation  

<details>
<summary>Answer</summary>
A. Solves CPU waste but not starvation
</details>

---

### Question 7:
*In the queue-based lock implementation, why is a guard lock still needed?*

   A. To protect the queue data structure from concurrent access  
   B. To prevent the main lock from being acquired  
   C. To ensure atomic park() operations  
   D. To maintain thread priorities  

<details>
<summary>Answer</summary>
A. To protect the queue data structure from concurrent access
</details>

---

### Question 8:
*What is the "wakeup/waiting race" problem in lock implementations?*

   A. Multiple threads wake up simultaneously  
   B. A thread might sleep forever if unlock() occurs just before park()  
   C. Threads wake up in the wrong order  
   D. The queue becomes corrupted during wakeup  

<details>
<summary>Answer</summary>
B. A thread might sleep forever if unlock() occurs just before park()
</details>

---

### Question 9:
*How does Solaris solve the wakeup/waiting race problem?*

   A. By using atomic operations for park()  
   B. By introducing the setpark() system call  
   C. By eliminating the queue mechanism  
   D. By using hardware-supported sleep operations  

<details>
<summary>Answer</summary>
B. By introducing the setpark() system call
</details>

---

### Question 10:
*In Linux futex implementation, what does the high bit (bit 31) of the mutex integer represent?*

   A. The number of waiting threads  
   B. Whether the lock is held or not  
   C. The priority of the lock holder  
   D. The type of mutex being used  

<details>
<summary>Answer</summary>
B. Whether the lock is held or not
</details>

---

### Question 11:
*What do the remaining bits (0-30) represent in a Linux futex mutex integer?*

   A. The thread ID of the lock holder  
   B. The lock priority level  
   C. The number of waiters  
   D. The lock timeout value  

<details>
<summary>Answer</summary>
C. The number of waiters
</details>

---

### Question 12:
*In the futex_unlock implementation, when does atomic_add_zero(mutex, 0x80000000) return true?*

   A. When there are waiting threads  
   B. When there are no other interested threads  
   C. When the mutex is already unlocked  
   D. When a context switch is needed  

<details>
<summary>Answer</summary>
B. When there are no other interested threads
</details>

---

### Question 13:
*What is the main advantage of two-phase locks over simple spin locks?*

   A. They provide better fairness guarantees  
   B. They combine the benefits of spinning and sleeping  
   C. They eliminate the need for hardware support  
   D. They prevent race conditions entirely  

<details>
<summary>Answer</summary>
B. They combine the benefits of spinning and sleeping
</details>

---

### Question 14:
*If Thread A holds a lock and Thread B calls lock(), what happens in a spin lock implementation?*

   A. Thread B immediately gets the lock  
   B. Thread B continuously polls until the lock is free  
   C. Thread B is put to sleep  
   D. Thread B gets an error  

<details>
<summary>Answer</summary>
B. Thread B continuously polls until the lock is free
</details>

---

### Question 15:
*What would happen if you forgot to call unlock() in a critical section?*

   A. The program would crash immediately  
   B. Other threads would be permanently blocked (deadlock)  
   C. The lock would automatically release after a timeout  
   D. The next thread would forcibly acquire the lock  

<details>
<summary>Answer</summary>
B. Other threads would be permanently blocked (deadlock)
</details>

---

### Question 16:
*In a fine-grained locking strategy, what is the primary benefit over coarse-grained locking?*

   A. Easier to implement and debug  
   B. Better performance due to reduced contention  
   C. Guaranteed deadlock prevention  
   D. Lower memory usage  

<details>
<summary>Answer</summary>
B. Better performance due to reduced contention
</details>

---

### Question 17:
*What scenario makes spin locks perform reasonably well?*

   A. When there are many more threads than CPUs  
   B. When critical sections are very long  
   C. When the number of threads roughly equals the number of CPUs  
   D. When locks are held for extended periods  

<details>
<summary>Answer</summary>
C. When the number of threads roughly equals the number of CPUs
</details>

---

### Question 18:
*Why is the TestAndSet instruction considered "atomic"?*

   A. It operates on atomic data types only  
   B. The test and set operations cannot be interrupted or interleaved  
   C. It only works with single-bit values  
   D. It automatically handles memory alignment  

<details>
<summary>Answer</summary>
B. The test and set operations cannot be interrupted or interleaved
</details>

---

### Question 19:
*What happens if futex_wait() is called but the value at the address doesn't match the expected value?*

   A. The thread sleeps anyway  
   B. The call returns immediately without sleeping  
   C. A kernel panic occurs  
   D. The expected value is updated to match  

<details>
<summary>Answer</summary>
B. The call returns immediately without sleeping
</details>

---

### Question 20:
*In the pthread mutex example, what does PTHREAD_MUTEX_INITIALIZER do?*

   A. Dynamically allocates memory for the mutex  
   B. Statically initializes the mutex to an unlocked state  
   C. Sets the mutex to a locked state  
   D. Registers the mutex with the operating system  

<details>
<summary>Answer</summary>
B. Statically initializes the mutex to an unlocked state
</details>

---

### Question 21:
*What is a potential problem with using locks to protect different variables with different locks?*

   A. Increased complexity and potential for deadlock  
   B. Reduced performance due to more lock overhead  
   C. Memory fragmentation  
   D. Hardware limitations on the number of locks  

<details>
<summary>Answer</summary>
A. Increased complexity and potential for deadlock
</details>

---

### Question 22:
*If a malicious program disables interrupts and never re-enables them, what would happen?*

   A. The program would crash  
   B. Other programs would run normally  
   C. The system could become unresponsive  
   D. The OS would automatically kill the program  

<details>
<summary>Answer</summary>
C. The system could become unresponsive
</details>

---

### Question 23:
*In the queue-based lock, what happens in unlock() when the queue is not empty?*

   A. The flag is set to 0 and a thread is unparked  
   B. The flag remains 1 and a thread is unparked  
   C. All waiting threads are unparked simultaneously  
   D. The queue is cleared and the flag is set to 0  

<details>
<summary>Answer</summary>
B. The flag remains 1 and a thread is unparked
</details>

---

### Question 24:
*What is the main drawback of the yield() approach compared to the queue-based approach?*

   A. Higher CPU usage  
   B. No guarantee that the yielding thread will run next when the lock is free  
   C. Requires more complex hardware support  
   D. Cannot be implemented on single-core systems  

<details>
<summary>Answer</summary>
B. No guarantee that the yielding thread will run next when the lock is free
</details>

---

### Question 25:
*In a two-phase lock, what determines when to transition from spinning to sleeping?*

   A. The number of waiting threads  
   B. The priority of the current thread  
   C. A predetermined time threshold or spin count  
   D. The availability of CPU cores  

<details>
<summary>Answer</summary>
C. A predetermined time threshold or spin count
</details>

---

### Question 26:
*What would happen if you call lock() twice on the same mutex from the same thread without an intervening unlock()?*

   A. The second call returns immediately  
   B. The thread would deadlock itself  
   C. The lock counter is incremented  
   D. An exception is thrown  

<details>
<summary>Answer</summary>
B. The thread would deadlock itself
</details>

---

### Question 27:
*Why does the simple flag-based lock fail to provide mutual exclusion?*

   A. The flag variable is not thread-safe  
   B. Multiple threads can see flag=0 and set it to 1 simultaneously  
   C. The while loop doesn't work correctly  
   D. Flag variables cannot be shared between threads  

<details>
<summary>Answer</summary>
B. Multiple threads can see flag=0 and set it to 1 simultaneously
</details>

---

### Question 28:
*In the futex implementation, why is atomic_increment(mutex) called before entering the waiting loop?*

   A. To lock the mutex  
   B. To increment the waiter count  
   C. To set the high bit  
   D. To wake up other threads  

<details>
<summary>Answer</summary>
B. To increment the waiter count
</details>

---

### Question 29:
*What is the key insight behind making TestAndSet return the old value rather than just setting the new value?*

   A. It allows the caller to know if they successfully acquired the lock  
   B. It prevents memory corruption  
   C. It enables debugging capabilities  
   D. It maintains backward compatibility  

<details>
<summary>Answer</summary>
A. It allows the caller to know if they successfully acquired the lock
</details>

---

### Question 30:
*If you have 4 CPU cores and 20 threads all contending for the same spin lock, what is the primary performance issue?*

   A. Memory bandwidth saturation  
   B. 16 threads will waste CPU cycles spinning while only 4 can make progress  
   C. The lock will become corrupted  
   D. Context switching overhead will be too high  

<details>
<summary>Answer</summary>
B. 16 threads will waste CPU cycles spinning while only 4 can make progress
</details>