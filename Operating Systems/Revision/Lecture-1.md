### Question 1:
*Which of the following is NOT a key responsibility of an operating system?*

   A. Managing CPU scheduling and process execution  
   B. Allocating memory to running programs  
   C. Directly executing user applications  
   D. Managing device communication through drivers  

<details>
<summary>Answer</summary>
C. Directly executing user applications
</details>

---

### Question 2:
*Which of the following best describes virtualization in an operating system?*

   A. It provides multiple applications with direct access to hardware resources  
   B. It enables efficient CPU scheduling among different threads  
   C. It transforms physical resources into more powerful and flexible virtual equivalents  
   D. It ensures that processes run sequentially without interruptions  

<details>
<summary>Answer</summary>
C. It transforms physical resources into more powerful and flexible virtual equivalents
</details>

---

### Question 3:
*What is the main purpose of process isolation in an operating system?*

   A. To increase CPU utilization by running multiple processes simultaneously  
   B. To prevent one process from interfering with another’s memory and execution  
   C. To ensure all processes have equal priority in scheduling  
   D. To eliminate the need for context switching  

<details>
<summary>Answer</summary>
B. To prevent one process from interfering with another’s memory and execution
</details>

---

### Question 4:
*In a time-sharing system, the OS switches between processes so quickly that each process appears to be executing continuously. What concept enables this illusion?*

   A. Paging  
   B. Virtualization  
   C. Preemptive multitasking  
   D. Deadlock prevention  

<details>
<summary>Answer</summary>
C. Preemptive multitasking
</details>

---

### Question 5:
*Which of the following statements about the xv6 operating system is FALSE?*

   A. xv6 is based on the Sixth Edition Unix (V6)  
   B. xv6 supports virtual memory using paging  
   C. xv6 is designed for production use in modern computer systems  
   D. xv6 can be run in an emulated environment like QEMU  

<details>
<summary>Answer</summary>
C. xv6 is designed for production use in modern computer systems
</details>

---

### Question 6:
*Which of the following is NOT a primary design goal of an operating system?*

   A. Abstraction of hardware resources  
   B. Efficient resource management  
   C. Allowing direct user control over CPU scheduling  
   D. Providing isolation between processes  

<details>
<summary>Answer</summary>
C. Allowing direct user control over CPU scheduling
</details>

---

### Question 7:
*Which component of an OS is responsible for translating virtual addresses to physical addresses?*

   A. Process Scheduler  
   B. Memory Management Unit (MMU)  
   C. Interrupt Controller  
   D. System Call Interface  

<details>
<summary>Answer</summary>
B. Memory Management Unit (MMU)
</details>

---

### Question 8:
*What happens when a process is context-switched?*

   A. The process permanently loses its allocated memory  
   B. The CPU switches execution to another process while saving the state of the previous one  
   C. The process execution is terminated  
   D. The process switches from kernel mode to user mode  

<details>
<summary>Answer</summary>
B. The CPU switches execution to another process while saving the state of the previous one
</details>

---

### Question 9:
*What role does the OS play in handling hardware interrupts?*

   A. The OS blocks all interrupts until the CPU is idle  
   B. The OS immediately executes all pending interrupts in FIFO order  
   C. The OS invokes the corresponding interrupt handler to process the event  
   D. The OS terminates any process that triggers an interrupt  

<details>
<summary>Answer</summary>
C. The OS invokes the corresponding interrupt handler to process the event
</details>

---

### Question 10:
*Which scheduling algorithm is commonly used for real-time operating systems?*

   A. Round Robin  
   B. First-Come, First-Served (FCFS)  
   C. Shortest Job Next (SJN)  
   D. Earliest Deadline First (EDF)  

<details>
<summary>Answer</summary>
D. Earliest Deadline First (EDF)
</details>

---

### Question 11:
*Which of the following is NOT a valid reason for using multiprogramming?*

   A. To improve CPU utilization  
   B. To reduce memory fragmentation  
   C. To increase process isolation  
   D. To allow multiple processes to share CPU time  

<details>
<summary>Answer</summary>
C. To increase process isolation
</details>

---

### Question 12:
*Which part of the OS handles process creation and termination?*

   A. Process Scheduler  
   B. Memory Manager  
   C. Process Control Block (PCB)  
   D. Process Manager  

<details>
<summary>Answer</summary>
D. Process Manager
</details>

---

### Question 13:
*Which of the following mechanisms ensures mutual exclusion in concurrent programming?*

   A. Virtual Memory  
   B. Paging  
   C. Locks and Semaphores  
   D. File Systems  

<details>
<summary>Answer</summary>
C. Locks and Semaphores
</details>

---

### Question 14:
*In x86 architecture, what is the purpose of the `RIP` register?*

   A. Stores the address of the next instruction to be executed  
   B. Holds the stack pointer  
   C. Stores process ID information  
   D. Manages memory allocation  

<details>
<summary>Answer</summary>
A. Stores the address of the next instruction to be executed
</details>

---

### Question 15:
*What is the function of a page table in virtual memory systems?*

   A. Stores user-level process metadata  
   B. Maps virtual addresses to physical addresses  
   C. Schedules CPU execution cycles  
   D. Manages process priority levels  

<details>
<summary>Answer</summary>
B. Maps virtual addresses to physical addresses
</details>

---

### Question 16:
*What is the main disadvantage of the Round Robin (RR) scheduling algorithm?*

   A. It does not ensure fairness among processes  
   B. It can lead to starvation of low-priority processes  
   C. It increases context-switching overhead  
   D. It always favors CPU-bound processes over I/O-bound processes  

<details>
<summary>Answer</summary>
C. It increases context-switching overhead
</details>

---

### Question 17:
*Which of the following best describes the purpose of a system call?*

   A. To allow direct access to hardware for user processes  
   B. To provide an interface for user programs to request OS services  
   C. To create new hardware devices for an OS  
   D. To schedule processes for execution  

<details>
<summary>Answer</summary>
B. To provide an interface for user programs to request OS services
</details>

---

### Question 18:
*Which of the following is NOT a common feature of a modern file system?*

   A. Journaling to prevent corruption  
   B. Caching frequently accessed data  
   C. Direct execution of user programs from disk  
   D. Hierarchical directory structures  

<details>
<summary>Answer</summary>
C. Direct execution of user programs from disk
</details>

---

### Question 19:
*What happens when an OS encounters a page fault?*

   A. The OS swaps the entire process to disk  
   B. The OS terminates the process due to an illegal memory access  
   C. The OS loads the required page into memory from disk  
   D. The OS immediately resumes execution of the process without any delay  

<details>
<summary>Answer</summary>
C. The OS loads the required page into memory from disk
</details>

---

### Question 20:
*What is the main purpose of a kernel mode in an OS?*

   A. To allow unrestricted access to hardware and critical system operations  
   B. To enable user applications to execute faster  
   C. To provide security against process execution failures  
   D. To eliminate the need for scheduling algorithms  

<details>
<summary>Answer</summary>
A. To allow unrestricted access to hardware and critical system operations
</details>

---

### Question 21:
*Which of the following best explains the term "deadlock" in an OS?*

   A. A situation where multiple processes run infinitely without terminating  
   B. A condition where multiple processes wait indefinitely for resources held by each other  
   C. A scenario where all processes complete execution at the same time  
   D. A state where the OS forcibly terminates long-running processes  

<details>
<summary>Answer</summary>
B. A condition where multiple processes wait indefinitely for resources held by each other
</details>

---

### Question 22:
*What is the purpose of Direct Memory Access (DMA) in an OS?*

   A. To allow processes to directly control the CPU scheduling  
   B. To enable direct data transfers between memory and peripherals without CPU involvement  
   C. To allocate memory dynamically among user programs  
   D. To store temporary files in secondary storage  

<details>
<summary>Answer</summary>
B. To enable direct data transfers between memory and peripherals without CPU involvement
</details>

---

### Question 23:
*Which of the following is a key difference between a thread and a process?*

   A. A thread has its own separate memory space, whereas a process shares memory with other processes  
   B. A process has its own separate memory space, whereas a thread shares memory with other threads in the same process  
   C. Threads are scheduled by the OS, whereas processes are not  
   D. A process does not require system resources, whereas a thread does  

<details>
<summary>Answer</summary>
B. A process has its own separate memory space, whereas a thread shares memory with other threads in the same process
</details>

---

### Question 24:
*Which of the following OS mechanisms helps prevent race conditions?*

   A. Virtual Memory  
   B. Mutexes and Semaphores  
   C. File Descriptors  
   D. Interrupt Handlers  

<details>
<summary>Answer</summary>
B. Mutexes and Semaphores
</details>

---

### Question 25:
*Which of the following is NOT a function of an OS scheduler?*

   A. Deciding which process runs next  
   B. Allocating memory pages to a process  
   C. Assigning CPU time to processes based on priority  
   D. Managing multiple threads within a process  

<details>
<summary>Answer</summary>
B. Allocating memory pages to a process
</details>
