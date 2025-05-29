### Question 1:
*A fast SSD device is polled continuously by a user program instead of using interrupts. Which of the following statements is MOST accurate about this approach?*

   A. It always leads to CPU underutilization  
   B. It is inefficient due to high interrupt latency  
   C. It could be optimal due to the device’s speed and minimal context switching  
   D. It avoids hardware overhead by eliminating DMA  

<details>
<summary>Answer</summary>
C. It could be optimal due to the device’s speed and minimal context switching
</details>

---

### Question 2:
*Suppose the `inode bitmap` indicates a free inode, but the inode table contains valid metadata for a file. What is a likely implication?*

   A. Disk fragmentation  
   B. Metadata redundancy  
   C. File system inconsistency — potential data loss  
   D. Nothing, it’s an expected behavior  

<details>
<summary>Answer</summary>
C. File system inconsistency — potential data loss
</details>

---

### Question 3:
*What might happen if the OS **fails to update the inode** after data block changes but **successfully updates the journal**?*

   A. The journal will be automatically rolled back  
   B. The changes will persist due to indirect blocks  
   C. The journal will appear committed, but actual data will be inconsistent  
   D. The OS will retry the write automatically  

<details>
<summary>Answer</summary>
C. The journal will appear committed, but actual data will be inconsistent
</details>

---

### Question 4:
*Which statement about double and triple indirect blocks is **incorrect**?*

   A. They are used only for very large files  
   B. They reduce disk seek time  
   C. They introduce additional levels of indirection  
   D. They allow access to more data blocks  

<details>
<summary>Answer</summary>
B. They reduce disk seek time
</details>

---

### Question 5:
*Which of the following conditions would make `DMA` **less effective** than programmed I/O?*

   A. The data block size is large  
   B. The data transfer rate is very low  
   C. The CPU is under high load  
   D. The system uses page cache  

<details>
<summary>Answer</summary>
B. The data transfer rate is very low
</details>

---

### Question 6:
*If `TxE` (Transaction End Block) is written before journal entries, what failure mode can occur?*

   A. Transaction replay will not occur  
   B. Transaction may be partially replayed, leading to corruption  
   C. It ensures journaling is atomic  
   D. Data is rolled back automatically  

<details>
<summary>Answer</summary>
B. Transaction may be partially replayed, leading to corruption
</details>

---

### Question 7:
*Which failure during journaling would result in a **space leak** but no file corruption?*

   A. Data block written but not in bitmap  
   B. Inode updated but data not written  
   C. TxE written but checkpoint skipped  
   D. Journal flushed but inode link count incorrect  

<details>
<summary>Answer</summary>
A. Data block written but not in bitmap
</details>

---

### Question 8:
*What is the risk of checkpointing **before** writing the transaction end block (TxE)?*

   A. CPU overheating due to premature flushing  
   B. Dirty blocks being copied back to cache  
   C. Inconsistent filesystem state due to incomplete transactions  
   D. Page cache will be invalidated  

<details>
<summary>Answer</summary>
C. Inconsistent filesystem state due to incomplete transactions
</details>

---

### Question 9:
*If a system replays a journal transaction **after a crash**, but the blocks are already updated, what must be true to avoid duplication or corruption?*

   A. The data blocks must be read-only  
   B. The journal must track checksums of all writes  
   C. The filesystem must be idempotent for each transaction  
   D. Only metadata transactions are replayed  

<details>
<summary>Answer</summary>
C. The filesystem must be idempotent for each transaction
</details>

---

### Question 10:
*What-if: A device completes its I/O task extremely fast, but the system uses interrupts instead of polling. What overhead might this introduce?*

   A. Delayed disk writes  
   B. Frequent page faults  
   C. Unnecessary context switches slowing down the system  
   D. Interrupts are always optimal — no overhead  

<details>
<summary>Answer</summary>
C. Unnecessary context switches slowing down the system
</details>

---

### Question 11:
*Which of the following **CANNOT** be used to detect file system inconsistencies post-crash?*

   A. fsck  
   B. Journaling replay  
   C. inode pointer traversal  
   D. Superblock hash comparison  

<details>
<summary>Answer</summary>
D. Superblock hash comparison
</details>

---

### Question 12:
*Which one of these events would **NOT** be caught by a file system checker (fsck)?*

   A. Inode link count mismatch  
   B. Block used by multiple inodes  
   C. Page cache inconsistency  
   D. Bad block pointer in directory  

<details>
<summary>Answer</summary>
C. Page cache inconsistency
</details>

---

### Question 13:
*Why is “Least Recently Used” (LRU) a **suitable policy** for the buffer cache?*

   A. It simplifies file system synchronization  
   B. It maximizes inode reuse  
   C. Recently used blocks are unlikely to be reused soon  
   D. It increases the hit rate by keeping frequently accessed blocks  

<details>
<summary>Answer</summary>
D. It increases the hit rate by keeping frequently accessed blocks
</details>

---

### Question 14:
*Why might separating inode and data bitmaps be beneficial?*

   A. They can be compressed independently  
   B. Speeds up directory search  
   C. Allows parallel tracking of metadata and file blocks  
   D. Prevents inode table fragmentation  

<details>
<summary>Answer</summary>
C. Allows parallel tracking of metadata and file blocks
</details>

---

### Question 15:
*Suppose after a crash, the root directory is intact, but one file shows size zero despite containing data before. What likely happened?*

   A. File was deleted but not removed from root  
   B. Data block write succeeded but inode update failed  
   C. The data block was marked free by mistake  
   D. The inode’s access time field was overwritten  

<details>
<summary>Answer</summary>
B. Data block write succeeded but inode update failed
</details>

---
