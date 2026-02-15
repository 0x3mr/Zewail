### Question 1:
*Which property of a game allows minimax to reduce the problem to maximizing a single scalar value?*

   A. The game is fully observable  
   B. The game is discrete  
   C. The game is zero-sum  
   D. The game is turn-taking  

<details>
<summary>Show Answer</summary>
C. The game is zero-sum
</details>

---

### Question 2:
*In minimax, why is the solution considered a **strategy** rather than a single action?*

   A. Because actions are stochastic  
   B. Because the game tree is infinite  
   C. Because the opponent may respond differently at each turn  
   D. Because terminal states are unknown  

<details>
<summary>Show Answer</summary>
C. Because the opponent may respond differently at each turn
</details>

---

### Question 3:
*Which situation breaks a core assumption required for standard minimax to be optimal?*

   A. The game has a large branching factor  
   B. The opponent does not play optimally  
   C. The game has terminal states  
   D. The game is deterministic  

<details>
<summary>Show Answer</summary>
B. The opponent does not play optimally
</details>

---

### Question 4:
*What does the UTILITY(s, p) function represent in a formal game definition?*

   A. The heuristic estimate of a non-terminal state  
   B. The cost to reach state s  
   C. The final payoff for player p in terminal state s  
   D. The number of legal moves in state s  

<details>
<summary>Show Answer</summary>
C. The final payoff for player p in terminal state s
</details>

---

### Question 5:
*Why is minimax said to optimize for the “worst-case” outcome for MAX?*

   A. Because MAX always assumes random opponent moves  
   B. Because MAX assumes MIN will minimize MAX’s utility  
   C. Because MAX chooses the move with smallest variance  
   D. Because utilities are always negative  

<details>
<summary>Show Answer</summary>
B. Because MAX assumes MIN will minimize MAX’s utility
</details>

---

### Question 6:
*What is the time complexity of minimax for a game tree with branching factor b and depth d?*

   A. O(b + d)  
   B. O(bd)  
   C. O(b^d)  
   D. O(d^b)  

<details>
<summary>Show Answer</summary>
C. O(b^d)
</details>

---

### Question 7:
*Which of the following best explains why minimax is infeasible for full-depth chess search?*

   A. Chess has continuous action spaces  
   B. Chess utilities are non-zero-sum  
   C. The branching factor and depth are both large  
   D. Chess is partially observable  

<details>
<summary>Show Answer</summary>
C. The branching factor and depth are both large
</details>

---

### Question 8:
*What distinguishes a game evaluation function from a search heuristic function?*

   A. Evaluation functions estimate distance to goal  
   B. Evaluation functions assess desirability of non-terminal positions  
   C. Evaluation functions must be admissible  
   D. Evaluation functions apply only to terminal states  

<details>
<summary>Show Answer</summary>
B. Evaluation functions assess desirability of non-terminal positions
</details>

---

### Question 9:
*Alpha-beta pruning improves minimax efficiency by:*

   A. Changing the final minimax value  
   B. Reordering the game tree  
   C. Eliminating branches that cannot affect the final decision  
   D. Using heuristics instead of utilities  

<details>
<summary>Show Answer</summary>
C. Eliminating branches that cannot affect the final decision
</details>

---

### Question 10:
*Which statement about alpha-beta pruning is TRUE?*

   A. It only works for shallow trees  
   B. It produces a different optimal move than minimax  
   C. It requires a breadth-first search  
   D. It preserves the minimax result  

<details>
<summary>Show Answer</summary>
D. It preserves the minimax result
</details>

---

### Question 11:
*In alpha-beta pruning, what does α represent?*

   A. MIN’s best guaranteed value so far  
   B. MAX’s best guaranteed value so far  
   C. The utility of the current node  
   D. The branching factor  

<details>
<summary>Show Answer</summary>
B. MAX’s best guaranteed value so far
</details>

---

### Question 12:
*When does a MIN node prune its remaining successors?*

   A. When v ≥ β  
   B. When v ≤ α  
   C. When α = β  
   D. When v = 0  

<details>
<summary>Show Answer</summary>
B. When v ≤ α
</details>

---

### Question 13:
*Why does alpha-beta pruning work best when moves are ordered optimally?*

   A. It increases branching factor  
   B. It delays reaching terminal states  
   C. It allows earlier cutoffs  
   D. It converts DFS into BFS  

<details>
<summary>Show Answer</summary>
C. It allows earlier cutoffs
</details>

---

### Question 14:
*Which of the following scenarios prevents alpha-beta pruning from pruning any nodes?*

   A. Best moves explored first  
   B. Worst moves explored first  
   C. Shallow depth  
   D. Binary game tree  

<details>
<summary>Show Answer</summary>
B. Worst moves explored first
</details>

---

### Question 15:
*What type of search strategy does alpha-beta pruning fundamentally rely on?*

   A. Breadth-first search  
   B. Iterative deepening  
   C. Depth-first search  
   D. A* search  

<details>
<summary>Show Answer</summary>
C. Depth-first search
</details>

---

### Question 16:
*Which assumption is violated in games with hidden information like poker?*

   A. Turn-taking  
   B. Zero-sum utilities  
   C. Fully observable environment  
   D. Discrete actions  

<details>
<summary>Show Answer</summary>
C. Fully observable environment
</details>

---

### Question 17:
*Why are game matrices unsuitable for modeling games like chess?*

   A. Chess is not zero-sum  
   B. Chess has too many states  
   C. Chess is stochastic  
   D. Chess is cooperative  

<details>
<summary>Show Answer</summary>
B. Chess has too many states
</details>

---

### Question 18:
*What happens if the evaluation function is poor but the opponent plays optimally?*

   A. Minimax still guarantees optimal play  
   B. Alpha-beta becomes incorrect  
   C. The chosen strategy may be suboptimal  
   D. The game becomes non-zero-sum  

<details>
<summary>Show Answer</summary>
C. The chosen strategy may be suboptimal
</details>

---

### Question 19:
*Which condition is required for minimax values to be exact rather than approximate?*

   A. Use of alpha-beta pruning  
   B. Unlimited time and full tree expansion  
   C. A heuristic evaluation function  
   D. Randomized opponent  

<details>
<summary>Show Answer</summary>
B. Unlimited time and full tree expansion
</details>

---

### Question 20:
*Why is minimax described as “optimal against a perfect player”?*

   A. It assumes both players cooperate  
   B. It maximizes expected utility  
   C. It guarantees the best outcome assuming optimal opposition  
   D. It always leads to a win  

<details>
<summary>Show Answer</summary>
C. It guarantees the best outcome assuming optimal opposition
</details>

---
