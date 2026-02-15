### Question 1:
*In Windows scheduling, which priority range is used for real-time threads?*

   A. 0-15  
   B. 1-15  
   C. 16-31  
   D. 0-31  

<details>
<summary>Answer</summary>
C. 16-31
</details>

---

### Question 2:
*In Windows scheduling, what is the purpose of the "priority boost" feature?*

   A. To ensure that long-running jobs are always given the highest priority.  
   B. To temporarily increase the priority of a thread that is awakened from a wait state.  
   C. To reduce the priority of interactive jobs.  
   D. To increase the priority of I/O-bound jobs.  

<details>
<summary>Answer</summary>
B. To temporarily increase the priority of a thread that is awakened from a wait state.
</details>

---

### Question 3:
*In Windows scheduling, what is the role of the "System Idle Process" (priority 0)?*

   A. It runs when no other thread is ready to run on the CPU.  
   B. It handles I/O operations for all processes.  
   C. It manages memory allocation for the system.  
   D. It is used for real-time tasks.  

<details>
<summary>Answer</summary>
A. It runs when no other thread is ready to run on the CPU.
</details>

---

### Question 4:
*In proportional share scheduling, what do "tickets" represent?*

   A. The number of times a process can be preempted.  
   B. The share of a resource that a process should receive.  
   C. The priority level of a process.  
   D. The amount of memory a process can use.  

<details>
<summary>Answer</summary>
B. The share of a resource that a process should receive.
</details>

---

### Question 5:
*In lottery scheduling, how is the winning ticket selected?*

   A. The scheduler picks the ticket with the highest priority.  
   B. The scheduler randomly selects a ticket from the pool of all tickets.  
   C. The scheduler picks the ticket with the lowest priority.  
   D. The scheduler picks the ticket with the smallest runtime.  

<details>
<summary>Answer</summary>
B. The scheduler randomly selects a ticket from the pool of all tickets.
</details>

---

### Question 6:
*In lottery scheduling, what is the primary disadvantage of using a small number of tickets?*

   A. It increases the overhead of context switching.  
   B. It reduces the fairness of the scheduler.  
   C. It increases the response time of interactive jobs.  
   D. It reduces the turnaround time of long-running jobs.  

<details>
<summary>Answer</summary>
B. It reduces the fairness of the scheduler.
</details>

---

### Question 7:
*In lottery scheduling, what is the primary advantage of using a large number of tickets?*

   A. It reduces the overhead of context switching.  
   B. It improves the fairness of the scheduler.  
   C. It increases the response time of interactive jobs.  
   D. It reduces the turnaround time of long-running jobs.  

<details>
<summary>Answer</summary>
B. It improves the fairness of the scheduler.
</details>

---

### Question 8:
*In stride scheduling, what is the "stride" of a process?*

   A. The amount of time a process can spend at a given priority level.  
   B. The inverse of the number of tickets assigned to the process.  
   C. The number of times a process can be preempted.  
   D. The amount of memory a process can use.  

<details>
<summary>Answer</summary>
B. The inverse of the number of tickets assigned to the process.
</details>

---

### Question 9:
*In stride scheduling, what is the primary advantage over lottery scheduling?*

   A. It ensures perfect fairness without randomness.  
   B. It reduces the overhead of context switching.  
   C. It improves the response time of interactive jobs.  
   D. It increases the turnaround time of long-running jobs.  

<details>
<summary>Answer</summary>
A. It ensures perfect fairness without randomness.
</details>

---

### Question 10:
*In stride scheduling, what is the primary disadvantage compared to lottery scheduling?*

   A. It requires tracking of global state (pass values).  
   B. It increases the overhead of context switching.  
   C. It reduces the fairness of the scheduler.  
   D. It increases the response time of interactive jobs.  

<details>
<summary>Answer</summary>
A. It requires tracking of global state (pass values).
</details>

---

### Question 11:
*In Linux Completely Fair Scheduler (CFS), what is the primary metric used to determine which process to run next?*

   A. Priority level  
   B. Virtual runtime (vruntime)  
   C. Number of tickets  
   D. Stride value  

<details>
<summary>Answer</summary>
B. Virtual runtime (vruntime)
</details>

---

### Question 12:
*In CFS, what is the purpose of the "sched_latency" parameter?*

   A. To determine the total time CFS aims to distribute fairly among all processes.  
   B. To determine the priority level of a process.  
   C. To determine the number of tickets assigned to a process.  
   D. To determine the stride value of a process.  

<details>
<summary>Answer</summary>
A. To determine the total time CFS aims to distribute fairly among all processes.
</details>

---

### Question 13:
*In CFS, what happens to the time slice of a process if there are too many processes running?*

   A. The time slice is increased to reduce context switching.  
   B. The time slice is reduced to ensure fairness.  
   C. The time slice is forced to be at least the "min_granularity" value.  
   D. The time slice is set to zero, and the process is preempted.  

<details>
<summary>Answer</summary>
C. The time slice is forced to be at least the "min_granularity" value.
</details>

---

### Question 14:
*In CFS, what is the primary purpose of the "nice" value?*

   A. To determine the priority level of a process.  
   B. To determine the number of tickets assigned to a process.  
   C. To determine the stride value of a process.  
   D. To determine the virtual runtime of a process.  

<details>
<summary>Answer</summary>
A. To determine the priority level of a process.
</details>

---

### Question 15:
*In CFS, what is the primary advantage of using a Red-Black Tree (RBT) to manage processes?*

   A. It ensures that the process with the smallest vruntime is always at the leftmost node.  
   B. It reduces the overhead of context switching.  
   C. It improves the response time of interactive jobs.  
   D. It increases the turnaround time of long-running jobs.  

<details>
<summary>Answer</summary>
A. It ensures that the process with the smallest vruntime is always at the leftmost node.
</details>

---

### Question 16:
*In CFS, what happens to a process's vruntime when it wakes up after sleeping?*

   A. Its vruntime is set to the minimum vruntime found in the Red-Black Tree.  
   B. Its vruntime is reset to zero.  
   C. Its vruntime is increased by a fixed amount.  
   D. Its vruntime is decreased by a fixed amount.  

<details>
<summary>Answer</summary>
A. Its vruntime is set to the minimum vruntime found in the Red-Black Tree.
</details>

---

### Question 17:
*In CFS, what is the primary purpose of adjusting a sleeping process's vruntime when it wakes up?*

   A. To prevent the process from monopolizing the CPU.  
   B. To increase the priority of the process.  
   C. To reduce the overhead of context switching.  
   D. To improve the response time of interactive jobs.  

<details>
<summary>Answer</summary>
A. To prevent the process from monopolizing the CPU.
</details>

---

### Question 18:
*In CFS, what is the primary disadvantage of using a very small "min_granularity" value?*

   A. It increases the overhead of context switching.  
   B. It reduces the fairness of the scheduler.  
   C. It increases the response time of interactive jobs.  
   D. It reduces the turnaround time of long-running jobs.  

<details>
<summary>Answer</summary>
A. It increases the overhead of context switching.
</details>

---

### Question 19:
*In CFS, what is the primary advantage of using a larger "sched_latency" value?*

   A. It reduces the overhead of context switching.  
   B. It improves the fairness of the scheduler.  
   C. It increases the response time of interactive jobs.  
   D. It reduces the turnaround time of long-running jobs.  

<details>
<summary>Answer</summary>
A. It reduces the overhead of context switching.
</details>

---

### Question 20:
*In CFS, what is the primary disadvantage of using a very large "sched_latency" value?*

   A. It increases the overhead of context switching.  
   B. It reduces the fairness of the scheduler.  
   C. It increases the response time of interactive jobs.  
   D. It reduces the turnaround time of long-running jobs.  

<details>
<summary>Answer</summary>
B. It reduces the fairness of the scheduler.
</details>

---

### Question 21:
*In CFS, what is the primary purpose of the "weight" assigned to each process?*

   A. To determine the priority level of the process.  
   B. To determine the number of tickets assigned to the process.  
   C. To determine the stride value of the process.  
   D. To determine the virtual runtime of the process.  

<details>
<summary>Answer</summary>
A. To determine the priority level of the process.
</details>

---

### Question 22:
*In CFS, what is the primary advantage of using a Red-Black Tree (RBT) over a linked list for managing processes?*

   A. It allows for efficient search, insertion, and deletion of processes.  
   B. It reduces the overhead of context switching.  
   C. It improves the response time of interactive jobs.  
   D. It increases the turnaround time of long-running jobs.  

<details>
<summary>Answer</summary>
A. It allows for efficient search, insertion, and deletion of processes.
</details>

---

### Question 23:
*In CFS, what is the primary disadvantage of using a Red-Black Tree (RBT) for managing processes?*

   A. It increases the overhead of context switching.  
   B. It requires more memory than a linked list.  
   C. It reduces the fairness of the scheduler.  
   D. It increases the response time of interactive jobs.  

<details>
<summary>Answer</summary>
B. It requires more memory than a linked list.
</details>

---

### Question 24:
*In CFS, what is the primary purpose of the "vruntime" metric?*

   A. To track how much CPU time a process has received.  
   B. To determine the priority level of a process.  
   C. To determine the number of tickets assigned to a process.  
   D. To determine the stride value of a process.  

<details>
<summary>Answer</summary>
A. To track how much CPU time a process has received.
</details>

---

### Question 25:
*In CFS, what is the primary advantage of using a dynamic time slice based on "vruntime"?*

   A. It ensures that processes with lower vruntime get more CPU time.  
   B. It reduces the overhead of context switching.  
   C. It improves the response time of interactive jobs.  
   D. It increases the turnaround time of long-running jobs.  

<details>
<summary>Answer</summary>
A. It ensures that processes with lower vruntime get more CPU time.
</details>
