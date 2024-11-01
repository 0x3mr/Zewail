### Question 1:
What is the primary purpose of Templates in C++?

    A. To reduce program execution time
    B. For generic programming
    C. To replace object-oriented programming
    D. To simplify file handling
<details>
<summary>Answer</summary>
B. For generic programming
</details>

---


### Question 2:
How many types of Templates are there in C++?

    A. 1
    B. 2
    C. 3
    D. 4
<details>
<summary>Answer</summary>
B. 2
</details>

---


### Question 3:
Which keywords can be used to specify a type parameter in a template?

    A. int and float
    B. typename and class
    C. void and const
    D. static and dynamic
<details>
<summary>Answer</summary>
B. typename and class
</details>

---


### Question 4:
What does the letter T typically represent in a template declaration?*

    A. Total number of parameters
    B. Template argument that accepts different data types
    C. Time complexity
    D. Type of return value
<details>
<summary>Answer</summary>
B. Template argument that accepts different data types
</details>

---


### Question 5:
When are template functions expanded?

    A. At runtime
    B. During linking
    C. At compile time
    D. During interpretation
<details>
<summary>Answer</summary>
C. At compile time
</details>

---


### Question 6:
What happens when a template function is called with a specific data type?

    A. The original function is modified
    B. A new version of the function is generated for that data type
    C. An error is thrown
    D. The function remains unchanged
<details>
<summary>Answer</summary>
B. A new version of the function is generated for that data type
</details>

---


### Question 7:
Which of the following is an advantage of using Templates?

    A. Reduced compilation time
    B. Avoiding repetitive code
    C. Guaranteed runtime performance
    D. Simplified error handling
<details>
<summary>Answer</summary>
B. Avoiding repetitive code
</details>

---


### Question 8:
What is a potential disadvantage of using Templates?

    A. Limited type support
    B. Increased compilation times
    C. Reduced code reusability
    D. Mandatory runtime type checking
<details>
<summary>Answer</summary>
B. Increased compilation times
</details>

---


### Question 9:
In a class template declaration, how do you specify multiple type parameters?

    A. template <T1, T2>
    B. template <typename T1, typename T2>
    C. template <class T1, class T2>
    D. Both B and C
<details>
<summary>Answer</summary>
D. Both B and C
</details>

---


### Question 10:
What would the following code look like as a template function?*
```cpp
int Add(int Num1, int Num2) {
    return (Num1 + Num2);
}
```
 A. 
```cpp
template <typename T>
T Add(T Num1, T Num2) {
    return (Num1 + Num2);
}
```
 B. 
```cpp
generic <typename T>
T Add(T Num1, T Num2) {
    return (Num1 + Num2);
}
```
 C. 
```cpp
template T
T Add(T Num1, T Num2) {
    return (Num1 + Num2);
}
```
 D. 
```cpp
template <class>
int Add(int Num1, int Num2) {
    return (Num1 + Num2);
}
```
<details>
<summary>Answer</summary>
A. 
```cpp
template <typename T>
T Add(T Num1, T Num2) {
    return (Num1 + Num2);
}
```
</details>

---


### Question 11:
How do you create an object of a class template?

    A. By using default constructor
    B. By specifying the data type
    C. Only through inheritance
    D. By using a static method
<details>
<summary>Answer</summary>
B. By specifying the data type
</details>

---


### Question 12:
What is the primary difference between `typename` and `class` in template declarations?

    A. `typename` only works with classes
    B. `class` only works with primitive types
    C. There is no practical difference
    D. `typename` is more modern and preferred
<details>
<summary>Answer</summary>
C. There is no practical difference
</details>

---


### Question 13:
Which of the following is TRUE about template errors?

    A. Always clear and easy to understand
    B. Typically produce unhelpful and confusing messages
    C. Never occur during compilation
    D. Only happen with complex data types
<details>
<summary>Answer</summary>
B. Typically produce unhelpful and confusing messages
</details>

---


### Question 14:
What does a default parameter in a class template mean?

    A. It always uses the first type provided
    B. It allows omitting the type in some cases
    C. It automatically selects the most appropriate type
    D. It prevents compilation
<details>
<summary>Answer</summary>
B. It allows omitting the type in some cases
</details>

---


### Question 15:
Where is it recommended to put template class implementation?

    A. In a separate .cpp file
    B. In the main function
    C. In the same header file
    D. In a different namespace
<details>
<summary>Answer</summary>
C. In the same header file
</details>

---


### Question 16:
What happens if you don't specify a type when creating a template class object?

    A. Compiler error
    B. Uses a default type
    C. Creates an empty object
    D. Randomly selects a type
<details>
<summary>Answer</summary>
A. Compiler error
</details>

---


### Question 17:
Which standard C++ library extensively uses templates?

    A. iostream
    B. fstream
    C. STL (Standard Template Library)
    D. algorithm
<details>
<summary>Answer</summary>
C. STL (Standard Template Library)
</details>

---


### Question 18:
What is the primary purpose of generic programming?

    A. To reduce memory usage
    B. To write code that works with multiple data types
    C. To improve runtime performance
    D. To simplify object creation
<details>
<summary>Answer</summary>
B. To write code that works with multiple data types
</details>

---


### Question 19:
In a template with multiple parameters, which parameter can be made default?

    A. Only the first parameter
    B. Only the last parameter
    C. Any parameter
    D. No parameters can be default
<details>
<summary>Answer</summary>
B. Only the last parameter
</details>

---


### Question 20:
What would cause a template instantiation to fail?

    A. Using an unsupported operation with the type
    B. Using a template with primitive types
    C. Creating too many template instances
    D. Using templates with complex classes
<details>
<summary>Answer</summary>
A. Using an unsupported operation with the type
</details>

---


### Question 21:
How many type parameters can a template have?

    A. Maximum of 2
    B. Maximum of 3
    C. No practical limit
    D. Always exactly 1
<details>
<summary>Answer</summary>
C. No practical limit
</details>

---


### Question 22:
What does template expansion at compile-time potentially lead to?

    A. Reduced executable size
    B. Code bloat
    C. Faster runtime performance
    D. Better memory management
<details>
<summary>Answer</summary>
B. Code bloat
</details>

---


### Question 23:
Which of these is NOT a recommended use of templates?

    A. Creating generic algorithms
    B. Developing type-safe containers
    C. Implementing complex runtime type conversions
    D. Creating generic classes
<details>
<summary>Answer</summary>
C. Implementing complex runtime type conversions
</details>

---


### Question 24:
What is the main benefit of using templates in the standard library?

    A. Reduced memory consumption
    B. Guaranteed thread safety
    C. Providing generic, reusable algorithms and containers
    D. Automatic memory management
<details>
<summary>Answer</summary>
C. Providing generic, reusable algorithms and containers
</details>

---


### Question 25:
In a template function, what happens if you pass different types?

    A. Compilation error
    B. Runtime type conversion
    C. Implicit type casting
    D. Each type generates a separate function
<details>
<summary>Answer</summary>
A. Compilation error
</details>

---


### Question 26:
What does SFINAE stand for in advanced template concepts?

    A. Simplified Function Instantiation And Implementation Error
    B. Substitution Failure Is Not An Error
    C. Standard Function Interface And Nested Execution
    D. Synchronous Function Instantiation And Nested Expansion
<details>
<summary>Answer</summary>
B. Substitution Failure Is Not An Error
</details>

---


### Question 27:
Which modern C++ feature is closely related to templates?

    A. Virtual functions
    B. Operator overloading
    C. Auto type deduction
    D. Namespaces
<details>
<summary>Answer</summary>
C. Auto type deduction
</details>

---


### Question 28:
What is a variadic template?

    A. A template with a fixed number of parameters
    B. A template that can accept a variable number of arguments
    C. A template that only works with variable types
    D. A template with complex type constraints
<details>
<summary>Answer</summary>
B. A template that can accept a variable number of arguments
</details>

---


### Question 29:
In template specialization, what can you do?

    A. Completely redefine a template for a specific type
    B. Prevent a template from being used
    C. Automatically convert types
    D. Reduce compilation time
<details>
<summary>Answer</summary>
A. Completely redefine a template for a specific type
</details>

---


### Question 30:
Which book is recommended for advanced template understanding?

    A. "C++ Primer"
    B. "Modern C++ Design" by Andrei Alexandrescu
    C. "Effective C++" by Scott Meyers
    D. "The C++ Programming Language"
<details>
<summary>Answer</summary>
B. "Modern C++ Design" by Andrei Alexandrescu
</details>

---
