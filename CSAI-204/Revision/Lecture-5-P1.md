### Question 1:
*In a Multi-Level Feedback Queue (MLFQ) scheduler, what is the primary goal of varying the priority of a job based on its observed behavior?*

   A. To maximize CPU utilization  
   B. To optimize turnaround time and minimize response time  
   C. To reduce the number of context switches  
   D. To ensure fairness among all processes  

<details>
<summary>Answer</summary>
B. To optimize turnaround time and minimize response time
</details>

---

### Question 2:
*Which of the following is NOT a rule in the basic MLFQ scheduling algorithm?*

   A. If Priority(A) > Priority(B), A runs (B doesn’t).  
   B. If Priority(A) = Priority(B), A & B run in Round Robin.  
   C. When a job enters the system, it is placed at the lowest priority.  
   D. If a job uses up an entire time slice while running, its priority is reduced.  

<details>
<summary>Answer</summary>
C. When a job enters the system, it is placed at the lowest priority.
</details>

---

### Question 3:
*In MLFQ, what happens to a job's priority if it gives up the CPU before the time slice is up?*

   A. Its priority is reduced.  
   B. Its priority remains the same.  
   C. Its priority is increased.  
   D. It is moved to the lowest priority queue.  

<details>
<summary>Answer</summary>
B. Its priority remains the same.
</details>

---

### Question 4:
*What is the primary issue with the basic MLFQ scheduling algorithm that can lead to starvation?*

   A. Too many interactive jobs can starve long-running jobs.  
   B. Too many long-running jobs can starve interactive jobs.  
   C. The scheduler cannot handle I/O-bound jobs.  
   D. The scheduler cannot handle CPU-bound jobs.  

<details>
<summary>Answer</summary>
A. Too many interactive jobs can starve long-running jobs.
</details>

---

### Question 5:
*What is the purpose of the "priority boost" rule in MLFQ?*

   A. To ensure that long-running jobs are always given the highest priority.  
   B. To prevent starvation by periodically moving all jobs to the topmost queue.  
   C. To reduce the priority of interactive jobs.  
   D. To increase the priority of I/O-bound jobs.  

<details>
<summary>Answer</summary>
B. To prevent starvation by periodically moving all jobs to the topmost queue.
</details>

---

### Question 6:
*In MLFQ, what is the "allotment" of a job?*

   A. The amount of time a job can spend at a given priority level before its priority is reduced.  
   B. The total amount of CPU time a job is allowed to use.  
   C. The number of times a job can be preempted before it is terminated.  
   D. The amount of memory a job is allowed to use.  

<details>
<summary>Answer</summary>
A. The amount of time a job can spend at a given priority level before its priority is reduced.
</details>

---

### Question 7:
*Which of the following is a potential issue with MLFQ that can be exploited by an adversary?*

   A. A job can manipulate its priority by issuing I/O operations just before its time slice ends.  
   B. A job can monopolize the CPU by never yielding.  
   C. A job can starve other jobs by always running at the highest priority.  
   D. A job can crash the system by using too much memory.  

<details>
<summary>Answer</summary>
A. A job can manipulate its priority by issuing I/O operations just before its time slice ends.
</details>

---

### Question 8:
*In the Solaris MLFQ implementation, how often are priorities boosted?*

   A. Every 10 milliseconds  
   B. Every 100 milliseconds  
   C. Every 1 second  
   D. Every 10 seconds  

<details>
<summary>Answer</summary>
C. Every 1 second
</details>

---

### Question 9:
*Which of the following is NOT a characteristic of the Solaris MLFQ implementation?*

   A. It has 60 queues.  
   B. It uses slowly increasing time-slice lengths.  
   C. It boosts priorities every 1 second.  
   D. It uses a fixed time slice for all queues.  

<details>
<summary>Answer</summary>
D. It uses a fixed time slice for all queues.
</details>

---

### Question 10:
*In MLFQ, what is the primary advantage of using multiple queues with different priority levels?*

   A. It ensures that all jobs get an equal share of the CPU.  
   B. It allows the scheduler to prioritize shorter jobs and interactive jobs.  
   C. It reduces the overhead of context switching.  
   D. It prevents jobs from being preempted.  

<details>
<summary>Answer</summary>
B. It allows the scheduler to prioritize shorter jobs and interactive jobs.
</details>

---

### Question 11:
*In the context of MLFQ, what is the "convoy effect"?*

   A. Long-running jobs delay shorter jobs, leading to poor turnaround time.  
   B. Short jobs delay long-running jobs, leading to poor response time.  
   C. I/O-bound jobs delay CPU-bound jobs, leading to poor CPU utilization.  
   D. High-priority jobs delay low-priority jobs, leading to starvation.  

<details>
<summary>Answer</summary>
A. Long-running jobs delay shorter jobs, leading to poor turnaround time.
</details>

---

### Question 12:
*In MLFQ, what happens to a job's priority if it uses up its entire time slice?*

   A. Its priority is increased.  
   B. Its priority is reduced.  
   C. Its priority remains the same.  
   D. It is moved to the lowest priority queue.  

<details>
<summary>Answer</summary>
B. Its priority is reduced.
</details>

---

### Question 13:
*In MLFQ, what is the primary purpose of the "better accounting" rule?*

   A. To prevent jobs from gaming the scheduler by manipulating their priority.  
   B. To ensure that all jobs get an equal share of the CPU.  
   C. To reduce the overhead of context switching.  
   D. To increase the priority of I/O-bound jobs.  

<details>
<summary>Answer</summary>
A. To prevent jobs from gaming the scheduler by manipulating their priority.
</details>

---

### Question 14:
*In MLFQ, what is the primary disadvantage of using a very short time slice for high-priority queues?*

   A. It increases the overhead of context switching.  
   B. It reduces the response time of interactive jobs.  
   C. It increases the turnaround time of long-running jobs.  
   D. It reduces the fairness of the scheduler.  

<details>
<summary>Answer</summary>
A. It increases the overhead of context switching.
</details>

---

### Question 15:
*In MLFQ, what is the primary advantage of using a longer time slice for low-priority queues?*

   A. It reduces the overhead of context switching.  
   B. It improves the response time of interactive jobs.  
   C. It increases the turnaround time of long-running jobs.  
   D. It improves the fairness of the scheduler.  

<details>
<summary>Answer</summary>
A. It reduces the overhead of context switching.
</details>

---

### Question 16:
*In MLFQ, what is the primary purpose of the "priority boost" rule?*

   A. To ensure that long-running jobs are always given the highest priority.  
   B. To prevent starvation by periodically moving all jobs to the topmost queue.  
   C. To reduce the priority of interactive jobs.  
   D. To increase the priority of I/O-bound jobs.  

<details>
<summary>Answer</summary>
B. To prevent starvation by periodically moving all jobs to the topmost queue.
</details>

---

### Question 17:
*In MLFQ, what is the primary disadvantage of using a very long time slice for low-priority queues?*

   A. It increases the overhead of context switching.  
   B. It reduces the response time of interactive jobs.  
   C. It increases the turnaround time of long-running jobs.  
   D. It reduces the fairness of the scheduler.  

<details>
<summary>Answer</summary>
B. It reduces the response time of interactive jobs.
</details>

---

### Question 18:
*In MLFQ, what is the primary advantage of using a shorter time slice for high-priority queues?*

   A. It reduces the overhead of context switching.  
   B. It improves the response time of interactive jobs.  
   C. It increases the turnaround time of long-running jobs.  
   D. It improves the fairness of the scheduler.  

<details>
<summary>Answer</summary>
B. It improves the response time of interactive jobs.
</details>

---

### Question 19:
*In MLFQ, what is the primary disadvantage of using a very short time slice for low-priority queues?*

   A. It increases the overhead of context switching.  
   B. It reduces the response time of interactive jobs.  
   C. It increases the turnaround time of long-running jobs.  
   D. It reduces the fairness of the scheduler.  

<details>
<summary>Answer</summary>
A. It increases the overhead of context switching.
</details>

---

### Question 20:
*In MLFQ, what is the primary advantage of using a longer time slice for high-priority queues?*

   A. It reduces the overhead of context switching.  
   B. It improves the response time of interactive jobs.  
   C. It increases the turnaround time of long-running jobs.  
   D. It improves the fairness of the scheduler.  

<details>
<summary>Answer</summary>
A. It reduces the overhead of context switching.
</details>

---

### Question 21:
*In MLFQ, what is the primary disadvantage of using a very long time slice for high-priority queues?*

   A. It increases the overhead of context switching.  
   B. It reduces the response time of interactive jobs.  
   C. It increases the turnaround time of long-running jobs.  
   D. It reduces the fairness of the scheduler.  

<details>
<summary>Answer</summary>
B. It reduces the response time of interactive jobs.
</details>

---

### Question 22:
*In MLFQ, what is the primary advantage of using a shorter time slice for low-priority queues?*

   A. It reduces the overhead of context switching.  
   B. It improves the response time of interactive jobs.  
   C. It increases the turnaround time of long-running jobs.  
   D. It improves the fairness of the scheduler.  

<details>
<summary>Answer</summary>
D. It improves the fairness of the scheduler.
</details>

---

### Question 23:
*In MLFQ, what is the primary disadvantage of using a very short time slice for all queues?*

   A. It increases the overhead of context switching.  
   B. It reduces the response time of interactive jobs.  
   C. It increases the turnaround time of long-running jobs.  
   D. It reduces the fairness of the scheduler.  

<details>
<summary>Answer</summary>
A. It increases the overhead of context switching.
</details>

---

### Question 24:
*In MLFQ, what is the primary advantage of using a longer time slice for all queues?*

   A. It reduces the overhead of context switching.  
   B. It improves the response time of interactive jobs.  
   C. It increases the turnaround time of long-running jobs.  
   D. It improves the fairness of the scheduler.  

<details>
<summary>Answer</summary>
A. It reduces the overhead of context switching.
</details>

---

### Question 25:
*In MLFQ, what is the primary disadvantage of using a very long time slice for all queues?*

   A. It increases the overhead of context switching.  
   B. It reduces the response time of interactive jobs.  
   C. It increases the turnaround time of long-running jobs.  
   D. It reduces the fairness of the scheduler.  

<details>
<summary>Answer</summary>
B. It reduces the response time of interactive jobs.
</details>
