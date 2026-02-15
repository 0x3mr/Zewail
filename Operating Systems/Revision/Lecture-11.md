### Question 1:
*What happens if a child thread calls `pthread_cond_signal()` before the parent thread calls `pthread_cond_wait()`?*

   A. The parent will immediately wake up when it calls wait()  
   B. The signal is lost and the parent will wait indefinitely  
   C. The signal is queued until the parent calls wait()  
   D. A runtime error occurs due to improper signaling order  

<details>
<summary>Answer</summary>
B. The signal is lost and the parent will wait indefinitely
</details>

---

### Question 2:
*In the parent-child synchronization example, why is the state variable "done" essential?*

   A. To prevent race conditions between multiple child threads  
   B. To handle the case where the child signals before the parent waits  
   C. To ensure proper memory cleanup after thread completion  
   D. To maintain thread priority ordering  

<details>
<summary>Answer</summary>
B. To handle the case where the child signals before the parent waits
</details>

---

### Question 3:
*What would happen if we removed the mutex from the condition variable implementation?*

   A. The code would run faster due to reduced locking overhead  
   B. A race condition could occur between checking the condition and calling wait()  
   C. Multiple threads could signal simultaneously causing corruption  
   D. The condition variable would automatically handle synchronization  

<details>
<summary>Answer</summary>
B. A race condition could occur between checking the condition and calling wait()
</details>

---

### Question 4:
*Why must `pthread_cond_wait()` be called inside a while loop instead of an if statement?*

   A. To handle spurious wakeups where threads wake up without being signaled  
   B. To ensure the thread runs multiple times for better performance  
   C. To prevent deadlock situations with multiple waiting threads  
   D. To guarantee that the signal is sent to the correct thread  

<details>
<summary>Answer</summary>
A. To handle spurious wakeups where threads wake up without being signaled
</details>

---

### Question 5:
*In the producer-consumer problem with a single condition variable, what happens when a producer wakes up another producer instead of a consumer?*

   A. The second producer immediately produces an item  
   B. Both producers enter a deadlock state  
   C. The awakened producer finds the buffer full and goes back to sleep  
   D. The system automatically redirects the signal to a consumer  

<details>
<summary>Answer</summary>
C. The awakened producer finds the buffer full and goes back to sleep
</details>

---

### Question 6:
*What is the primary advantage of using two condition variables (empty and full) in the producer-consumer solution?*

   A. It doubles the processing speed of the application  
   B. It ensures producers only wake consumers and vice versa  
   C. It prevents buffer overflow and underflow conditions  
   D. It allows for dynamic buffer size adjustment  

<details>
<summary>Answer</summary>
B. It ensures producers only wake consumers and vice versa
</details>

---

### Question 7:
*If a semaphore is initialized with value 3, and three threads call `sem_wait()` simultaneously, what happens to the fourth thread that calls `sem_wait()`?*

   A. It immediately returns with an error code  
   B. It decrements the semaphore to -1 and blocks  
   C. It waits for one of the other threads to call sem_post()  
   D. Both B and C are correct  

<details>
<summary>Answer</summary>
D. Both B and C are correct
</details>

---

### Question 8:
*In the binary semaphore example used as a lock, what should the initial value be and why?*

   A. 0, because we want the first thread to wait  
   B. 1, because we want one thread to enter the critical section  
   C. 2, to allow two threads simultaneous access  
   D. -1, to indicate the lock is initially unavailable  

<details>
<summary>Answer</summary>
B. 1, because we want one thread to enter the critical section
</details>

---

### Question 9:
*When using a semaphore as a condition variable for parent-child synchronization, what should the initial value be?*

   A. 1, to allow the parent to proceed initially  
   B. 0, because initially no child has completed  
   C. -1, to force the parent to wait  
   D. The number of child threads created  

<details>
<summary>Answer</summary>
B. 0, because initially no child has completed
</details>

---

### Question 10:
*In the producer-consumer problem with semaphores, what would happen if we placed the mutex acquisition before the empty/full semaphore wait?*

   A. The code would work more efficiently  
   B. It could lead to deadlock when the buffer is full/empty  
   C. It would prevent race conditions more effectively  
   D. It would have no significant impact on functionality  

<details>
<summary>Answer</summary>
B. It could lead to deadlock when the buffer is full/empty
</details>

---

### Question 11:
*What is the main problem with the spin-based approach for thread synchronization?*

   A. It causes memory leaks in long-running applications  
   B. It wastes CPU cycles by continuously checking the condition  
   C. It prevents other threads from accessing shared variables  
   D. It can only work with a single thread at a time  

<details>
<summary>Answer</summary>
B. It wastes CPU cycles by continuously checking the condition
</details>

---

### Question 12:
*In the circular buffer implementation, why is the modulo operator (%) used in the put() and get() functions?*

   A. To prevent buffer overflow by limiting the buffer size  
   B. To wrap the index around when it reaches the end of the array  
   C. To calculate the optimal buffer utilization percentage  
   D. To ensure thread-safe access to buffer elements  

<details>
<summary>Answer</summary>
B. To wrap the index around when it reaches the end of the array
</details>

---

### Question 13:
*What would happen if we forgot to initialize the semaphores in the producer-consumer problem?*

   A. The semaphores would default to value 0  
   B. The behavior would be undefined and could cause crashes  
   C. The semaphores would automatically initialize to 1  
   D. A compilation error would occur  

<details>
<summary>Answer</summary>
B. The behavior would be undefined and could cause crashes
</details>

---

### Question 14:
*In the dining philosophers problem, why does the naive solution cause deadlock?*

   A. Each philosopher tries to eat at the same time  
   B. All philosophers pick up their left fork simultaneously  
   C. The forks are not properly initialized  
   D. There are more philosophers than forks  

<details>
<summary>Answer</summary>
B. All philosophers pick up their left fork simultaneously
</details>

---

### Question 15:
*What is the key insight behind the asymmetric solution to the dining philosophers problem?*

   A. One philosopher gets priority over others  
   B. Breaking the circular wait condition by changing lock ordering  
   C. Using different types of locks for different philosophers  
   D. Allowing philosophers to eat with only one fork  

<details>
<summary>Answer</summary>
B. Breaking the circular wait condition by changing lock ordering
</details>

---

### Question 16:
*In the semaphore-based dining philosophers solution, why is the semaphore initialized to 4 instead of 5?*

   A. To reserve one slot for the operating system  
   B. To ensure at least one philosopher can always acquire both forks  
   C. To prevent buffer overflow in the semaphore implementation  
   D. To maintain compatibility with the asymmetric solution  

<details>
<summary>Answer</summary>
B. To ensure at least one philosopher can always acquire both forks
</details>

---

### Question 17:
*What happens when `pthread_cond_broadcast()` is called instead of `pthread_cond_signal()`?*

   A. Only the first waiting thread is awakened  
   B. All waiting threads are awakened simultaneously  
   C. A random waiting thread is selected to wake up  
   D. The signal is ignored if no threads are waiting  

<details>
<summary>Answer</summary>
B. All waiting threads are awakened simultaneously
</details>

---

### Question 18:
*In the context of condition variables, what does "spurious wakeup" mean?*

   A. A thread wakes up due to a system interrupt rather than a signal  
   B. Multiple threads wake up from a single signal  
   C. A thread wakes up without any corresponding signal being sent  
   D. A thread fails to wake up despite receiving a signal  

<details>
<summary>Answer</summary>
C. A thread wakes up without any corresponding signal being sent
</details>

---

### Question 19:
*What would be the consequence of using `if` instead of `while` in a multi-threaded producer-consumer scenario?*

   A. Improved performance due to fewer condition checks  
   B. Potential race conditions when multiple consumers wake up  
   C. Automatic handling of spurious wakeups  
   D. Guaranteed FIFO ordering of thread execution  

<details>
<summary>Answer</summary>
B. Potential race conditions when multiple consumers wake up
</details>

---

### Question 20:
*In the parent-child synchronization example, what would happen if the mutex is released twice consecutively?*

   A. The program would continue normally  
   B. It would cause undefined behavior or a runtime error  
   C. The second release would be automatically ignored  
   D. It would improve performance by reducing lock contention  

<details>
<summary>Answer</summary>
B. It would cause undefined behavior or a runtime error
</details>

---

### Question 21:
*What is the primary difference between `sem_wait()` and `pthread_cond_wait()` in terms of mutex handling?*

   A. sem_wait() doesn't require a mutex parameter  
   B. pthread_cond_wait() automatically releases and reacquires the mutex  
   C. sem_wait() is faster because it doesn't use mutexes  
   D. Both A and B are correct  

<details>
<summary>Answer</summary>
D. Both A and B are correct
</details>

---

### Question 22:
*In a scenario where you have 3 producers and 2 consumers with a buffer size of 5, what should be the initial values of the empty and full semaphores?*

   A. empty = 3, full = 2  
   B. empty = 5, full = 0  
   C. empty = 0, full = 5  
   D. empty = 2, full = 3  

<details>
<summary>Answer</summary>
B. empty = 5, full = 0
</details>

---

### Question 23:
*What would happen if a semaphore's value becomes negative?*

   A. It represents the number of threads waiting on the semaphore  
   B. It causes a runtime error and program termination  
   C. The semaphore automatically resets to zero  
   D. It indicates a deadlock condition  

<details>
<summary>Answer</summary>
A. It represents the number of threads waiting on the semaphore
</details>

---

### Question 24:
*In the quiz solution for the party host problem, why does each guest call `signal(cv_guest)` after waiting?*

   A. To wake up the host thread  
   B. To ensure all waiting guests are awakened in a chain reaction  
   C. To prevent deadlock with the host  
   D. To signal completion of the enterHouse() function  

<details>
<summary>Answer</summary>
B. To ensure all waiting guests are awakened in a chain reaction
</details>

---

### Question 25:
*What would happen if we used `pthread_cond_broadcast()` instead of `pthread_cond_signal()` in the party host problem?*

   A. It would be less efficient but functionally equivalent  
   B. It would cause all guests to wake up at once, which is desired  
   C. It would create a race condition between guests  
   D. It would prevent the host from opening the door  

<details>
<summary>Answer</summary>
B. It would cause all guests to wake up at once, which is desired
</details>

---

### Question 26:
*In the producer-consumer problem, what is the purpose of the `fill` and `use` variables in the circular buffer?*

   A. To count the number of produced and consumed items  
   B. To track the positions where the next item should be inserted and removed  
   C. To maintain the current size of the buffer  
   D. To implement thread-safe access to the buffer  

<details>
<summary>Answer</summary>
B. To track the positions where the next item should be inserted and removed
</details>

---

### Question 27:
*What would be the result if two producers simultaneously execute `put()` without proper synchronization?*

   A. Both items would be successfully added to different buffer positions  
   B. One item might overwrite the other due to a race condition  
   C. The buffer would automatically serialize the operations  
   D. A deadlock would occur between the two producers  

<details>
<summary>Answer</summary>
B. One item might overwrite the other due to a race condition
</details>

---

### Question 28:
*In the semaphore-based parent-child synchronization, what happens if the parent calls `sem_wait()` after the child has already called `sem_post()`?*

   A. The parent blocks indefinitely  
   B. The parent immediately continues execution  
   C. A race condition occurs  
   D. The semaphore value becomes invalid  

<details>
<summary>Answer</summary>
B. The parent immediately continues execution
</details>

---

### Question 29:
*What is the main advantage of using condition variables over busy-waiting (spinning)?*

   A. Condition variables are easier to implement  
   B. They consume less memory than spin locks  
   C. They don't waste CPU cycles while waiting  
   D. They provide better thread scheduling guarantees  

<details>
<summary>Answer</summary>
C. They don't waste CPU cycles while waiting
</details>

---

### Question 30:
*In a complex scenario with multiple condition variables, what could happen if a thread signals the wrong condition variable?*

   A. The signal is automatically redirected to the correct variable  
   B. Threads waiting on other conditions might not wake up when they should  
   C. All condition variables receive the signal simultaneously  
   D. The thread that sent the signal enters an error state  

<details>
<summary>Answer</summary>
B. Threads waiting on other conditions might not wake up when they should
</details>