### Question 1:
*Why is a soft margin SVM typically preferred over a hard margin SVM in real-world datasets?*

   A. To maximize CPU utilization  
   B. To simplify the optimization problem  
   C. To accommodate noisy or non-linearly separable data by allowing controlled misclassifications  
   D. To reduce the need for kernel functions  

<details>
<summary>Answer</summary>
C. It accommodates noisy or non-linearly separable data by allowing controlled misclassifications
</details>

---

### Question 2:
*In soft margin SVM, what does increasing the slack variables (ξ) imply about the classifier?*

   A. It is overfitting the training data  
   B. It is allowing more violations of the margin  
   C. It is maximizing the margin perfectly  
   D. It is minimizing training accuracy intentionally  

<details>
<summary>Answer</summary>
B. It is allowing more violations of the margin
</details>

---

### Question 3:
*In the primal problem formulation of the soft margin SVM, what key modification is made to the constraints?*

   A. They are changed to equalities instead of inequalities  
   B. The constraints are made stricter to eliminate slack variables  
   C. All constraints are rewritten in the form "Expression ≤ 0"  
   D. Constraints are removed in favor of regularization terms  

<details>
<summary>Answer</summary>
C. All constraints are rewritten in the form "Expression ≤ 0"
</details>

---

### Question 4:
*Why is it advantageous to convert the SVM optimization from the primal to the dual formulation?*

   A. The dual form eliminates the need for constraints  
   B. The dual form allows the use of kernels to handle non-linear data  
   C. The dual form requires fewer computations  
   D. The dual form directly maximizes training accuracy  

<details>
<summary>Answer</summary>
B. The dual form allows the use of kernels to handle non-linear data
</details>

---

### Question 5:
*What is the primary purpose of the kernel trick in SVMs?*

   A. To increase the training time for better accuracy  
   B. To explicitly compute high-dimensional transformations  
   C. To efficiently compute dot products in high-dimensional feature spaces without performing the transformation  
   D. To remove the need for slack variables in soft margin SVMs  

<details>
<summary>Answer</summary>
C. To efficiently compute dot products in high-dimensional feature spaces without performing the transformation
</details>

---

### Question 6:
*Which of the following best describes the trade-off controlled by the soft margin SVM objective function?*

   A. Minimizing the number of features vs. maximizing the number of samples  
   B. Maximizing margin width vs. maximizing the number of support vectors  
   C. Maximizing margin width vs. minimizing classification errors via slack variables  
   D. Reducing model complexity vs. increasing the number of kernels used  

<details>
<summary>Answer</summary>
C. Maximizing margin width vs. minimizing classification errors via slack variables
</details>

---

### Question 7:
*In the dual formulation of soft margin SVM, what variable do we primarily optimize over?*

   A. The bias term (b)  
   B. The slack variables (ξ_i)  
   C. The kernel function parameters  
   D. The Lagrangian multipliers (α_i)  

<details>
<summary>Answer</summary>
D. The Lagrangian multipliers (α_i)
</details>

---

### Question 8:
*Which of the following is a key benefit of using the dual form in kernelized SVMs?*

   A. It simplifies the geometric interpretation of the margin  
   B. It directly reveals the support vectors  
   C. It eliminates the need for hyperparameter tuning  
   D. It allows the solution to scale linearly with input dimension  

<details>
<summary>Answer</summary>
B. It directly reveals the support vectors
</details>

---

### Question 9:
*What aspect of the kernel trick makes it computationally efficient when applying SVMs to high-dimensional feature spaces?*

   A. It approximates the dot product using clustering  
   B. It transforms data to a lower-dimensional space before training  
   C. It avoids explicit computation of transformed features by directly computing dot products in the higher-dimensional space  
   D. It removes the need for optimization by using lookup tables  

<details>
<summary>Answer</summary>
C. It avoids explicit computation of transformed features by directly computing dot products in the higher-dimensional space
</details>

---

### Question 10:
*Which of the following statements about the kernel trick is FALSE?*

   A. It allows SVMs to perform non-linear classification with linear algorithms  
   B. It computes dot products in a high-dimensional feature space without explicit transformation  
   C. It guarantees linear separability in every feature space  
   D. It helps avoid the computational cost of transforming data explicitly  

<details>
<summary>Answer</summary>
C. It guarantees linear separability in every feature space
</details>

---

### Question 11:
*What does a larger value of the slack variable (ξ_i) imply for a particular training point?*

   A. The point lies farther inside the margin or is misclassified  
   B. The point contributes more to the maximum margin  
   C. The point is a support vector on the margin boundary  
   D. The point has been excluded from the training process  

<details>
<summary>Answer</summary>
A. The point lies farther inside the margin or is misclassified
</details>

---

### Question 12:
*What role does the dual variable (α_i) play in identifying support vectors in soft-margin SVM?*

   A. (α_i) is always 0 for support vectors  
   B. Non-zero (α_i) values correspond to support vectors  
   C. (α_i) determines the margin size directly  
   D. Larger (α_i) indicates misclassified support vectors only  

<details>
<summary>Answer</summary>
B. Non-zero (α_i) values correspond to support vectors
</details>

---

### Question 13:
*Which condition must be satisfied in the KKT (Karush-Kuhn-Tucker) conditions for the dual solution in SVMs?*

   A. (α_i · ξ_i = 1)  
   B. (α_i · (constraint violation) = 0)  
   C. (∑ α_i = 0)  
   D. (α_i) must always be greater than 1  

<details>
<summary>Answer</summary>
B. (α_i · (constraint violation) = 0)
</details>

---

### Question 14:
*Which of the following is true about the decision boundary in a kernelized SVM?*

   A. It is always linear in the input space  
   B. It is formed by transforming the data into a higher-dimensional space and finding a linear separator  
   C. It depends only on the number of training examples, not the kernel used  
   D. It is identical to that of a hard margin SVM  

<details>
<summary>Answer</summary>
B. It is formed by transforming the data into a higher-dimensional space and finding a linear separator
</details>

---

### Question 15:
*Which of these does **not** affect the kernel trick's efficiency or effectiveness?*

   A. The choice of kernel function  
   B. The dimensionality of the transformed feature space  
   C. The number of support vectors  
   D. The bias term (b) in the primal form  

<details>
<summary>Answer</summary>
D. The bias term (b) in the primal form
</details>

---

### Question 16:
*What property must a function satisfy to be a valid kernel in SVM?*

   A. It must be differentiable  
   B. It must correspond to a dot product in some feature space  
   C. It must transform the input space linearly  
   D. It must guarantee zero classification error  

<details>
<summary>Answer</summary>
B. It must correspond to a dot product in some feature space
</details>

---

### Question 17:
*Why does using a polynomial kernel of higher degree risk overfitting?*

   A. It reduces the margin width  
   B. It increases training time linearly  
   C. It allows the model to perfectly fit even noise in the data  
   D. It prevents convergence of the SVM dual problem  

<details>
<summary>Answer</summary>
C. It allows the model to perfectly fit even noise in the data
</details>

---

### Question 18:
*Which of the following kernel functions can model more complex decision boundaries than a linear kernel?*

   A. Dot product kernel  
   B. Gaussian (RBF) kernel  
   C. Linear kernel  
   D. Bias kernel  

<details>
<summary>Answer</summary>
B. Gaussian (RBF) kernel
</details>

---

### Question 19:
*When using a kernelized SVM, which part of the model training process changes compared to linear SVM?*

   A. Slack variable constraints  
   B. Dual problem solution using kernel evaluations instead of raw features  
   C. Loss function becomes non-convex  
   D. Bias term is eliminated  

<details>
<summary>Answer</summary>
B. Dual problem solution using kernel evaluations instead of raw features
</details>

---

### Question 20:
*Why is the dual form of the SVM objective function preferred when kernels are used?*

   A. It eliminates the need to compute any dot products  
   B. It directly uses kernel functions in place of explicit feature mappings  
   C. It avoids solving any quadratic optimization problems  
   D. It maximizes the number of support vectors  

<details>
<summary>Answer</summary>
B. It directly uses kernel functions in place of explicit feature mappings
</details>

---

### Question 21:
*In kernelized SVMs, what replaces the inner product (x_i^T x_j) in the dual form?*

   A. (||x_i - x_j||^2)  
   B. A transformation matrix applied to (x_i)  
   C. A kernel function K(x_i, x_j)  
   D. A constant margin parameter  

<details>
<summary>Answer</summary>
C. A kernel function K(x_i, x_j)
</details>

---

### Question 22:
*Which of the following is **true** about support vectors in both hard and soft margin SVMs?*

   A. They are the only data points with zero slack  
   B. They always lie exactly on the decision boundary  
   C. They influence the orientation and position of the decision boundary  
   D. They are not used in the dual formulation  

<details>
<summary>Answer</summary>
C. They influence the orientation and position of the decision boundary
</details>

---

### Question 23:
*In soft margin SVM, increasing the penalty parameter (C) leads to:*

   A. A wider margin and more misclassifications  
   B. A narrower margin and fewer slack variable violations  
   C. More kernel computations and fewer support vectors  
   D. Elimination of the dual formulation  

<details>
<summary>Answer</summary>
B. A narrower margin and fewer slack variable violations
</details>

---

### Question 24:
*What is a potential downside of using a very large value of (C) in soft margin SVMs?*

   A. It reduces training accuracy significantly  
   B. It results in a model that underfits  
   C. It increases sensitivity to noise and overfitting  
   D. It decreases the number of support vectors to zero  

<details>
<summary>Answer</summary>
C. It increases sensitivity to noise and overfitting
</details>

---

### Question 25:
*Which of the following statements best summarizes the essence of the kernel trick in SVMs?*

   A. It transforms the optimization problem into a polynomial form  
   B. It replaces high-dimensional computations with direct kernel evaluations  
   C. It uses neural networks to map input data to linearly separable space  
   D. It guarantees zero error in the dual space  

<details>
<summary>Answer</summary>
B. It replaces high-dimensional computations with direct kernel evaluations
</details>

---
