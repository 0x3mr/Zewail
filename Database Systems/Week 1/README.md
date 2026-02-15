# Lab 1

Deliverables

### Problem 1:

Create a program that calculates and compares users' calorie intake to their daily needs:

- Constants:
  - Human body's calorie needs = 0.9 * weight(kg) * 24
  - Apple: 75 calories
  - Meat: 45 calories
  - Egg: 128 calories

- Requirements:
  - Ask 3 users about their daily meal and weight
  - Calculate each user's calorie intake and daily needs
  - Print how many users exceed their daily needs
  - Print the total calories consumed by all 3 users

### Problem 2:

Develop a program to analyze rat populations in multiple laboratories:

- For each laboratory, collect:
  - Number of white rats
  - Number of brown rats

- For each rat, collect:
  - Age
  - Gender

- Output:
  - Display how many laboratories have more brown rats than white rats
  - Determine the laboratory with the lowest number of male rats

### Problem 3:

Create a program that manipulates arrays according to specific rules:

- Read an array of N values (X)
- Create a new array (Y) by:
  - Copying one element from X to Y, then skipping two elements
  - After the initial pass, copy the skipped elements to Y
- Display both the original and the new array

### Problem 4:

Implement functions to check for Armstrong numbers:

```csharp
// Return the sum of the cubes of the digits in an integer
int CubeOfDigits(int number)

// Displays if integer is an Armstrong integer
void IsArmstrong(int sum, int number)
```

- Use `CubeOfDigits` to implement `IsArmstrong`
- An Armstrong number is an integer where the sum of the cubes of its digits equals the number itself
- Create a test program that prompts the user to enter an integer and reports whether it's an Armstrong number

## Test Cases

### Test Case 1
Input:
- User 1: Weight 70kg, 2 apples, 1 meat portion, 1 egg
- User 2: Weight 60kg, 1 apple, 2 meat portions, 2 eggs
- User 3: Weight 80kg, 3 apples, 1 meat portion, 0 eggs

Expected Output:
- Number of users exceeding daily needs
- Total calories consumed by all users

### Test Case 2
Input:
- Lab 1: 5 white rats, 7 brown rats
- Lab 2: 8 white rats, 6 brown rats
- Lab 3: 4 white rats, 9 brown rats

Expected Output:
- Number of labs with more brown rats than white rats
- Lab with the lowest number of male rats

### Test Case 3
Input:
- Original array: [1, 2, 3, 4, 5, 6, 7, 8, 9]

Expected Output:
- New array: [1, 4, 7, 2, 3, 5, 6, 8, 9]

### Test Case 4
Input:
- 153
- 370
- 371
- 407

Expected Output:
- Indication of whether each number is an Armstrong number