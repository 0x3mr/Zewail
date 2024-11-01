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
Consider the following template class definition. What will the `print` function output for an object `myPair` of `MyPair<int, double>` when called with arguments `(5, 3.14)`?

```cpp
template <typename T, typename U>
class MyPair {
public:
    T first;
    U second;

    MyPair(T f, U s) : first(f), second(s) {}

    void print() {
        std::cout << "First: " << first << ", Second: " << second << std::endl;
    }
};
```

    A. First: 5, Second: 3.14
    B. First: 5, Second: 5
    C. First: 3.14, Second: 5
    D. Compilation error
<details>
<summary>Answer</summary>
A. First: 5, Second: 3.14
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
Given the following code snippet, what will be the output of the `compute` function for `myObj.compute(4)` if `T` is instantiated with `double`?

```cpp
template <typename T>
class MyClass {
public:
    T compute(T x) {
        return x * x;
    }
};
```

    A. 16
    B. 4.0
    C. 16.0
    D. Compilation error
<details>
<summary>Answer</summary>
C. 16.0
</details>

---


### Question 12:
In the code below, what will be the result of `Sum<int, double>(3, 3.5)`?

```cpp
template <typename T, typename U>
auto Sum(T a, U b) -> decltype(a + b) {
    return a + b;
}
```

    A. 6.5
    B. 3
    C. 3.5
    D. Compilation error
<details>
<summary>Answer</summary>
A. 6.5
</details>

---


### Question 13:
Which of the following template function calls will result in a compilation error?

```cpp
template <typename T>
T Square(T x) {
    return x * x;
}
```

    A. Square<int>(5)
    B. Square<double>(5.5)
    C. Square<std::string>("hello")
    D. Square<char>('A')
<details>
<summary>Answer</summary>
C. Square<std::string>("hello")
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
Consider the code below. What is the output when `FindMinMax<double>(3.14, 2.71)` is called?

```cpp
template <typename T>
std::pair<T, T> FindMinMax(T a, T b) {
    if (a < b)
        return {a, b};
    else
        return {b, a};
}
```

    A. 3.14, 2.71
    B. 2.71, 3.14
    C. Compilation error
    D. Depends on the compiler
<details>
<summary>Answer</summary>
B. 2.71, 3.14
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
What would be the output of the following code when `Multiply<int>(2, 3.5)` is called?

```cpp
template <typename T>
T Multiply(T a, T b) {
    return a * b;
}
```

    A. 7.0
    B. 6
    C. 3.5
    D. Compilation error
<details>
<summary>Answer</summary>
B. 6
</details>

---

### Question 31:
Consider the following function template and specialization. What will be the output of `printType(10)`?

```cpp
template <typename T>
void printType(T) {
    std::cout << "Generic template" << std::endl;
}

template <>
void printType<int>(int) {
    std::cout << "Specialized template for int" << std::endl;
}
```

    A. Generic template
    B. Specialized template for int
    C. Compilation error
    D. Undefined behavior
<details>
<summary>Answer</summary>
C. Compilation error
</details>

---

### Question 32:
Given the following code, what will be the output of `maxVal<double>(5, 4.5)`?

```cpp
template <typename T>
T maxVal(T a, T b) {
    return (a > b) ? a : b;
}
```

    A. 5
    B. 5.0
    C. Compilation error
    D. Undefined behavior
<details>
<summary>Answer</summary>
A. 5
</details>

---

### Question 33:
What will happen if the following code is executed with `getValue<int, double>(5, 3.14)`?

```cpp
template <typename T, typename U>
auto getValue(T a, U b) -> decltype(a + b) {
    return a + b;
}
```

    A. 8
    B. 8.14
    C. Compilation error
    D. Undefined behavior
<details>
<summary>Answer</summary>
B. 8.14
</details>

---

### Question 34:
What is the output when `testFunction<int, double>(3, 2.5)` is called?

```cpp
template <typename T, typename U>
void testFunction(T a, U b) {
    if (a > b)
        std::cout << "Integer is greater" << std::endl;
    else
        std::cout << "Double is greater or equal" << std::endl;
}
```

    A. Integer is greater
    B. Double is greater or equal
    C. Compilation error
    D. Undefined behavior
<details>
<summary>Answer</summary>
C. Compilation error
</details>

---

### Question 35:
For the following code, what will be the output of `calculate<double>(3.5, 2)`?

```cpp
template <typename T>
T calculate(T a, T b) {
    return a + b;
}
```

    A. 5.5
    B. 5
    C. Compilation error
    D. Undefined behavior
<details>
<summary>Answer</summary>
A. 5.5
</details>

---

### Question 36:
What will be the output when `getSum<int>(3.14, 2.71)` is called?

```cpp
template <typename T>
T getSum(T a, T b) {
    return a + b;
}
```

    A. 5
    B. 5.85
    C. Compilation error
    D. Undefined behavior
<details>
<summary>Answer</summary>
A. 5
</details>

--- 

### Question 37:
What will be the output when `getSum<double>(3, 7)` is called?

```cpp
template <typename T>
T getSum(T a, T b) {
    return a + b;
}
```

   A. 10  
   B. 10.0  
   C. Compilation error  
   D. Undefined behavior  

<details>
<summary>Answer</summary>
A. 10  
</details>

---

### Question 38:
What will be the output when `getSum<double>(3.0, 7)` is called?

```cpp
template <typename T>
T getSum(T a, T b) {
    return a + b;
}
```

   A. 10  
   B. 10.0  
   C. Compilation error  
   D. Undefined behavior  

<details>
<summary>Answer</summary>
A. 10  
</details>

---

### Question 39:
What will be the output when `getSum<double>(3.0, 7.0)` is called?

```cpp
template <typename T>
T getSum(T a, T b) {
    return a + b;
}
```

   A. 10  
   B. 10.0  
   C. Compilation error  
   D. Undefined behavior  

<details>
<summary>Answer</summary>
A. 10  
</details>

---