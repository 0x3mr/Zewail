# Lab 2

Deliverables

### Part 1:

Create a C# project with three classes: Person, Student, and Professor. The Student and Teacher classes should inherit from the Person class.

Requirements:
- Person class:
  - Include two public methods: "Greet()" and "SetAge(int age)"
  - "SetAge(int age)" should assign the age of the person
- Student class:
  - Include a public "Study()" method that writes "I'm studying" on the screen
  - Include a public "ShowAge()" method that writes "My age is: x years old" on the screen
- Teacher class:
  - Include a public "Explain()" method that writes "I'm explaining" on the screen

### Part 2:

In your main program, demonstrate the functionality of the classes:

Requirements:
- Create a new Person and make them say hello
- Create a new Student, set an age, say hello, and display their age on the screen
- Create a new Teacher, set an age, say hello, and start the explanation

## Test Cases

### Test Case 1:

Input:
- Create a new Person object

Expected Output:
```
Hello!
```

### Test Case 2:

Input:
- Create a new Student object
- Set age to 20
- Call Greet() and ShowAge() methods

Expected Output:
```
Hello!
My age is: 20 years old
```

### Test Case 3:

Input:
- Create a new Teacher object
- Set age to 35
- Call Greet() and Explain() methods

Expected Output:
```
Hello!
I'm explaining
```

### Test Case 4:

Input:
- Run the main program

Expected Output:
```
Hello!
Hello!
My age is: 20 years old
Hello!
I'm explaining
```