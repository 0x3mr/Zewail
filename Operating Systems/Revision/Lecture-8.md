### Question 1:
*In the TLB basic algorithm, what happens if `CanAccess(TlbEntry.ProtectBit)` returns FALSE during a TLB hit?*

   A. The hardware performs a page table walk to verify permissions  
   B. A PROTECTION_ERROR exception is raised immediately  
   C. The TLB entry is invalidated and the instruction retries  
   D. The access proceeds with reduced privileges  

<details>
<summary>Answer</summary>
B. A PROTECTION_ERROR exception is raised immediately
</details>

---

### Question 2:
*In the array access example with VPN layout, why does the TLB achieve a 70% hit rate specifically?*

   A. Because the array elements are randomly distributed across pages  
   B. Because spatial locality causes multiple array elements to share the same page  
   C. Because the TLB has enough entries to store all translations  
   D. Because temporal locality causes repeated access to the same elements  

<details>
<summary>Answer</summary>
B. Because spatial locality causes multiple array elements to share the same page
</details>

---

### Question 3:
*What is the critical difference between the return-from-trap instruction for TLB miss handling vs. system call handling?*

   A. TLB miss returns to the next instruction, system call returns to the same instruction  
   B. TLB miss returns to the same instruction, system call returns to the next instruction  
   C. Both return to the same instruction but with different privilege levels  
   D. The difference is only in the exception code stored in registers  

<details>
<summary>Answer</summary>
B. TLB miss returns to the same instruction, system call returns to the next instruction
</details>

---

### Question 4:
*In software-managed TLB systems, what is the primary risk when executing TLB miss handler code?*

   A. The handler code might be swapped out to disk  
   B. Multiple processors might handle the same miss simultaneously  
   C. The handler itself might cause additional TLB misses, creating an infinite chain  
   D. The TLB might be corrupted by concurrent access  

<details>
<summary>Answer</summary>
C. The handler itself might cause additional TLB misses, creating an infinite chain
</details>

---

### Question 5:
*Why is Content-Addressable Memory (CAM) used for TLB implementation rather than traditional memory?*

   A. CAM provides better error correction capabilities  
   B. CAM allows parallel search of all entries simultaneously  
   C. CAM consumes less power than traditional memory  
   D. CAM provides better temporal locality characteristics  

<details>
<summary>Answer</summary>
B. CAM allows parallel search of all entries simultaneously
</details>

---

### Question 6:
*In the context of multiple processes sharing a TLB, what problem does the Address Space Identifier (ASID) solve?*

   A. It prevents page table corruption between processes  
   B. It eliminates the need to flush the TLB during context switches  
   C. It provides better cache coherency across multiple cores  
   D. It reduces the memory overhead of page table storage  

<details>
<summary>Answer</summary>
B. It eliminates the need to flush the TLB during context switches
</details>

---

### Question 7:
*In the TLB replacement policy example using LRU, what is the significance of the "Total 11 TLB miss" result?*

   A. It shows that LRU is inefficient for this access pattern  
   B. It demonstrates the impact of limited TLB entries on performance  
   C. It proves that spatial locality is more important than temporal locality  
   D. It indicates that the TLB size should be increased to 11 entries  

<details>
<summary>Answer</summary>
B. It demonstrates the impact of limited TLB entries on performance
</details>

---

### Question 8:
*For a 32-bit address space with 4KB pages, why does the linear page table require exactly 4MB of memory?*

   A. 2^32 addresses / 2^12 page size = 2^20 entries × 4 bytes = 4MB  
   B. 32 bits / 8 bits per byte × 4KB page size = 4MB  
   C. 4KB pages × 1024 possible pages = 4MB total  
   D. Virtual address space size divided by page table entry size  

<details>
<summary>Answer</summary>
A. 2^32 addresses / 2^12 page size = 2^20 entries × 4 bytes = 4MB
</details>

---

### Question 9:
*In the 16KB address space example with sparse allocation, what is the fundamental problem that multi-level page tables solve?*

   A. Reducing the number of memory accesses for translation  
   B. Eliminating internal fragmentation in pages  
   C. Avoiding allocation of page table space for invalid entries  
   D. Improving cache locality for page table entries  

<details>
<summary>Answer</summary>
C. Avoiding allocation of page table space for invalid entries
</details>

---

### Question 10:
*Why don't we simply increase page size to reduce page table overhead?*

   A. Larger pages would exceed the maximum TLB entry size  
   B. Larger pages increase internal fragmentation and waste memory  
   C. Hardware limitations prevent pages larger than 4KB  
   D. Larger pages reduce spatial locality effectiveness  

<details>
<summary>Answer</summary>
B. Larger pages increase internal fragmentation and waste memory
</details>

---

### Question 11:
*In the hybrid approach combining paging and segments, what does the bound register specifically indicate?*

   A. The maximum virtual address accessible in the segment  
   B. The physical address where the segment ends  
   C. The end of the page table for that segment  
   D. The number of valid pages in the segment  

<details>
<summary>Answer</summary>
C. The end of the page table for that segment
</details>

---

### Question 12:
*What is the critical flaw in the hybrid paging and segmentation approach?*

   A. It requires special hardware support for segment registers  
   B. Large but sparsely-used segments still waste page table space  
   C. Translation requires more memory accesses than pure paging  
   D. It cannot handle processes with more than three segments  

<details>
<summary>Answer</summary>
B. Large but sparsely-used segments still waste page table space
</details>

---

### Question 13:
*In multi-level page tables, why is the page directory entry (PDE) crucial for memory efficiency?*

   A. It stores protection bits for an entire page table page  
   B. It allows invalid page table pages to remain unallocated  
   C. It provides faster access to frequently used translations  
   D. It reduces the number of TLB entries required  

<details>
<summary>Answer</summary>
B. It allows invalid page table pages to remain unallocated
</details>

---

### Question 14:
*What is the "time-space trade-off" mentioned in multi-level page tables?*

   A. More memory usage for faster access times  
   B. More translation time for reduced memory usage  
   C. More TLB entries for reduced page faults  
   D. More complex hardware for simpler software  

<details>
<summary>Answer</summary>
B. More translation time for reduced memory usage
</details>

---

### Question 15:
*In the 16KB address space example with 64-byte pages, why does the two-level approach use exactly 4 bits for the page directory index?*

   A. Because there are 16 pages in each page table, requiring 4 bits  
   B. Because the VPN is 8 bits and needs to be split evenly  
   C. Because 4 bits provide optimal cache alignment  
   D. Because hardware constraints limit directory index size  

<details>
<summary>Answer</summary>
A. Because there are 16 pages in each page table, requiring 4 bits
</details>

---

### Question 16:
*In the single-level vs two-level paging comparison (16 pages vs 3 pages), what accounts for the dramatic reduction?*

   A. Compression algorithms applied to page table entries  
   B. Only allocating page table pages for valid address ranges  
   C. Sharing page table entries between similar processes  
   D. Using smaller page table entries in the two-level approach  

<details>
<summary>Answer</summary>
B. Only allocating page table pages for valid address ranges
</details>

---

### Question 17:
*For the 30-bit virtual address with 512-byte pages example, why are exactly 128 PTEs stored in a single page?*

   A. 512 bytes per page ÷ 4 bytes per PTE = 128 PTEs  
   B. 2^7 = 128 is the optimal number for cache alignment  
   C. Hardware limitations restrict PTE count per page  
   D. This provides the best balance for address translation speed  

<details>
<summary>Answer</summary>
A. 512 bytes per page ÷ 4 bytes per PTE = 128 PTEs
</details>

---

### Question 18:
*In three-level page tables, what necessitates the third level compared to two-level tables?*

   A. The page directory itself becomes too large to fit in a single page  
   B. Hardware requirements for modern processors  
   C. Better cache locality for page table accesses  
   D. Reduced memory fragmentation in the page table structure  

<details>
<summary>Answer</summary>
A. The page directory itself becomes too large to fit in a single page
</details>

---

### Question 19:
*What is the fundamental indexing problem that Inverted Page Tables (IPT) introduce?*

   A. Physical addresses cannot be directly calculated from virtual addresses  
   B. The input is VPN but the table is indexed by PFN, requiring search  
   C. Multiple processes cannot share the same IPT structure  
   D. IPT entries cannot store sufficient protection information  

<details>
<summary>Answer</summary>
B. The input is VPN but the table is indexed by PFN, requiring search
</details>

---

### Question 20:
*In IPT lookup, why is hashing necessary for performance?*

   A. To reduce memory consumption of the page table  
   B. To avoid linear search through all physical pages  
   C. To enable sharing of pages between processes  
   D. To provide better security isolation between processes  

<details>
<summary>Answer</summary>
B. To avoid linear search through all physical pages
</details>

---

### Question 21:
*What critical information must each IPT entry contain that differs from traditional page tables?*

   A. Physical frame number and access permissions  
   B. Process ID and virtual page number that maps to this physical page  
   C. Reference count and dirty bit information  
   D. Cache coherency state and lock information  

<details>
<summary>Answer</summary>
B. Process ID and virtual page number that maps to this physical page
</details>

---

### Question 22:
*In xv6's three-level page table implementation, why are exactly 9 bits used for each level index?*

   A. 2^9 = 512 PTEs fit exactly in a 4096-byte page (512 × 8 bytes)  
   B. 9 bits provide optimal cache line utilization  
   C. RISC-V hardware mandates 9-bit addressing for page tables  
   D. This allows for maximum 27-bit virtual address space  

<details>
<summary>Answer</summary>
A. 2^9 = 512 PTEs fit exactly in a 4096-byte page (512 × 8 bytes)
</details>

---

### Question 23:
*What happens if any of the three PTEs required for translation in xv6 is not present?*

   A. The hardware automatically allocates the missing page  
   B. A page-fault exception is raised for kernel handling  
   C. The translation proceeds with default permissions  
   D. The process is terminated due to invalid memory access  

<details>
<summary>Answer</summary>
B. A page-fault exception is raised for kernel handling
</details>

---

### Question 24:
*In xv6, what is the significance of the PTE_U flag in page table entries?*

   A. It indicates whether the page is currently in physical memory  
   B. It controls whether user-mode instructions can access the page  
   C. It marks pages that are shared between multiple processes  
   D. It identifies pages that have been recently accessed  

<details>
<summary>Answer</summary>
B. It controls whether user-mode instructions can access the page
</details>

---

### Question 25:
*Why does each CPU have its own satp register in xv6?*

   A. To improve performance by reducing register access conflicts  
   B. To enable different CPUs to run different processes with private address spaces  
   C. To provide redundancy in case of hardware failure  
   D. To support different page table formats on different cores  

<details>
<summary>Answer</summary>
B. To enable different CPUs to run different processes with private address spaces
</details>

---

### Question 26:
*In the TLB algorithm, what is the specific purpose of the `RetryInstruction()` operation after a TLB miss is handled?*

   A. To verify that the TLB entry was correctly inserted  
   B. To allow the original instruction to execute with the now-cached translation  
   C. To trigger a context switch to another process  
   D. To update memory management unit statistics  

<details>
<summary>Answer</summary>
B. To allow the original instruction to execute with the now-cached translation
</details>

---

### Question 27:
*When the lecture mentions "wired translations" as a solution to prevent infinite TLB miss chains, what does this mean?*

   A. Hardware-protected TLB entries that cannot be evicted  
   B. TLB entries that are physically connected to specific memory locations  
   C. Translations that are stored in non-volatile memory  
   D. TLB entries that are shared across all processes  

<details>
<summary>Answer</summary>
A. Hardware-protected TLB entries that cannot be evicted
</details>

---

### Question 28:
*In the context of locality, why would accessing the same array again after the loop completes likely show even better TLB performance?*

   A. The TLB replacement policy would be optimized by then  
   B. Temporal locality would cause the previous translations to still be cached  
   C. The array would be moved to faster memory locations  
   D. The page table entries would be pre-loaded into cache  

<details>
<summary>Answer</summary>
B. Temporal locality would cause the previous translations to still be cached
</details>

---

### Question 29:
*What is the key architectural difference between CISC and RISC approaches to TLB miss handling?*

   A. CISC uses software handlers, RISC uses hardware handlers  
   B. CISC uses hardware page table walks, RISC uses software exception handlers  
   C. CISC has larger TLBs, RISC has smaller TLBs  
   D. CISC supports multi-level tables, RISC only supports linear tables  

<details>
<summary>Answer</summary>
B. CISC uses hardware page table walks, RISC uses software exception handlers
</details>

---

### Question 30:
*In the multi-level page table address translation, why is the PTBR (Page Table Base Register) critical for the translation process?*

   A. It stores the current process ID for address space identification  
   B. It contains the physical address of the root page table page  
   C. It caches the most recently used page table entries  
   D. It provides hardware acceleration for address translation  

<details>
<summary>Answer</summary>
B. It contains the physical address of the root page table page
</details>

---