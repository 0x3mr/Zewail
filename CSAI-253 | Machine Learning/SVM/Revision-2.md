### Question 1:

*In the context of SVM, what defines a support vector?*

A. Any data point used in training

B. A data point that lies exactly on the margin boundary

C. A data point that influences the position of the hyperplane

D. A data point that is misclassified

<details>
<summary>Answer</summary>
C. A data point that influences the position of the hyperplane
</details>

---

### Question 2:

*What is the primary mathematical goal of hard-margin SVM?*

A. Maximize classification accuracy on the training set

B. Minimize the number of support vectors

C. Maximize the distance between the hyperplane and the farthest point

D. Minimize $W^T W$ subject to classification constraints

<details>
<summary>Answer</summary>
D. Minimize \( W^T W \) subject to classification constraints
</details>

---

### Question 3:

*In Lagrangian optimization for SVM, what role do Lagrange multipliers play?*

A. They directly determine the decision boundary

B. They convert the dual problem into a primal one

C. They help enforce constraints in the optimization process

D. They eliminate the need for margin maximization

<details>
<summary>Answer</summary>
C. They help enforce constraints in the optimization process
</details>

---

### Question 4:

*Why is it crucial that the constraints in the Lagrangian formulation be written as “Expression ≤ 0”?*

A. To simplify the gradient computation

B. Because standard Lagrangian formulation requires inequality constraints in that form

C. So the optimization becomes linear

D. To ensure the margin is always positive

<details>
<summary>Answer</summary>
B. Because standard Lagrangian formulation requires inequality constraints in that form
</details>

---

### Question 5:

*What fundamental assumption allows hard margin SVM to function correctly?*

A. The training set contains no noise

B. The dataset is non-linearly separable

C. All features are normalized

D. Data points lie far from the hyperplane

<details>
<summary>Answer</summary>
A. The training set contains no noise
</details>

---

### Question 6:

*What is the main drawback of applying a hard-margin SVM to real-world data?*

A. It requires kernel functions

B. It doesn't scale well with data size

C. It is too slow to train

D. It is highly sensitive to outliers

<details>
<summary>Answer</summary>
D. It is highly sensitive to outliers
</details>

---

### Question 7:

*Why does SVM aim to maximize the margin between classes?*

A. To ensure fewer support vectors are chosen

B. To improve training speed

C. To improve generalization to unseen data

D. To reduce the number of classes

<details>
<summary>Answer</summary>
C. To improve generalization to unseen data
</details>

---

### Question 8:

*In transforming the primal problem into the dual form, what is a major computational benefit?*

A. Reduction in data dimension

B. Dependency only on dot products between data points

C. Use of a linear activation function

D. Elimination of support vectors

<details>
<summary>Answer</summary>
B. Dependency only on dot products between data points
</details>

---

### Question 9:

*What does maximizing the margin geometrically represent?*

A. Minimizing misclassified points

B. Finding the shortest distance from the hyperplane to any point

C. Maximizing the distance to the nearest support vector

D. Minimizing the cost function

<details>
<summary>Answer</summary>
C. Maximizing the distance to the nearest support vector
</details>

---

### Question 10:

*Which of the following is NOT an advantage of a large-margin classifier like SVM?*

A. Better generalization

B. Fewer support vectors required

C. Resistance to overfitting

D. Improved performance on linearly separable data

<details>
<summary>Answer</summary>
B. Fewer support vectors required
</details>

---

### Question 11:

*Which of the following best explains why minimizing $W^T W$ helps maximize the margin in SVM?*

A. It penalizes misclassified points

B. It ensures all support vectors lie on the same side

C. It mathematically increases the distance from the hyperplane to the closest points

D. It simplifies the optimization process

<details>
<summary>Answer</summary>
C. It mathematically increases the distance from the hyperplane to the closest points
</details>

---

### Question 12:

*Which of the following statements about support vectors is FALSE?*

A. Removing a non-support vector does not affect the decision boundary

B. All support vectors lie closest to the hyperplane

C. Support vectors always lie on the correct side of the margin

D. Support vectors determine the margin width

<details>
<summary>Answer</summary>
C. Support vectors always lie on the correct side of the margin  
</details>

---

### Question 13:

*Which of the following is NOT part of the hard margin SVM optimization problem?*

A. Ensure each sample is correctly classified

B. Maximize $||w||^2$

C. Introduce inequality constraints for each sample

D. Use Lagrange multipliers to incorporate constraints

<details>
<summary>Answer</summary>
B. Maximize \( ||w||^2 \)  
</details>

---

### Question 14:

*Which condition must hold true for each training sample in the hard-margin SVM formulation?*

A. $y_i (w^T x_i + b) \geq 1$

B. $w^T x_i + b = 0$

C. $||w|| \leq 1$

D. $y_i (w^T x_i + b) = 0$

<details>
<summary>Answer</summary>
A. \( y_i (w^T x_i + b) \geq 1 \)
</details>

---

### Question 15:

*What happens if the training data is not linearly separable in hard margin SVM?*

A. The algorithm generalizes better

B. The margin becomes zero

C. The optimization problem becomes infeasible

D. It uses a kernel trick to resolve it

<details>
<summary>Answer</summary>
C. The optimization problem becomes infeasible
</details>

---

### Question 16:

*Which part of the SVM framework converts a constrained optimization problem into an unconstrained one?*

A. Decision boundary adjustment

B. Slack variable introduction

C. Lagrangian formulation

D. Kernel transformation

<details>
<summary>Answer</summary>
C. Lagrangian formulation
</details>

---

### Question 17:

*What is the key reason behind constructing the dual form of the SVM optimization problem?*

A. To convert it into a classification problem

B. To avoid constraints on support vectors

C. To express the solution in terms of dot products

D. To reduce the number of training examples

<details>
<summary>Answer</summary>
C. To express the solution in terms of dot products
</details>

---

### Question 18:

*Which assumption about data must hold true for using hard-margin SVM?*

A. Data is normalized

B. Data is non-linearly separable

C. Data is linearly separable with no misclassifications

D. Data contains no categorical features

<details>
<summary>Answer</summary>
C. Data is linearly separable with no misclassifications
</details>

---

### Question 19:

*Which mathematical expression defines the objective function in the primal SVM optimization?*

A. $\max ||w||^2$

B. $\min ||w||^2$

C. $\min y_i (w^T x_i + b)$

D. $\max y_i (w^T x_i + b)$

<details>
<summary>Answer</summary>
B.\( \min ||w||^2 \)
</details>

---

### Question 20:

*What would likely happen if a noisy outlier is added to a perfectly separable dataset in hard margin SVM?*

A. The margin will increase

B. The model will remain unchanged

C. The hyperplane may shift drastically

D. The number of support vectors will decrease

<details>
<summary>Answer</summary>
C. The hyperplane may shift drastically
</details>

---

### Question 21:

*How does the hard-margin SVM treat misclassified points?*

A. It uses slack variables to penalize them

B. It treats them as support vectors

C. It discards them

D. It does not allow any misclassified points

<details>
<summary>Answer</summary>
D. It does not allow any misclassified points
</details>

---

### Question 22:

*Which of the following best describes the term “margin” in SVM?*

A. Number of support vectors

B. Distance between the two classes

C. Distance between the hyperplane and the closest data point

D. Width of the decision boundary

<details>
<summary>Answer</summary>
C. Distance between the hyperplane and the closest data point
</details>

---

### Question 23:

*What effect does maximizing the margin have on overfitting?*

A. Increases the risk of overfitting

B. Has no impact on overfitting

C. Helps reduce overfitting

D. Only affects training time

<details>
<summary>Answer</summary>
C. Helps reduce overfitting
</details>

---

### Question 24:

*Why are constraints such as $y_i (w^T x_i + b) \geq 1$ used in SVM?*

A. To limit the number of support vectors

B. To ensure margin separation between classes

C. To allow some misclassifications

D. To enforce equal class distributions

<details>
<summary>Answer</summary>
B. To ensure margin separation between classes
</details>

---

### Question 25:

*In Lagrangian SVM formulation, what happens if a Lagrange multiplier $\alpha_i$ is zero?*

A. The corresponding data point is a support vector

B. The constraint is violated

C. The corresponding data point does not influence the model

D. The margin is minimized

<details>
<summary>Answer</summary>
C. The corresponding data point does not influence the model
</details>
