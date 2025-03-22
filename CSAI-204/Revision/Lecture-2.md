### Question 1:
*What is the primary function of a process in an operating system?*

   A. It is a passive entity that only contains program code  
   B. It is a running instance of a program with allocated resources  
   C. It only manages CPU scheduling for the OS  
   D. It refers to a single-threaded execution model in an OS  

<details>
<summary>Answer</summary>
B. It is a running instance of a program with allocated resources
</details>

---

### Question 2:
*Which of the following is NOT a component of a process?*

   A. Program Counter  
   B. Stack Pointer  
   C. Kernel Scheduler  
   D. Heap  

<details>
<summary>Answer</summary>
C. Kernel Scheduler
</details>

---

### Question 3:
*What is the purpose of CPU virtualization in an OS?*

   A. To ensure only one process runs at a time  
   B. To allow multiple processes to share the CPU efficiently  
   C. To physically increase the number of CPUs in a system  
   D. To eliminate the need for context switching  

<details>
<summary>Answer</summary>
B. To allow multiple processes to share the CPU efficiently
</details>

---

### Question 4:
*Which of the following best describes a monolithic kernel?*

   A. It runs most OS functions in user mode  
   B. It separates OS components to run in isolated user-space services  
   C. It runs the entire OS with full hardware privilege in supervisor mode  
   D. It is designed only for microcontroller-based systems  

<details>
<summary>Answer</summary>
C. It runs the entire OS with full hardware privilege in supervisor mode
</details>

---

### Question 5:
*What is the key disadvantage of a monolithic kernel?*

   A. It lacks support for process scheduling  
   B. A single failure can crash the entire OS  
   C. It does not allow direct hardware access  
   D. It has poor memory management capabilities  

<details>
<summary>Answer</summary>
B. A single failure can crash the entire OS
</details>

---

### Question 6:
*Which of the following system calls is used to create a new process?*

   A. exec()  
   B. fork()  
   C. wait()  
   D. spawn()  

<details>
<summary>Answer</summary>
B. fork()
</details>

---

### Question 7:
*What happens when a process executes a successful fork() call?*

   A. A new thread is created within the same process  
   B. A new child process is created, identical to the parent  
   C. The OS spawns an independent new program  
   D. The parent process immediately terminates  

<details>
<summary>Answer</summary>
B. A new child process is created, identical to the parent
</details>

---

### Question 8:
*What is the return value of fork() in the parent process?*

   A. 0  
   B. -1  
   C. The Process ID (PID) of the child  
   D. The parent’s own Process ID  

<details>
<summary>Answer</summary>
C. The Process ID (PID) of the child
</details>

---

### Question 9:
*What is the return value of fork() in the child process?*

   A. 0  
   B. -1  
   C. The parent’s Process ID  
   D. The child’s own Process ID  

<details>
<summary>Answer</summary>
A. 0
</details>

---

### Question 10:
*Which system call is used to replace a process’s memory with a new program?*

   A. fork()  
   B. exec()  
   C. wait()  
   D. clone()  

<details>
<summary>Answer</summary>
B. exec()
</details>

---

### Question 11:
*What happens if exec() is successful?*

   A. It returns 0 to indicate success  
   B. It replaces the calling process with a new program and does not return  
   C. It creates a new process and returns its PID  
   D. It suspends the current process execution  

<details>
<summary>Answer</summary>
B. It replaces the calling process with a new program and does not return
</details>

---

### Question 12:
*Which of the following system calls suspends a parent process until its child terminates?*

   A. fork()  
   B. exec()  
   C. wait()  
   D. kill()  

<details>
<summary>Answer</summary>
C. wait()
</details>

---

### Question 13:
*What is the main purpose of process states in an OS?*

   A. To classify processes based on user priority  
   B. To define different execution stages of a process  
   C. To ensure memory protection between processes  
   D. To prevent process switching during execution  

<details>
<summary>Answer</summary>
B. To define different execution stages of a process
</details>

---

### Question 14:
*Which of the following is NOT a valid process state?*

   A. Running  
   B. Ready  
   C. Suspended  
   D. Blocked  

<details>
<summary>Answer</summary>
C. Suspended
</details>

---

### Question 15:
*What is the purpose of the Process Control Block (PCB)?*

   A. It stores user credentials for authentication  
   B. It maintains process metadata like state and register values  
   C. It holds kernel memory addresses  
   D. It manages CPU scheduling algorithms  

<details>
<summary>Answer</summary>
B. It maintains process metadata like state and register values
</details>

---

### Question 16:
*In Xv6, where is process scheduling handled?*

   A. proc.c  
   B. syscall.c  
   C. file.c  
   D. bio.c  

<details>
<summary>Answer</summary>
A. proc.c
</details>

---

### Question 17:
*Which of the following best describes the purpose of a pipe in an OS?*

   A. It allows inter-process communication by passing data through a shared memory buffer  
   B. It is a mechanism to create new processes dynamically  
   C. It redirects process output to a network socket  
   D. It prevents deadlocks in multi-threaded programs  

<details>
<summary>Answer</summary>
A. It allows inter-process communication by passing data through a shared memory buffer
</details>

---

### Question 18:
*Which file descriptor represents standard output (stdout) in Unix-like OS?*

   A. 0  
   B. 1  
   C. 2  
   D. 3  

<details>
<summary>Answer</summary>
B. 1
</details>

---

### Question 19:
*What happens if a process tries to execute a privileged instruction in user mode?*

   A. The instruction executes successfully  
   B. The OS ignores the instruction  
   C. The CPU triggers a mode switch to supervisor mode  
   D. The OS terminates the process  

<details>
<summary>Answer</summary>
D. The OS terminates the process
</details>

---

### Question 20:
*Which of the following best describes IO redirection in Unix?*

   A. It allows a process to modify file permissions dynamically  
   B. It allows changing input/output sources of a process  
   C. It creates new processes based on file inputs  
   D. It prevents system calls from interacting with hardware  

<details>
<summary>Answer</summary>
B. It allows changing input/output sources of a process
</details>

---

### Question 21:
*What is a zombie process in Unix?*

   A. A process that is waiting for I/O operations  
   B. A terminated process whose exit status has not been collected by the parent  
   C. A process that has consumed all available system resources  
   D. A process that continuously forks itself  

<details>
<summary>Answer</summary>
B. A terminated process whose exit status has not been collected by the parent
</details>

---

### Question 22:
*Why is the separation of fork() and exec() useful?*

   A. It simplifies memory allocation for the child process  
   B. It allows manipulation of process properties before running a new program  
   C. It prevents race conditions in process creation  
   D. It ensures the child process always executes first  

<details>
<summary>Answer</summary>
B. It allows manipulation of process properties before running a new program
</details>

---

### Question 23:
*What happens when a process closes a file descriptor?*

   A. The file is permanently deleted from the file system  
   B. Other processes cannot access the file  
   C. The OS removes the reference to the file in the process’s file descriptor table  
   D. The file’s contents are erased from disk  

<details>
<summary>Answer</summary>
C. The OS removes the reference to the file in the process’s file descriptor table
</details>

---

### Question 24:
*Which of the following best describes a blocked process?*

   A. It is waiting for an external event (e.g., I/O operation) to complete  
   B. It is ready to execute but the OS has not scheduled it yet  
   C. It is currently executing on the CPU  
   D. It has been terminated but is still using system resources  

<details>
<summary>Answer</summary>
A. It is waiting for an external event (e.g., I/O operation) to complete
</details>

---

### Question 25:
*What is the purpose of the trap.c file in Xv6?*

   A. It manages virtual memory allocation  
   B. It handles process scheduling and execution  
   C. It implements system call handling and interrupt processing  
   D. It manages disk operations and I/O buffering  

<details>
<summary>Answer</summary>
C. It implements system call handling and interrupt processing
</details>
