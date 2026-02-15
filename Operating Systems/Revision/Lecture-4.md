### Question 1:
*What is the primary reason the OS performs a context switch between processes?*

   A. To increase CPU utilization  
   B. To handle processes that have exited or must be terminated  
   C. To allow timesharing of the CPU among multiple processes  
   D. All of the above  

<details>
<summary>Answer</summary>
D. All of the above
</details>

---

### Question 2:
*In a non-preemptive (cooperative) scheduler, when does the OS switch processes?*

   A. When a process is preempted by a timer interrupt  
   B. Only when a process is blocked or terminated  
   C. When a process voluntarily yields the CPU  
   D. Both B and C  

<details>
<summary>Answer</summary>
D. Both B and C
</details>

---

### Question 3:
*What is the role of the `sched()` function in xv6?*

   A. It selects the next process to run  
   B. It performs the actual context switch between two processes  
   C. It yields the CPU from the current process and switches to the scheduler  
   D. It initializes the scheduler  

<details>
<summary>Answer</summary>
C. It yields the CPU from the current process and switches to the scheduler
</details>

---

### Question 4:
*Which function in xv6 is responsible for saving and restoring the CPU registers during a context switch?*

   A. `sched()`  
   B. `switch()`  
   C. `scheduler()`  
   D. `yield()`  

<details>
<summary>Answer</summary>
B. `switch()`
</details>

---

### Question 5:
*What is the main disadvantage of the FIFO scheduling policy?*

   A. It is too complex to implement  
   B. It can lead to the convoy effect, where long jobs delay shorter ones  
   C. It does not support preemption  
   D. It is not fair  

<details>
<summary>Answer</summary>
B. It can lead to the convoy effect, where long jobs delay shorter ones
</details>

---

### Question 6:
*What is the average turnaround time for three jobs A, B, and C, where A runs for 100 seconds, and B and C run for 10 seconds each, under the FIFO policy?*

   A. 50 seconds  
   B. 110 seconds  
   C. 103.33 seconds  
   D. 20 seconds  

<details>
<summary>Answer</summary>
B. 110 seconds
</details>

---

### Question 7:
*Which scheduling policy is preemptive and schedules the job with the smallest remaining time first?*

   A. FIFO  
   B. Shortest Job First (SJF)  
   C. Shortest Time-to-Completion First (STCF)  
   D. Round Robin  

<details>
<summary>Answer</summary>
C. Shortest Time-to-Completion First (STCF)
</details>

---

### Question 8:
*What is the formula for turnaround time?*

   A. \( T_{turnaround} = T_{completion} - T_{arrival} \)  
   B. \( T_{turnaround} = T_{arrival} - T_{completion} \)  
   C. \( T_{turnaround} = T_{firstrun} - T_{arrival} \)  
   D. \( T_{turnaround} = T_{completion} + T_{arrival} \)  

<details>
<summary>Answer</summary>
A. \( T_{turnaround} = T_{completion} - T_{arrival} \)
</details>

---

### Question 9:
*What is the response time in scheduling?*

   A. The time from when the job arrives to when it completes  
   B. The time from when the job arrives to the first time it is scheduled  
   C. The time it takes for the CPU to switch between processes  
   D. The time it takes for a job to perform I/O operations  

<details>
<summary>Answer</summary>
B. The time from when the job arrives to the first time it is scheduled
</details>

---

### Question 10:
*Which scheduling policy is known for having good response time but poor turnaround time?*

   A. FIFO  
   B. Shortest Job First (SJF)  
   C. Round Robin (RR)  
   D. Shortest Time-to-Completion First (STCF)  

<details>
<summary>Answer</summary>
C. Round Robin (RR)
</details>

---

### Question 11:
*What happens when a job initiates an I/O request in a scheduling system?*

   A. The job continues to run on the CPU  
   B. The job is blocked, and the scheduler schedules another job on the CPU  
   C. The job is terminated  
   D. The job is moved to a higher priority queue  

<details>
<summary>Answer</summary>
B. The job is blocked, and the scheduler schedules another job on the CPU
</details>

---

### Question 12:
*Why is it important for the scheduler to handle I/O operations efficiently?*

   A. To maximize CPU utilization  
   B. To minimize response time  
   C. To reduce the number of context switches  
   D. To increase the turnaround time  

<details>
<summary>Answer</summary>
A. To maximize CPU utilization
</details>

---

### Question 13:
*What is the main advantage of Round Robin (RR) scheduling?*

   A. It minimizes turnaround time  
   B. It is fair and provides good response time  
   C. It is easy to implement and has low overhead  
   D. It is the most efficient scheduling policy for long-running jobs  

<details>
<summary>Answer</summary>
B. It is fair and provides good response time
</details>

---

### Question 14:
*What is the effect of a shorter time slice in Round Robin scheduling?*

   A. It improves turnaround time but increases response time  
   B. It improves response time but increases the cost of context switching  
   C. It reduces the number of context switches but worsens response time  
   D. It has no effect on response time or turnaround time  

<details>
<summary>Answer</summary>
B. It improves response time but increases the cost of context switching
</details>

---

### Question 15:
*What is the average response time for three jobs A, B, and C, each running for 5 seconds, under Round Robin scheduling with a time slice of 1 second?*

   A. 5 seconds  
   B. 1 second  
   C. 10 seconds  
   D. 15 seconds  

<details>
<summary>Answer</summary>
B. 1 second
</details>

---

### Question 16:
*What is the purpose of the `scheduler.py` tool mentioned in the lecture?*

   A. To simulate different scheduling policies and analyze their performance  
   B. To manage real-time processes in an operating system  
   C. To allocate memory to different processes  
   D. To handle I/O operations in a simulated environment  

<details>
<summary>Answer</summary>
A. To simulate different scheduling policies and analyze their performance
</details>

---

### Question 17:
*Which command would you use to simulate Round Robin scheduling with 4 jobs, each with run times of 2, 5, 10, and 20 seconds, using a random seed of 100?*

   A. `./scheduler.py -p FIFO -j 4 -l 2,5,10,20 -s 100`  
   B. `./scheduler.py -p RR -j 4 -l 2,5,10,20 -s 100`  
   C. `./scheduler.py -p SJF -j 4 -l 2,5,10,20 -s 100`  
   D. `./scheduler.py -p STCF -j 4 -l 2,5,10,20 -s 100`  

<details>
<summary>Answer</summary>
B. `./scheduler.py -p RR -j 4 -l 2,5,10,20 -s 100`
</details>

---

### Question 18:
*In xv6, why does the scheduler have a dedicated thread per CPU?*

   A. To reduce the overhead of context switching  
   B. To avoid using the old process’s kernel stack, which could cause errors if another core wakes the process  
   C. To improve the fairness of the scheduling algorithm  
   D. To handle I/O operations more efficiently  

<details>
<summary>Answer</summary>
B. To avoid using the old process’s kernel stack, which could cause errors if another core wakes the process
</details>

---

### Question 19:
*Which of the following is NOT a key function in xv6's scheduling mechanism?*

   A. `sched()`  
   B. `switch()`  
   C. `scheduler()`  
   D. `malloc()`  

<details>
<summary>Answer</summary>
D. `malloc()`
</details>

---

### Question 20:
*What is the primary scheduling metric that measures the time from when a job arrives to when it completes?*

   A. Response time  
   B. Turnaround time  
   C. Waiting time  
   D. Throughput  

<details>
<summary>Answer</summary>
B. Turnaround time
</details>

---

### Question 21:
*Which scheduling policy is most suitable for real-time systems where tasks have strict deadlines?*

   A. FIFO  
   B. Round Robin  
   C. Priority Scheduling  
   D. Shortest Job First  

<details>
<summary>Answer</summary>
C. Priority Scheduling
</details>

---

### Question 22:
*What is the main drawback of using a very short time slice in Round Robin scheduling?*

   A. It increases turnaround time  
   B. It increases the overhead of context switching  
   C. It reduces CPU utilization  
   D. It makes the system less fair  

<details>
<summary>Answer</summary>
B. It increases the overhead of context switching
</details>

---

### Question 23:
*In the context of scheduling, what is the primary goal of maximizing CPU utilization?*

   A. To ensure that all processes complete as quickly as possible  
   B. To minimize the idle time of the CPU  
   C. To improve the response time of interactive processes  
   D. To reduce the number of context switches  

<details>
<summary>Answer</summary>
B. To minimize the idle time of the CPU
</details>

---

### Question 24:
*Which of the following scheduling policies is most likely to suffer from starvation?*

   A. FIFO  
   B. Round Robin  
   C. Shortest Job First  
   D. Priority Scheduling  

<details>
<summary>Answer</summary>
D. Priority Scheduling
</details>

---

### Question 25:
*What is the primary purpose of the `yield()` function in xv6?*

   A. To terminate a process  
   B. To voluntarily give up the CPU so that other processes can run  
   C. To switch to the scheduler thread  
   D. To handle I/O operations  

<details>
<summary>Answer</summary>
B. To voluntarily give up the CPU so that other processes can run
</details>
