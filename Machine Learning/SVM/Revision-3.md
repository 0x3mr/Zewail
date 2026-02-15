### Question 1:
*In soft margin SVM, what is the primary purpose of introducing the slack variable ξ?*

   A. To maximize the margin width  
   B. To allow some training points to violate margin constraints  
   C. To eliminate the effect of outliers completely  
   D. To transform non-linear data into linear data  

<details>
<summary>Answer</summary>
B. To allow some training points to violate margin constraints
</details>

---

### Question 2:
*What is the relationship between the C parameter in soft margin SVM and model flexibility?*

   A. Higher C values lead to wider margins and more training errors  
   B. Lower C values lead to narrower margins and fewer training errors  
   C. Higher C values lead to narrower margins and fewer training errors  
   D. C has no effect on margin width, only on training errors  

<details>
<summary>Answer</summary>
C. Higher C values lead to narrower margins and fewer training errors
</details>

---

### Question 3:
*In the soft margin SVM primal formulation, what is the meaning of the term C∑ξᵢ in the objective function?*

   A. It measures the distance of support vectors to the hyperplane  
   B. It penalizes classification errors and margin violations  
   C. It ensures the model generalizes well to unseen data  
   D. It transforms the feature space to higher dimensions  

<details>
<summary>Answer</summary>
B. It penalizes classification errors and margin violations
</details>

---

### Question 4:
*Which of the following is a correct constraint in the soft margin SVM primal problem formulation?*

   A. yᵢ(w·xᵢ + b) ≥ 1  
   B. yᵢ(w·xᵢ + b) ≥ 1 - ξᵢ  
   C. yᵢ(w·xᵢ + b) ≥ 1 + ξᵢ  
   D. yᵢ(w·xᵢ + b) ≤ 1 - ξᵢ  

<details>
<summary>Answer</summary>
B. yᵢ(w·xᵢ + b) ≥ 1 - ξᵢ
</details>

---

### Question 5:
*When transforming from the primal to dual formulation in soft margin SVM, what happens to the slack variables ξᵢ?*

   A. They get replaced by the Lagrangian multipliers αᵢ  
   B. They disappear from the dual formulation  
   C. They become part of the kernel function  
   D. They set the upper bound constraint on αᵢ, where 0 ≤ αᵢ ≤ C  

<details>
<summary>Answer</summary>
D. They set the upper bound constraint on αᵢ, where 0 ≤ αᵢ ≤ C
</details>

---

### Question 6:
*In the context of SVM models, support vectors are defined as training points that:*

   A. Have αᵢ = 0  
   B. Have αᵢ > 0  
   C. Have αᵢ = C  
   D. Have 0 < αᵢ < C  

<details>
<summary>Answer</summary>
B. Have αᵢ > 0
</details>

---

### Question 7:
*What is the key difference between the constraints on Lagrangian multipliers (αᵢ) in hard margin SVM versus soft margin SVM?*

   A. Hard margin: αᵢ ≥ 0; Soft margin: 0 ≤ αᵢ ≤ C  
   B. Hard margin: αᵢ ≤ C; Soft margin: αᵢ ≥ 0  
   C. Hard margin: αᵢ = 0 or αᵢ = 1; Soft margin: 0 ≤ αᵢ ≤ 1  
   D. Hard margin: αᵢ can be any real number; Soft margin: αᵢ ≥ 0  

<details>
<summary>Answer</summary>
A. Hard margin: αᵢ ≥ 0; Soft margin: 0 ≤ αᵢ ≤ C
</details>

---

### Question 8:
*In a trained soft margin SVM model, a data point with αᵢ = C indicates:*

   A. The point is on the correct side of the hyperplane and outside the margin  
   B. The point is exactly on the margin boundary  
   C. The point is a support vector that violates the margin or is misclassified  
   D. The point has no influence on defining the decision boundary  

<details>
<summary>Answer</summary>
C. The point is a support vector that violates the margin or is misclassified
</details>

---

### Question 9:
*What is the relationship between w and the Lagrangian multipliers in the SVM model?*

   A. w = ∑ᵢ αᵢyᵢ  
   B. w = ∑ᵢ αᵢxᵢ  
   C. w = ∑ᵢ αᵢyᵢxᵢ  
   D. w = ∑ᵢ yᵢxᵢ  

<details>
<summary>Answer</summary>
C. w = ∑ᵢ αᵢyᵢxᵢ
</details>

---

### Question 10:
*What is the fundamental reason why kernels are used in SVM?*

   A. To increase computational efficiency and reduce training time  
   B. To handle non-linearly separable data without explicit transformation  
   C. To eliminate the need for Lagrangian multipliers  
   D. To automatically find the optimal value of parameter C  

<details>
<summary>Answer</summary>
B. To handle non-linearly separable data without explicit transformation
</details>

---

### Question 11:
*In the kernel trick, the expression K(x₁, x₂) = Φ(x₁)·Φ(x₂) represents:*

   A. The explicit transformation of points x₁ and x₂ into higher dimensions  
   B. The decision function for classifying a new point x₂  
   C. The dot product in the transformed space computed without explicit transformation  
   D. The distance between points x₁ and x₂ in the original space  

<details>
<summary>Answer</summary>
C. The dot product in the transformed space computed without explicit transformation
</details>

---

### Question 12:
*For a quadratic kernel K(x₁, x₂) = (x₁·x₂)², which of the following represents the correct feature mapping Φ(x) for a 2D input vector x = [x₁, x₂]?*

   A. Φ(x) = [x₁², x₂², x₁x₂]  
   B. Φ(x) = [x₁², x₂², √2x₁x₂]  
   C. Φ(x) = [x₁², x₂², 2x₁x₂]  
   D. Φ(x) = [x₁², x₂², x₁·x₂]  

<details>
<summary>Answer</summary>
B. Φ(x) = [x₁², x₂², √2x₁x₂]
</details>

---

### Question 13:
*Which kernel function produces an infinite-dimensional feature space?*

   A. Linear kernel  
   B. Polynomial kernel  
   C. Gaussian RBF kernel  
   D. Sigmoid kernel  

<details>
<summary>Answer</summary>
C. Gaussian RBF kernel
</details>

---

### Question 14:
*Given two valid kernel functions K₁(x, y) and K₂(x, y), which of the following is NOT necessarily a valid kernel function?*

   A. K₁(x, y) + K₂(x, y)  
   B. K₁(x, y) × K₂(x, y)  
   C. K₁(x, y) - K₂(x, y)  
   D. aK₁(x, y) where a > 0  

<details>
<summary>Answer</summary>
C. K₁(x, y) - K₂(x, y)
</details>

---

### Question 15:
*In the kernelized SVM dual formulation, the objective function to maximize becomes:*

   A. ∑ᵢ αᵢ - ½∑ᵢ∑ⱼ αᵢαⱼyᵢyⱼK(xᵢ, xⱼ)  
   B. ∑ᵢ αᵢ - ½∑ᵢ∑ⱼ αᵢαⱼyᵢyⱼ(xᵢ·xⱼ)  
   C. ∑ᵢ αᵢ - ½∑ᵢ∑ⱼ αᵢαⱼK(xᵢ, xⱼ)  
   D. ∑ᵢ αᵢ - ½∑ᵢ∑ⱼ αᵢαⱼyᵢyⱼ||xᵢ - xⱼ||²  

<details>
<summary>Answer</summary>
A. ∑ᵢ αᵢ - ½∑ᵢ∑ⱼ αᵢαⱼyᵢyⱼK(xᵢ, xⱼ)
</details>

---

### Question 16:
*When implementing a kernelized SVM, the decision function for classifying a new data point x becomes:*

   A. f(x) = sign(∑ᵢ αᵢyᵢK(xᵢ, x) + b)  
   B. f(x) = sign(∑ᵢ αᵢK(xᵢ, x) + b)  
   C. f(x) = sign(∑ᵢ αᵢyᵢΦ(xᵢ)·Φ(x) + b)  
   D. f(x) = sign(w·Φ(x) + b)  

<details>
<summary>Answer</summary>
A. f(x) = sign(∑ᵢ αᵢyᵢK(xᵢ, x) + b)
</details>

---

### Question 17:
*The bias term b in a kernelized SVM can be computed as:*

   A. b = yᵢ - ∑ⱼ αⱼyⱼK(xⱼ, xᵢ) where αᵢ = 0  
   B. b = yᵢ - ∑ⱼ αⱼyⱼK(xⱼ, xᵢ) where αᵢ = C  
   C. b = yᵢ - ∑ⱼ αⱼyⱼK(xⱼ, xᵢ) where 0 < αᵢ < C  
   D. b = ∑ⱼ αⱼyⱼK(xⱼ, xᵢ) for any support vector xᵢ  

<details>
<summary>Answer</summary>
C. b = yᵢ - ∑ⱼ αⱼyⱼK(xⱼ, xᵢ) where 0 < αᵢ < C
</details>

---

### Question 18:
*In the context of soft margin SVM, what does it mean when a data point has 0 < αᵢ < C?*

   A. The point is misclassified  
   B. The point is exactly on the margin boundary  
   C. The point is inside the margin but correctly classified  
   D. The point has no effect on the decision boundary  

<details>
<summary>Answer</summary>
B. The point is exactly on the margin boundary
</details>

---

### Question 19:
*What is the effect of increasing the γ parameter in a Gaussian RBF kernel K(x, y) = exp(-γ||x - y||²)?*

   A. The decision boundary becomes more complex/flexible  
   B. The decision boundary becomes smoother/less flexible  
   C. The margin width increases  
   D. More training points become support vectors  

<details>
<summary>Answer</summary>
A. The decision boundary becomes more complex/flexible
</details>

---

### Question 20:
*Which of the following statements is TRUE about the training process of a kernelized SVM?*

   A. We must first transform all data points to the higher-dimensional space  
   B. We never need to explicitly compute the transformed feature vectors  
   C. The kernel function must be chosen to match the specific dimensionality of the data  
   D. The computational complexity increases exponentially with the dimensionality of the transformed space  

<details>
<summary>Answer</summary>
B. We never need to explicitly compute the transformed feature vectors
</details>

---

### Question 21:
*In a derived kernel function like K(x,y) = [K₁(x,y)]², where K₁ is a valid kernel, what does this operation mathematically represent?*

   A. Computing the square of the distance between points in feature space  
   B. Taking the dot product of feature vectors in a new feature space  
   C. Concatenating two copies of the original feature space  
   D. Squaring all values in the original feature vectors  

<details>
<summary>Answer</summary>
B. Taking the dot product of feature vectors in a new feature space
</details>

---

### Question 22:
*When would using a linear kernel be more appropriate than using a Gaussian RBF kernel?*

   A. When the data is highly non-linear  
   B. When the feature space is already high-dimensional and likely linearly separable  
   C. When computation time is not a concern  
   D. When the dataset is small  

<details>
<summary>Answer</summary>
B. When the feature space is already high-dimensional and likely linearly separable
</details>

---

### Question 23:
*The Mercer's condition for kernel functions states that a function K(x,y) is a valid kernel if:*

   A. K(x,y) = K(y,x) for all x,y  
   B. The matrix formed by K(xᵢ,xⱼ) for all training points is positive semi-definite  
   C. K(x,y) can be expressed as Φ(x)·Φ(y) for some explicit mapping Φ  
   D. All of the above  

<details>
<summary>Answer</summary>
D. All of the above
</details>

---

### Question 24:
*In the example shown in the lecture, what is the approximate ratio of the soft margin SVM model's weight vector magnitude compared to its hard margin counterpart?*

   A. Approximately 1/4  
   B. Approximately 1/2  
   C. Approximately 2  
   D. Approximately 4  

<details>
<summary>Answer</summary>
B. Approximately 1/2
</details>

---

### Question 25:
*What is the key mathematical insight that makes the kernel trick possible?*

   A. The ability to find a perfect separating hyperplane for any dataset  
   B. The dual formulation of SVM depends only on dot products between data points  
   C. The transformed feature space must be finite-dimensional  
   D. The decision boundary must be a hyperplane in the original space  

<details>
<summary>Answer</summary>
B. The dual formulation of SVM depends only on dot products between data points
</details>