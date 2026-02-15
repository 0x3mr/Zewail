### Question 1:
*What is the primary purpose of address translation in memory management?*

   A. To encrypt memory addresses for security  
   B. To transform virtual addresses into physical addresses  
   C. To compress memory contents  
   D. To reorganize the memory hierarchy  

<details>
<summary>Answer</summary>
B. To transform virtual addresses into physical addresses
</details>

---

### Question 2:
*In the Base and Bounds approach to memory management, what happens if a process attempts to access memory outside its bounds?*

   A. The access is automatically redirected to valid memory  
   B. The memory is allocated dynamically  
   C. An exception (segmentation fault) is raised  
   D. The process is given more memory automatically  

<details>
<summary>Answer</summary>
C. An exception (segmentation fault) is raised
</details>

---

### Question 3:
*What is the formula for address translation in the Base and Bounds approach?*

   A. physical address = virtual address - base  
   B. physical address = virtual address + bounds  
   C. physical address = virtual address + base  
   D. physical address = base - virtual address  

<details>
<summary>Answer</summary>
C. physical address = virtual address + base
</details>

---

### Question 4:
*Which of the following is NOT a critical juncture where the OS must take action in the Base and Bounds approach?*

   A. When a process starts running  
   B. When a process is terminated  
   C. When context switch occurs  
   D. When a process accesses valid memory  

<details>
<summary>Answer</summary>
D. When a process accesses valid memory
</details>

---

### Question 5:
*What is external fragmentation in memory management?*

   A. When allocated memory is larger than needed  
   B. When free memory is available but in scattered, non-contiguous blocks  
   C. When memory is corrupted due to program errors  
   D. When a process cannot access its allocated memory  

<details>
<summary>Answer</summary>
B. When free memory is available but in scattered, non-contiguous blocks
</details>

---

### Question 6:
*What is internal fragmentation in memory management?*

   A. When allocated memory is larger than needed  
   B. When free memory is available but in scattered, non-contiguous blocks  
   C. When the operating system reserves too much memory  
   D. When processes cannot share memory efficiently  

<details>
<summary>Answer</summary>
A. When allocated memory is larger than needed
</details>

---

### Question 7:
*What memory management technique divides memory into multiple segments such as code, stack, and heap?*

   A. Base and Bounds  
   B. Paging  
   C. Segmentation  
   D. Virtual Memory  

<details>
<summary>Answer</summary>
C. Segmentation
</details>

---

### Question 8:
*What is the main drawback of segmentation as a memory management technique?*

   A. Internal fragmentation  
   B. External fragmentation  
   C. High computational overhead  
   D. Limited address space  

<details>
<summary>Answer</summary>
B. External fragmentation
</details>

---

### Question 9:
*In paging, what is the relationship between a page and a page frame?*

   A. A page is smaller than a page frame  
   B. A page is larger than a page frame  
   C. A page and a page frame are the same size  
   D. A page contains multiple page frames  

<details>
<summary>Answer</summary>
C. A page and a page frame are the same size
</details>

---

### Question 10:
*What is the main advantage of paging over segmentation?*

   A. Pages can be of variable sizes  
   B. No external fragmentation  
   C. Faster memory access  
   D. Reduced memory usage  

<details>
<summary>Answer</summary>
B. No external fragmentation
</details>

---

### Question 11:
*In a virtual address for a paging system, what are the two components?*

   A. Base and Bound  
   B. VPN and PFN  
   C. VPN and Offset  
   D. PFN and Offset  

<details>
<summary>Answer</summary>
C. VPN and Offset
</details>

---

### Question 12:
*When translating a virtual address to a physical address in paging, which part remains unchanged?*

   A. Virtual Page Number (VPN)  
   B. Physical Frame Number (PFN)  
   C. Offset  
   D. Both VPN and PFN change  

<details>
<summary>Answer</summary>
C. Offset
</details>

---

### Question 13:
*What is the primary purpose of a page table?*

   A. To store process information  
   B. To map virtual addresses to physical addresses  
   C. To allocate new memory when needed  
   D. To manage CPU scheduling  

<details>
<summary>Answer</summary>
B. To map virtual addresses to physical addresses
</details>

---

### Question 14:
*Where are page tables typically stored?*

   A. CPU registers  
   B. Cache memory  
   C. Main memory (RAM)  
   D. Virtual memory  

<details>
<summary>Answer</summary>
C. Main memory
</details>

---

### Question 15:
*What register holds the starting location of the page table?*

   A. cr0  
   B. cr2  
   C. cr3  
   D. eax  

<details>
<summary>Answer</summary>
C. cr3
</details>

---

### Question 16:
*What does the Valid bit in a Page Table Entry (PTE) indicate?*

   A. Whether the page is in physical memory  
   B. Whether the page can be written to  
   C. Whether the particular translation is valid  
   D. Whether the page has been modified  

<details>
<summary>Answer</summary>
C. Whether the particular translation is valid
</details>

---

### Question 17:
*What does the Dirty bit in a Page Table Entry (PTE) indicate?*

   A. Whether the page is corrupted  
   B. Whether the page has been modified since it was brought into memory  
   C. Whether the page needs to be cleaned  
   D. Whether the page contains executable code  

<details>
<summary>Answer</summary>
B. Whether the page has been modified since it was brought into memory
</details>

---

### Question 18:
*What happens when a process attempts to access a page that has its Present bit set to 0?*

   A. The process is terminated  
   B. A segmentation fault occurs  
   C. A page fault occurs  
   D. The page is automatically allocated  

<details>
<summary>Answer</summary>
C. A page fault occurs
</details>

---

### Question 19:
*In a system with a 32-bit address space and 4KB pages, how many bits are used for the page offset?*

   A. 8 bits  
   B. 10 bits  
   C. 12 bits  
   D. 16 bits  

<details>
<summary>Answer</summary>
C. 12 bits
</details>

---

### Question 20:
*In a system with a 32-bit address space and 4KB pages, how many bits are used for the Virtual Page Number (VPN)?*

   A. 12 bits  
   B. 16 bits  
   C. 20 bits  
   D. 24 bits  

<details>
<summary>Answer</summary>
C. 20 bits
</details>

---

### Question 21:
*What is memory compaction?*

   A. A technique to compress memory contents  
   B. A technique to reduce the size of page tables  
   C. Rearranging memory to reduce fragmentation  
   D. A technique to encrypt memory contents  

<details>
<summary>Answer</summary>
C. Rearranging memory to reduce fragmentation
</details>

---

### Question 22:
*What is the main overhead associated with paging?*

   A. Additional CPU cycles for compression  
   B. Extra memory reference for page table lookup  
   C. Increased power consumption  
   D. Network latency  

<details>
<summary>Answer</summary>
B. Extra memory reference for page table lookup
</details>

---

### Question 23:
*Which of the following is NOT a common flag in a Page Table Entry (PTE)?*

   A. Valid bit  
   B. Protection bit  
   C. Compression bit  
   D. Dirty bit  

<details>
<summary>Answer</summary>
C. Compression bit
</details>

---

### Question 24:
*What protection information can be stored in a Page Table Entry (PTE)?*

   A. Only Read permissions  
   B. Read and Write permissions  
   C. Read, Write, and Execute permissions  
   D. No protection information is stored  

<details>
<summary>Answer</summary>
C. Read, Write, and Execute permissions
</details>

---

### Question 25:
*What does the R/W bit in an x86 Page Table Entry indicate?*

   A. Whether the page is in RAM or on disk  
   B. Whether the page can be read from or written to  
   C. Whether the page is reserved or writable  
   D. Whether the page is for real-time or wait operations  

<details>
<summary>Answer</summary>
B. Whether the page can be read from or written to
</details>

---

### Question 26:
*What happens during a context switch in a system using Base and Bounds?*

   A. The entire process memory is copied  
   B. The Base and Bounds registers are saved and restored  
   C. All pages are invalidated  
   D. Memory is reallocated  

<details>
<summary>Answer</summary>
B. The Base and Bounds registers are saved and restored
</details>

---

### Question 27:
*In a paging system, how many memory accesses are typically required for a single memory operation?*

   A. 1  
   B. 2  
   C. 3  
   D. 4  

<details>
<summary>Answer</summary>
B. 2 (one for the page table lookup and one for the actual memory access)
</details>

---

### Question 28:
*What is the free list used for in memory management?*

   A. To track processes waiting for CPU time  
   B. To keep track of unused physical memory locations  
   C. To list all free variables in a program  
   D. To monitor network connections  

<details>
<summary>Answer</summary>
B. To keep track of unused physical memory locations
</details>

---

### Question 29:
*Which CPU architecture historically used segmentation but later transitioned to support paging?*

   A. ARM  
   B. MIPS  
   C. x86  
   D. PowerPC  

<details>
<summary>Answer</summary>
C. x86
</details>

---

### Question 30:
*What exception is typically raised when a program tries to access an invalid memory address?*

   A. Divide by zero  
   B. Segmentation fault  
   C. Stack overflow  
   D. Arithmetic overflow  

<details>
<summary>Answer</summary>
B. Segmentation fault
</details>
