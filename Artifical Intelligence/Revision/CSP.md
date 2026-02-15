### Question 1:
Which of the following best describes a Constraint Satisfaction Problem (CSP)?

   A. A problem where each variable can take any value without restrictions  
   B. A problem defined by variables, domains, and constraints specifying allowable combinations of values  
   C. A problem where only binary variables are allowed  
   D. A problem solved only using integer programming  

<details>
<summary>Show Answer</summary>
B. A problem defined by variables, domains, and constraints specifying allowable combinations of values
</details>

---

### Question 2:
In a CSP, what distinguishes a “complete assignment” from a “consistent assignment”?

   A. Complete assigns all variables; consistent satisfies all constraints  
   B. Complete satisfies all constraints; consistent assigns all variables  
   C. Complete only assigns values to some variables; consistent assigns values to all  
   D. There is no distinction; they are the same  

<details>
<summary>Show Answer</summary>
A. Complete assigns all variables; consistent satisfies all constraints
</details>

---

### Question 3:
For the map-coloring CSP, why is WA ≠ NT considered a constraint?

   A. Because WA and NT must have the same color  
   B. Because adjacent regions cannot have the same color  
   C. Because WA can only take red or green  
   D. Because NT is a unary constraint  

<details>
<summary>Show Answer</summary>
B. Because adjacent regions cannot have the same color
</details>

---

### Question 4:
In the N-Queens problem, using Xij ∈ {0,1} representation, which of the following is **not** a constraint?

   A. Σi,j Xij = N  
   B. No two queens in the same row  
   C. Xij + Xi+k,j+k ≤ 1 for diagonals  
   D. Each queen must be placed in column 1  

<details>
<summary>Show Answer</summary>
D. Each queen must be placed in column 1
</details>

---

### Question 5:
Which of the following is an **alternative N-Queens formulation** using Qi variables?

   A. Qi ∈ {0,1}, row and column constraints  
   B. Qi ∈ {1,2,...,N}, each Qi represents row of column i  
   C. Qi ∈ {1,2,...,N}, each Qi represents column of row i  
   D. Qi ∈ {red, green, blue}, row coloring  

<details>
<summary>Show Answer</summary>
B. Qi ∈ {1,2,...,N}, each Qi represents row of column i
</details>

---

### Question 6:
In a cryptarithmetic puzzle, why is the Alldiff constraint important?

   A. Ensures digits are only even numbers  
   B. Ensures each letter represents a different digit  
   C. Ensures the sum of letters equals zero  
   D. Ensures letters follow alphabetical order  

<details>
<summary>Show Answer</summary>
B. Ensures each letter represents a different digit
</details>

---

### Question 7:
Which type of CSP constraint involves **only one variable**?

   A. Unary  
   B. Binary  
   C. Higher-order  
   D. Soft  

<details>
<summary>Show Answer</summary>
A. Unary
</details>

---

### Question 8:
In CSP backtracking search, why does the order of variable assignments **not affect correctness**?

   A. Variables must be assigned alphabetically  
   B. Assignments are commutative as long as constraints are satisfied  
   C. Only the last variable matters  
   D. Values are always chosen randomly  

<details>
<summary>Show Answer</summary>
B. Assignments are commutative as long as constraints are satisfied
</details>

---

### Question 9:
The **Minimum Remaining Values (MRV) heuristic** chooses:

   A. The variable with the most legal values  
   B. The variable with the fewest legal values  
   C. The value that constrains others the most  
   D. A random variable  

<details>
<summary>Show Answer</summary>
B. The variable with the fewest legal values
</details>

---

### Question 10:
The **Degree heuristic** is used to:

   A. Break ties between variables with the same MRV  
   B. Choose the variable with the least constraints  
   C. Choose a variable randomly  
   D. Determine the maximum value for a variable  

<details>
<summary>Show Answer</summary>
A. Break ties between variables with the same MRV
</details>

---

### Question 11:
The **Least Constraining Value (LCV)** heuristic selects:

   A. The value that eliminates the fewest options for neighboring variables  
   B. The value that is most likely to fail  
   C. The value with the smallest numerical magnitude  
   D. The first value in the domain  

<details>
<summary>Show Answer</summary>
A. The value that eliminates the fewest options for neighboring variables
</details>

---

### Question 12:
Forward checking in CSP:

   A. Assigns all variables in advance  
   B. Tracks remaining legal values and detects inevitable failure early  
   C. Randomly prunes the search tree  
   D. Only applies to unary constraints  

<details>
<summary>Show Answer</summary>
B. Tracks remaining legal values and detects inevitable failure early
</details>

---

### Question 13:
Arc consistency ensures:

   A. Every variable has exactly one legal value  
   B. Every value of X has a consistent value in Y for binary constraints  
   C. All unary constraints are satisfied  
   D. Values are assigned in alphabetical order  

<details>
<summary>Show Answer</summary>
B. Every value of X has a consistent value in Y for binary constraints
</details>

---

### Question 14:
Which is **more powerful** in detecting early failure in CSPs?

   A. Forward checking (node consistency)  
   B. Arc consistency  
   C. Random value ordering  
   D. Depth-first search  

<details>
<summary>Show Answer</summary>
B. Arc consistency
</details>

---

### Question 15:
A binary CSP constraint graph represents:

   A. Variables as nodes, binary constraints as arcs  
   B. Values as nodes, unary constraints as arcs  
   C. Constraints as nodes, variables as arcs  
   D. None of the above  

<details>
<summary>Show Answer</summary>
A. Variables as nodes, binary constraints as arcs
</details>

---

### Question 16:
Which of the following is **not a popular CSP type**?

   A. SAT (Boolean satisfiability)  
   B. Linear programming  
   C. Graph traversal  
   D. Integer programming  

<details>
<summary>Show Answer</summary>
C. Graph traversal
</details>

---

### Question 17:
Which of these real-world problems can be modeled as CSP?

   A. Teacher scheduling  
   B. Sudoku  
   C. Map coloring  
   D. All of the above  

<details>
<summary>Show Answer</summary>
D. All of the above
</details>

---

### Question 18:
Which statement about CSP backtracking search is correct?

   A. Always explores all leaves of the search tree  
   B. DFS-based, only considers assignments consistent with constraints  
   C. Ignores unary constraints  
   D. Assigns multiple variables per level  

<details>
<summary>Show Answer</summary>
B. DFS-based, only considers assignments consistent with constraints
</details>

---

### Question 19:
When combining MRV and forward checking:

   A. Search becomes less effective  
   B. Can detect failure early and reduce search space  
   C. MRV overrides forward checking  
   D. Forward checking is unnecessary  

<details>
<summary>Show Answer</summary>
B. Can detect failure early and reduce search space
</details>

---

### Question 20:
Which CSP constraint type is often used to express **preferences**?

   A. Unary  
   B. Binary  
   C. Soft (constrained optimization)  
   D. Arc  

<details>
<summary>Show Answer</summary>
C. Soft (constrained optimization)
</details>

---

### Question 21:
In forward checking, if a variable’s remaining legal values = 0:

   A. Continue assigning other variables  
   B. Terminate search and backtrack  
   C. Randomly assign a value  
   D. Remove all constraints  

<details>
<summary>Show Answer</summary>
B. Terminate search and backtrack
</details>

---

### Question 22:
Which is a **higher-order constraint** example?

   A. SA ≠ green  
   B. WA ≠ NT  
   C. X1 + X2 + X3 = 10  
   D. T ≠ 0  

<details>
<summary>Show Answer</summary>
C. X1 + X2 + X3 = 10
</details>

---

### Question 23:
In arc consistency, X → Y is checked:

   A. Only once at the start  
   B. Repeatedly until no more values can be removed  
   C. Only for unary constraints  
   D. Only after all variables are assigned  

<details>
<summary>Show Answer</summary>
B. Repeatedly until no more values can be removed
</details>

---

### Question 24:
Which of the following is a subtle reason CSPs are different from general search problems?

   A. Variables can be unassigned initially  
   B. Goal test depends on constraints, not just reaching a state  
   C. Values are structured, not arbitrary  
   D. All of the above  

<details>
<summary>Show Answer</summary>
D. All of the above
</details>

---

### Question 25:
Which combination of techniques can **maximize CSP solving efficiency**?

   A. Random variable order + DFS  
   B. MRV + degree heuristic + LCV + forward checking + arc consistency  
   C. Only DFS with no heuristics  
   D. Assigning variables alphabetically and values numerically  

<details>
<summary>Show Answer</summary>
B. MRV + degree heuristic + LCV + forward checking + arc consistency
</details>
