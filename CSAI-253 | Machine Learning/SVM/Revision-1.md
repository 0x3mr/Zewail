### Question 1:

*In a hard-margin SVM, what assumption must strictly hold for the optimization problem to be solvable?*

A. The dataset must be normalized.

B. The classes must be linearly separable.

C. The kernel function must be convex.

D. All support vectors must lie within the margin.


<details>
<summary>Answer</summary>
B. The classes must be linearly separable.
</details>

---

### Question 2:

*What role does the slack variable $\xi_i$ play in soft-margin SVMs?*

A. It controls the width of the margin.

B. It allows some data points to violate the margin constraint.

C. It adjusts the learning rate of the SVM.

D. It maximizes the margin distance.


<details>
<summary>Answer</summary>
B. It allows some data points to violate the margin constraint.
</details>

---

### Question 3:

*In the primal formulation of soft-margin SVM, what type of optimization problem is solved?*

A. Linear programming with equality constraints

B. Quadratic programming with inequality constraints

C. Non-linear optimization with Lagrangian multipliers

D. Gradient descent on a loss function


<details>
<summary>Answer</summary>
B. Quadratic programming with inequality constraints
</details>

---

### Question 4:

*Why does increasing the penalty parameter $C$ in a soft-margin SVM reduce the margin?*

A. It forces the model to prioritize margin width.

B. It penalizes misclassification more, leading to stricter fitting.

C. It removes regularization from the objective function.

D. It increases the number of support vectors.


<details>
<summary>Answer</summary>
B. It penalizes misclassification more, leading to stricter fitting.
</details>

---

### Question 5:

*Which condition must the Lagrange multipliers $\alpha_i$ satisfy in the dual problem of soft-margin SVMs?*

A. $\alpha_i > 0$ for all $i$

B. $\sum \alpha_i y_i = 1$

C. $0 \leq \alpha_i \leq C$

D. $\alpha_i$ is binary


<details>
<summary>Answer</summary>
C. \(0 \leq \alpha_i \leq C\)
</details>

---

### Question 6:

*In a soft-margin SVM, which of the following is always true for a support vector?*

A. Its $\alpha_i = 0$

B. It lies outside the margin

C. It has $\alpha_i > 0$

D. It minimizes the hinge loss exactly to zero


<details>
<summary>Answer</summary>
C. It has \(\alpha_i > 0\)
</details>

---

### Question 7:

*What is the impact of choosing a very small $C$ in a soft-margin SVM?*

A. It behaves like a hard-margin SVM.

B. The margin increases, but so does training error.

C. It eliminates all support vectors.

D. It overfits the data drastically.


<details>
<summary>Answer</summary>
B. The margin increases, but so does training error.
</details>

---

### Question 8:

*Which of the following best describes the geometric margin in SVMs?*

A. The number of misclassified points

B. The distance between the closest positive and negative point

C. The perpendicular distance between the decision boundary and the nearest data point

D. The sum of distances from all points to the decision boundary


<details>
<summary>Answer</summary>
C. The perpendicular distance between the decision boundary and the nearest data point
</details>

---

### Question 9:

*In the dual formulation, why is the kernel trick especially useful in soft-margin SVMs?*

A. It avoids the need for slack variables.

B. It enables solving problems in infinite-dimensional feature spaces.

C. It guarantees a global minimum.

D. It reduces the computational complexity of training.


<details>
<summary>Answer</summary>
B. It enables solving problems in infinite-dimensional feature spaces.
</details>

---

### Question 10:

*Which of the following statements about support vectors is false?*

A. Support vectors lie on or inside the margin.

B. In soft-margin SVMs, support vectors can be misclassified.

C. Support vectors always have the largest $\alpha_i$.

D. The decision boundary depends only on support vectors.


<details>
<summary>Answer</summary>
C. Support vectors always have the largest \(\alpha_i\).
</details>

---

### Question 11:

*In soft-margin SVM, which of the following is NOT a reason why slack variables are introduced?*

A. To handle noisy or non-linearly separable data

B. To ensure feasibility of the optimization problem

C. To eliminate the need for regularization

D. To control the trade-off between margin width and classification error


<details>
<summary>Answer</summary>
C. To eliminate the need for regularization
</details>

---

### Question 12:

*In the dual formulation of the SVM optimization problem, what does the objective function depend on?*

A. The squared norm of the weight vector

B. The sum of slack variables

C. The dot products (or kernels) between training examples

D. The values of the bias term $b$


<details>
<summary>Answer</summary>
C. The dot products (or kernels) between training examples
</details>

---

### Question 13:

*Which of the following correctly explains why hard-margin SVM cannot be used for most real-world datasets?*

A. It requires computationally expensive optimization.

B. It assumes feature independence.

C. Real-world data is rarely perfectly linearly separable.

D. It overfits the training data by maximizing the margin.


<details>
<summary>Answer</summary>
C. Real-world data is rarely perfectly linearly separable.
</details>

---

### Question 14:

*For a correctly classified point in a soft-margin SVM, which of the following conditions must be true?*

A. $y_i(\mathbf{w}^\top \mathbf{x}_i + b) < 1$

B. $y_i(\mathbf{w}^\top \mathbf{x}_i + b) \geq 1$

C. $\xi_i = 1$

D. $\alpha_i = C$


<details>
<summary>Answer</summary>
B. \( y_i(\mathbf{w}^\top \mathbf{x}_i + b) \geq 1 \)
</details>

---

### Question 15:

*In the dual form of soft-margin SVM, what does it mean if $0 < \alpha_i < C$?*

A. The point is misclassified.

B. The point is not a support vector.

C. The point lies exactly on the margin boundary.

D. The point lies outside the margin and is irrelevant.


<details>
<summary>Answer</summary>
C. The point lies exactly on the margin boundary.
</details>

---

### Question 16:

*What does the Karush-Kuhn-Tucker (KKT) condition imply in the context of soft-margin SVM?*

A. Only support vectors need to be considered for prediction.

B. The solution may have multiple global minima.

C. The primal and dual solutions are not equivalent.

D. A point with $\alpha_i = 0$ must lie on the margin boundary.


<details>
<summary>Answer</summary>
A. Only support vectors need to be considered for prediction.
</details>

---

### Question 17:

*Why can't hard-margin SVM be used with the Gaussian RBF kernel on non-separable data?*

A. RBF kernel is not defined for hard-margin SVM.

B. The feature space becomes infinite-dimensional.

C. Hard-margin SVM cannot tolerate any margin violations.

D. It overfits due to the exponential function.


<details>
<summary>Answer</summary>
C. Hard-margin SVM cannot tolerate any margin violations.
</details>

---

### Question 18:

*In soft-margin SVM, what happens to the decision boundary if all training examples become support vectors?*

A. It becomes undefined due to overfitting.

B. It becomes too complex and loses generalization.

C. It stays unchanged, as support vectors define the boundary.

D. It becomes the same as the perceptron hyperplane.


<details>
<summary>Answer</summary>
B. It becomes too complex and loses generalization.
</details>

---

### Question 19:

*What does the constraint $y_i(\mathbf{w}^\top \mathbf{x}_i + b) \geq 1 - \xi_i$ capture in the soft-margin SVM formulation?*

A. Prediction confidence

B. Allowance for margin violation

C. Condition for optimal hyperplane

D. Bias regularization


<details>
<summary>Answer</summary>
B. Allowance for margin violation
</details>

---

### Question 20:

*How does the dual formulation of the soft-margin SVM benefit from the kernel trick compared to the primal?*

A. The primal cannot include slack variables.

B. The dual allows efficient computation of dot products in high dimensions.

C. Kernels reduce overfitting directly in the primal.

D. Dual formulation removes the need to solve a constrained problem.


<details>
<summary>Answer</summary>
B. The dual allows efficient computation of dot products in high dimensions.
</details>

---

### Question 21:

*What happens when $C = \infty$ in the soft-margin SVM optimization problem?*

A. The model behaves like a ridge regression classifier.

B. It becomes equivalent to a hard-margin SVM.

C. The solution becomes under-regularized.

D. The hinge loss is ignored completely.


<details>
<summary>Answer</summary>
B. It becomes equivalent to a hard-margin SVM.
</details>

---

### Question 22:

*What does the hinge loss function ensure in SVM classification?*

A. That all examples are correctly classified

B. That examples are maximally distant from the hyperplane

C. That misclassified examples are penalized linearly

D. That the margin width is constant across all examples


<details>
<summary>Answer</summary>
C. That misclassified examples are penalized linearly
</details>

---

### Question 23:

*If a point in soft-margin SVM is correctly classified and outside the margin, what can we say about $\alpha_i$?*

A. $\alpha_i = C$

B. $\alpha_i = 0$

C. $\alpha_i < 0$

D. $\alpha_i = 1$


<details>
<summary>Answer</summary>
B. \(\alpha_i = 0\)
</details>

---

### Question 24:

*What is the implication of setting a very large value of $C$ in soft-margin SVM?*

A. It leads to a wider margin

B. It forces the classifier to allow more slack

C. It approximates a hard-margin SVM and may overfit

D. It always improves generalization performance


<details>
<summary>Answer</summary>
C. It approximates a hard-margin SVM and may overfit
</details>

---

### Question 25:

*Which of the following is true regarding the bias term $b$ in the dual formulation of SVM?*

A. It is determined directly from the slack variables.

B. It is computed from any training point where $0 < \alpha_i < C$.

C. It is optimized as a separate Lagrange multiplier.

D. It is irrelevant if kernels are used.


<details>
<summary>Answer</summary>
B. It is computed from any training point where \(0 < \alpha_i < C\).
</details>
