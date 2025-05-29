### Question 1:
*Which of the following is **true** about the `status register` in a canonical I/O device interface?*

   A. It only stores the final result of an I/O operation  
   B. It is used by both the host and device for command issuing  
   C. It reflects the current operational status of the device  
   D. It contains the address of the next command register  

<details>
<summary>Answer</summary>
C. It reflects the current operational status of the device
</details>

---

### Question 2:
*In which scenario is polling **more efficient** than interrupts?*

   A. When devices operate at slow speeds  
   B. When DMA is enabled  
   C. When device operations are extremely fast  
   D. When multitasking is required  

<details>
<summary>Answer</summary>
C. When device operations are extremely fast
</details>

---

### Question 3:
*What is the **primary disadvantage** of polling as an I/O mechanism?*

   A. Complex hardware implementation  
   B. Wastes CPU cycles during device wait times  
   C. Increases memory fragmentation  
   D. Requires kernel-level threading  

<details>
<summary>Answer</summary>
B. Wastes CPU cycles during device wait times
</details>

---

### Question 4:
*Why are `interrupts` preferred over polling for slow devices?*

   A. They are easier to implement  
   B. They support faster devices  
   C. They enable the CPU to be used for other tasks during I/O  
   D. They require less memory  

<details>
<summary>Answer</summary>
C. They enable the CPU to be used for other tasks during I/O
</details>

---

### Question 5:
*What is the **function** of the `DMA controller` in I/O operations?*

   A. Manages CPU scheduling during I/O  
   B. Transfers data directly between memory and I/O device  
   C. Handles interrupts on behalf of CPU  
   D. Converts virtual memory addresses  

<details>
<summary>Answer</summary>
B. Transfers data directly between memory and I/O device
</details>

---

### Question 6:
*What is the key **advantage** of memory-mapped I/O over I/O instructions?*

   A. It reduces power consumption  
   B. Device registers are accessed like regular memory  
   C. It avoids use of the kernel address space  
   D. It does not require special hardware  

<details>
<summary>Answer</summary>
B. Device registers are accessed like regular memory
</details>

---

### Question 7:
*Which step is **NOT** part of the basic IDE device read protocol?*

   A. Wait for the drive to be ready  
   B. Write parameters to the command register  
   C. Allocate new disk sectors  
   D. Handle interrupts after read completion  

<details>
<summary>Answer</summary>
C. Allocate new disk sectors
</details>

---

### Question 8:
*What is the role of the `ide_wait_ready()` function in xv6?*

   A. To handle disk errors  
   B. To transfer file blocks  
   C. To ensure the drive is not busy and is ready  
   D. To free allocated buffers  

<details>
<summary>Answer</summary>
C. To ensure the drive is not busy and is ready
</details>

---

### Question 9:
*What is the **purpose** of an inode in a file system?*

   A. Store the name of the file  
   B. Store the data of the file  
   C. Track file metadata and data block pointers  
   D. Allocate disk sectors  

<details>
<summary>Answer</summary>
C. Track file metadata and data block pointers
</details>

---

### Question 10:
*What does the inode **not** directly store for a file?*

   A. Owner and timestamps  
   B. File size  
   C. File contents  
   D. Direct and indirect block addresses  

<details>
<summary>Answer</summary>
C. File contents
</details>

---

### Question 11:
*What does a bitmap in a file system signify?*

   A. The file permissions  
   B. Free or used status of blocks or inodes  
   C. Number of bytes in each file  
   D. Block size used by the disk  

<details>
<summary>Answer</summary>
B. Free or used status of blocks or inodes
</details>

---

### Question 12:
*Which of the following best describes a `super block`?*

   A. A buffer to cache I/O operations  
   B. An inode with administrative privileges  
   C. A block that stores filesystem-wide metadata  
   D. A block used to store encrypted files  

<details>
<summary>Answer</summary>
C. A block that stores filesystem-wide metadata
</details>

---

### Question 13:
*How is a specific inode's address located on disk?*

   A. Searching the directory structure  
   B. Using the super block’s inode index  
   C. By computing its offset in the inode table  
   D. By traversing the inode bitmap  

<details>
<summary>Answer</summary>
C. By computing its offset in the inode table
</details>

---

### Question 14:
*Which is **true** about a double indirect block in an inode?*

   A. It points directly to data blocks  
   B. It points to a block containing direct data  
   C. It points to blocks that point to blocks containing data  
   D. It stores block metadata  

<details>
<summary>Answer</summary>
C. It points to blocks that point to blocks containing data
</details>

---

### Question 15:
*What makes a directory inode **special** in VSFS?*

   A. It does not store file sizes  
   B. Its data blocks contain file metadata  
   C. It is labeled with a “directory” type field  
   D. It cannot be modified  

<details>
<summary>Answer</summary>
C. It is labeled with a “directory” type field
</details>

---

### Question 16:
*What would happen if a file system crash occurs **after writing the data block but before updating the bitmap**?*

   A. Lost update  
   B. Garbage data  
   C. Space leak  
   D. Directory corruption  

<details>
<summary>Answer</summary>
C. Space leak
</details>

---

### Question 17:
*What consistency issue occurs if the inode is updated but the data block is never written?*

   A. File size overflows  
   B. Space leak  
   C. Lost update  
   D. Garbage inode  

<details>
<summary>Answer</summary>
C. Lost update
</details>

---

### Question 18:
*What tool can be used to fix inconsistencies after a crash in traditional filesystems?*

   A. mv  
   B. fsck  
   C. vi  
   D. inode_reset  

<details>
<summary>Answer</summary>
B. fsck
</details>

---

### Question 19:
*What would fsck do if it finds two inodes sharing a block?*

   A. Reset one of the inodes  
   B. Mark the block as corrupted  
   C. Duplicate the block contents  
   D. Unmount the file system  

<details>
<summary>Answer</summary>
A. Reset one of the inodes
</details>

---

### Question 20:
*What is the primary principle behind journaling in file systems?*

   A. Periodically compress data blocks  
   B. Write changes to a log before applying them  
   C. Encrypt all metadata  
   D. Clone the filesystem before update  

<details>
<summary>Answer</summary>
B. Write changes to a log before applying them
</details>

---

### Question 21:
*In journaling, why must the TxE (transaction end block) be written **last**?*

   A. It contains a hash of all other blocks  
   B. To indicate the transaction is complete and safe to replay  
   C. It updates inode permissions  
   D. It commits the transaction to memory  

<details>
<summary>Answer</summary>
B. To indicate the transaction is complete and safe to replay
</details>

---

### Question 22:
*What happens if a crash occurs **after writing journal entries but before checkpointing**?*

   A. Nothing is recovered  
   B. The transaction is replayed from the journal  
   C. File system must be reformatted  
   D. Directory is deleted  

<details>
<summary>Answer</summary>
B. The transaction is replayed from the journal
</details>

---

### Question 23:
*Which of the following operations is likely to cause multiple I/O operations?*

   A. open()  
   B. chmod()  
   C. fork()  
   D. malloc()  

<details>
<summary>Answer</summary>
A. open()
</details>

---

### Question 24:
*Which cache merges virtual memory and file block buffering?*

   A. DMA cache  
   B. Buffer cache  
   C. Swap cache  
   D. Page cache  

<details>
<summary>Answer</summary>
D. Page cache
</details>

---

### Question 25:
*What replacement policy is typically used in buffer cache?*

   A. FIFO  
   B. LRU  
   C. MRU  
   D. Random  

<details>
<summary>Answer</summary>
B. LRU
</details>

---

### Question 26:
*What if the inode bitmap marks an inode as free, but the inode is still in use?*

   A. Space leak  
   B. Dangling pointer  
   C. Inconsistent state  
   D. Illegal memory access  

<details>
<summary>Answer</summary>
C. Inconsistent state
</details>

---

### Question 27:
*In VSFS, what are the directory entries `. and ..` used for?*

   A. Storing inode size  
   B. Indicating file types  
   C. Representing current and parent directories  
   D. Linking hard links  

<details>
<summary>Answer</summary>
C. Representing current and parent directories
</details>

---

### Question 28:
*Which statement about journaling is FALSE?*

   A. It may slow down performance  
   B. It can prevent most corruption due to crashes  
   C. It eliminates the need for fsck  
   D. It uses additional disk space for logs  

<details>
<summary>Answer</summary>
C. It eliminates the need for fsck
</details>

---

### Question 29:
*What is the **first** structure read by the OS when mounting a file system?*

   A. Data block  
   B. Super block  
   C. Root directory  
   D. Journal  

<details>
<summary>Answer</summary>
B. Super block
</details>

---

### Question 30:
*What is the function of the checkpoint operation in journaling?*

   A. Clear all inodes  
   B. Replay failed transactions  
   C. Apply changes from journal to the main file system  
   D. Encrypt the file system  

<details>
<summary>Answer</summary>
C. Apply changes from journal to the main file system
</details>

---
