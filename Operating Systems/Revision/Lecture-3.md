### Question 1:
*What is the purpose of file descriptors in an operating system?*

   A. To store the physical location of files on disk  
   B. To uniquely identify open files, pipes, or devices in a process  
   C. To provide encryption for file contents  
   D. To manage CPU scheduling for I/O-bound processes  

<details>
<summary>Answer</summary>
B. To uniquely identify open files, pipes, or devices in a process
</details>

---

### Question 2:
*Which system call is used to read data from a file descriptor?*

   A. write()  
   B. read()  
   C. open()  
   D. close()  

<details>
<summary>Answer</summary>
B. read()
</details>

---

### Question 3:
*What is the return value of read() when the end of a file (EOF) is reached?*

   A. -1  
   B. 0  
   C. 1  
   D. The total file size  

<details>
<summary>Answer</summary>
B. 0
</details>

---

### Question 4:
*Which of the following system calls is responsible for duplicating file descriptors?*

   A. fork()  
   B. dup()  
   C. pipe()  
   D. exec()  

<details>
<summary>Answer</summary>
B. dup()
</details>

---

### Question 5:
*Which system call is used to create a unidirectional communication channel between processes?*

   A. pipe()  
   B. fork()  
   C. exec()  
   D. socket()  

<details>
<summary>Answer</summary>
A. pipe()
</details>

---

### Question 6:
*In Unix-like systems, what is the file descriptor number for standard input (stdin)?*

   A. 0  
   B. 1  
   C. 2  
   D. 3  

<details>
<summary>Answer</summary>
A. 0
</details>

---

### Question 7:
*How does I/O redirection work in Unix-like systems?*

   A. It modifies system call behavior at the kernel level  
   B. It changes the input/output stream of a process to/from a file or another process  
   C. It creates new system calls to handle user-specified I/O requests  
   D. It allows processes to execute in kernel mode for faster performance  

<details>
<summary>Answer</summary>
B. It changes the input/output stream of a process to/from a file or another process
</details>

---

### Question 8:
*What is the key difference between I/O redirection and pipes?*

   A. Pipes create temporary files while I/O redirection does not  
   B. Pipes allow two processes to communicate directly, whereas I/O redirection writes to a file  
   C. I/O redirection works only with standard output, while pipes work with any file descriptor  
   D. Pipes can only transfer data between processes running in different users' sessions  

<details>
<summary>Answer</summary>
B. Pipes allow two processes to communicate directly, whereas I/O redirection writes to a file
</details>

---

### Question 9:
*Which system call is responsible for closing a file descriptor?*

   A. exit()  
   B. close()  
   C. shutdown()  
   D. end()  

<details>
<summary>Answer</summary>
B. close()
</details>

---

### Question 10:
*What is the primary challenge of direct execution of programs on the CPU?*

   A. The OS has no control over CPU execution  
   B. Programs cannot allocate memory dynamically  
   C. Programs do not have access to system resources  
   D. The OS prevents context switching  

<details>
<summary>Answer</summary>
A. The OS has no control over CPU execution
</details>

---

### Question 11:
*How does the OS regain control from a running process in limited direct execution?*

   A. Through a timer interrupt or system call  
   B. By terminating the process  
   C. By sending a software signal to the CPU  
   D. By forcing the process into a low-power state  

<details>
<summary>Answer</summary>
A. Through a timer interrupt or system call
</details>

---

### Question 12:
*Which privilege mode is used by applications in modern OSes?*

   A. Kernel mode  
   B. Supervisor mode  
   C. Hypervisor mode  
   D. User mode  

<details>
<summary>Answer</summary>
D. User mode
</details>

---

### Question 13:
*What is the purpose of the trap instruction in a system call?*

   A. To switch from user mode to kernel mode  
   B. To halt the execution of a process  
   C. To create a new child process  
   D. To free unused memory pages  

<details>
<summary>Answer</summary>
A. To switch from user mode to kernel mode
</details>

---

### Question 14:
*Where does the OS store the context of a process during a system call?*

   A. User stack  
   B. Kernel stack  
   C. CPU cache  
   D. Heap memory  

<details>
<summary>Answer</summary>
B. Kernel stack
</details>

---

### Question 15:
*What is the purpose of a context switch?*

   A. To allocate more CPU time to a single process  
   B. To transfer control from one process to another  
   C. To execute system calls in kernel mode  
   D. To increase CPU clock speed dynamically  

<details>
<summary>Answer</summary>
B. To transfer control from one process to another
</details>

---

### Question 16:
*Which of the following approaches to CPU control relies on cooperative behavior from processes?*

   A. Preemptive scheduling  
   B. Non-cooperative approach  
   C. Timer-based switching  
   D. System calls voluntarily yielding control  

<details>
<summary>Answer</summary>
D. System calls voluntarily yielding control
</details>

---

### Question 17:
*Which mechanism allows the OS to forcefully regain control of the CPU from a process?*

   A. Cooperative scheduling  
   B. Timer interrupt  
   C. Spinlock  
   D. Voluntary context switch  

<details>
<summary>Answer</summary>
B. Timer interrupt
</details>

---

### Question 18:
*What is the purpose of the Interrupt Descriptor Table (IDT)?*

   A. It stores pointers to interrupt and system call handlers  
   B. It keeps track of all running processes in the OS  
   C. It manages memory allocation in kernel mode  
   D. It schedules processes for execution  

<details>
<summary>Answer</summary>
A. It stores pointers to interrupt and system call handlers
</details>

---

### Question 19:
*What happens when the OS executes a return-from-trap instruction?*

   A. The process is terminated  
   B. The CPU switches from kernel mode to user mode  
   C. A new process is created  
   D. The kernel stack is erased  

<details>
<summary>Answer</summary>
B. The CPU switches from kernel mode to user mode
</details>

---

### Question 20:
*Which file in Xv6 handles system call dispatching?*

   A. syscall.c  
   B. proc.c  
   C. trap.c  
   D. main.c  

<details>
<summary>Answer</summary>
A. syscall.c
</details>

---

### Question 21:
*What is the primary role of the kernel stack during a system call?*

   A. To store the process's open file descriptors  
   B. To hold the process's user-space stack data  
   C. To temporarily save CPU registers and execution state  
   D. To allocate memory for system call parameters  

<details>
<summary>Answer</summary>
C. To temporarily save CPU registers and execution state
</details>

---

### Question 22:
*Which of the following best describes the role of a timer interrupt in process scheduling?*

   A. It prevents user processes from modifying kernel memory  
   B. It ensures that processes do not run indefinitely by periodically interrupting execution  
   C. It increases the execution speed of I/O-bound processes  
   D. It prevents processes from executing privileged instructions  

<details>
<summary>Answer</summary>
B. It ensures that processes do not run indefinitely by periodically interrupting execution
</details>

---

### Question 23:
*What does the context switch mechanism in Xv6 do?*

   A. It allocates new memory pages for running processes  
   B. It saves and restores process states when switching between processes  
   C. It deletes terminated processes from the process table  
   D. It increases CPU priority for the most recently created process  

<details>
<summary>Answer</summary>
B. It saves and restores process states when switching between processes
</details>

---

### Question 24:
*What happens if an interrupt occurs while the OS is handling another interrupt?*

   A. The CPU immediately handles the new interrupt  
   B. The OS ignores the second interrupt  
   C. The OS temporarily disables interrupts until the first one is handled  
   D. The system crashes due to interrupt overflow  

<details>
<summary>Answer</summary>
C. The OS temporarily disables interrupts until the first one is handled
</details>

---

### Question 25:
*What is a major benefit of using limited direct execution for CPU virtualization?*

   A. It allows user programs to run without requiring an operating system  
   B. It improves efficiency while maintaining OS control over processes  
   C. It eliminates the need for privilege separation between kernel and user space  
   D. It prevents user programs from making system calls  

<details>
<summary>Answer</summary>
B. It improves efficiency while maintaining OS control over processes
</details>
