### Question 1:
Which of the following statements about alpha-beta pruning is correct?

   A. Pruning can change the final minimax result  
   B. Entire subtrees can be pruned without affecting the final result  
   C. Pruning requires evaluating all nodes  
   D. Alpha-beta pruning only works for stochastic games  

<details>
<summary>Show Answer</summary>
B. Entire subtrees can be pruned without affecting the final result
</details>

---

### Question 2:
The effectiveness of alpha-beta pruning depends primarily on:

   A. Branching factor only  
   B. Depth of the tree only  
   C. The order in which moves are examined  
   D. Whether the game is stochastic  

<details>
<summary>Show Answer</summary>
C. The order in which moves are examined
</details>

---

### Question 3:
In the **worst-case** for alpha-beta pruning:

   A. Branches are ordered to maximize pruning  
   B. No pruning occurs, and alpha-beta is as slow as minimax  
   C. Only terminal nodes are evaluated  
   D. The algorithm computes expected utilities  

<details>
<summary>Show Answer</summary>
B. No pruning occurs, and alpha-beta is as slow as minimax
</details>

---

### Question 4:
In practice, alpha-beta pruning often reduces effective branching from **b** to approximately:

   A. b²  
   B. b/2  
   C. √b  
   D. log(b)  

<details>
<summary>Show Answer</summary>
C. √b
</details>

---

### Question 5:
Why do depth-limited searches use evaluation functions?

   A. To guarantee optimal play  
   B. To estimate utilities of non-terminal nodes  
   C. To avoid using minimax  
   D. To make the game stochastic  

<details>
<summary>Show Answer</summary>
B. To estimate utilities of non-terminal nodes
</details>

---

### Question 6:
Which property is **not necessary** for a good evaluation function?

   A. Correct ordering of terminal states  
   B. Strong correlation with actual winning chances  
   C. Computation must be extremely slow  
   D. Weighted combination of features for non-terminal states  

<details>
<summary>Show Answer</summary>
C. Computation must be extremely slow
</details>

---

### Question 7:
According to Shannon’s chess paper, turning nonterminal nodes into “terminal” leaves:

   A. Guarantees optimal play  
   B. Uses heuristic evaluation to approximate utility  
   C. Requires expanding the full search tree  
   D. Only works in stochastic games  

<details>
<summary>Show Answer</summary>
B. Uses heuristic evaluation to approximate utility
</details>

---

### Question 8:
In a depth-limited search, the **deeper** an evaluation function is applied:

   A. The less its quality matters  
   B. The more it guarantees optimal play  
   C. It must evaluate every leaf exactly  
   D. Alpha-beta pruning is ineffective  

<details>
<summary>Show Answer</summary>
A. The less its quality matters
</details>

---

### Question 9:
What is a primary difference between minimax and expectimax?

   A. Minimax handles stochastic outcomes explicitly  
   B. Expectimax computes **average-case outcomes** for chance nodes  
   C. Minimax is for chance nodes; expectimax is for adversarial nodes  
   D. Expectimax does not use utilities  

<details>
<summary>Show Answer</summary>
B. Expectimax computes **average-case outcomes** for chance nodes
</details>

---

### Question 10:
A **chance node** in expectimax represents:

   A. An adversarial opponent  
   B. Random events with known probabilities  
   C. A guaranteed utility value  
   D. The max-value node  

<details>
<summary>Show Answer</summary>
B. Random events with known probabilities
</details>

---

### Question 11:
In expectimax, the value of a chance node is calculated by:

   A. Taking the minimum of its children  
   B. Taking the maximum of its children  
   C. Computing the weighted average of its children’s values  
   D. Ignoring probabilities  

<details>
<summary>Show Answer</summary>
C. Computing the weighted average of its children’s values
</details>

---

### Question 12:
Which of the following would make alpha-beta pruning **less effective**?

   A. Ordering moves from best to worst  
   B. All moves being of equal value  
   C. Evaluating left-most move first  
   D. Using evaluation functions  

<details>
<summary>Show Answer</summary>
B. All moves being of equal value
</details>

---

### Question 13:
Which scenario would **guarantee optimal play is lost**?

   A. Full minimax search to terminal states  
   B. Depth-limited search with heuristic evaluation  
   C. Alpha-beta pruning with perfect ordering  
   D. Deterministic games with no cutoff  

<details>
<summary>Show Answer</summary>
B. Depth-limited search with heuristic evaluation
</details>

---

### Question 14:
In practice, alpha-beta search can often reach **twice the depth** of minimax because:

   A. It uses random pruning  
   B. Effective branching factor is reduced  
   C. Evaluation functions reduce tree size  
   D. Depth is irrelevant in alpha-beta  

<details>
<summary>Show Answer</summary>
B. Effective branching factor is reduced
</details>

---

### Question 15:
Which is an example of an **explicitly stochastic game**?

   A. Chess  
   B. Checkers  
   C. Backgammon with dice rolls  
   D. Tic-tac-toe  

<details>
<summary>Show Answer</summary>
C. Backgammon with dice rolls
</details>

---

### Question 16:
Why is expectimax more appropriate than minimax for uncertain outcomes?

   A. Minimax only computes the maximum value  
   B. Minimax uses worst-case assumptions unsuitable for random events  
   C. Expectimax ignores utilities  
   D. Expectimax evaluates only terminal nodes  

<details>
<summary>Show Answer</summary>
B. Minimax uses worst-case assumptions unsuitable for random events
</details>

---

### Question 17:
In the expectimax pseudocode, what does `v += p * value(successor)` represent?

   A. Maximizing utility  
   B. Weighted average for chance nodes  
   C. Backtracking  
   D. Assigning zero probability  

<details>
<summary>Show Answer</summary>
B. Weighted average for chance nodes
</details>

---

### Question 18:
Why is **good move ordering** critical in alpha-beta pruning?

   A. It allows pruning of more subtrees earlier  
   B. It ensures stochastic outcomes are accounted for  
   C. It guarantees optimal play in depth-limited search  
   D. It eliminates the need for evaluation functions  

<details>
<summary>Show Answer</summary>
A. It allows pruning of more subtrees earlier
</details>

---

### Question 19:
The main tradeoff when using depth-limited search with evaluation functions is:

   A. Computation speed vs. guaranteed optimal play  
   B. Branching factor vs. randomness  
   C. Alpha vs. beta values  
   D. Min nodes vs. chance nodes  

<details>
<summary>Show Answer</summary>
A. Computation speed vs. guaranteed optimal play
</details>

---

### Question 20:
Which of the following best describes the **practical performance** of alpha-beta search in real games?

   A. Always worst-case O(b^m)  
   B. Typically closer to best-case, reducing effective branching factor  
   C. Completely ignores evaluation functions  
   D. Only works for stochastic games  

<details>
<summary>Show Answer</summary>
B. Typically closer to best-case, reducing effective branching factor
</details>
