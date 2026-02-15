# Lab 1

Deliverables (80% of Total Grade)

### Step 1: Base Class Account (30%)
Create an abstract base class `Account` that represents a generic bank account:
- Attributes:
  - Protected attribute `_balance` (initial value is 0)
- Methods:
  - `deposit(self, amount)`: Adds to the `_balance`. Ensure the deposit amount is positive. Raise a `ValueError` if it isn't.
  - `get_balance(self)`: Returns the current balance as a float.
- Abstract Methods:
  - `withdraw(self, amount)`: An abstract method to be implemented by subclasses.

### Step 2: Subclass SavingsAccount (25%)
Create a `SavingsAccount` class that inherits from `Account`:
- Additional Attributes:
  - `interest_rate`: A float representing the interest rate (default is 0.05 or 5%).
- Methods:
  - `calculate_interest(self)`: Returns the interest based on the current balance (interest = balance * interest_rate).
  - Implement the `withdraw(self, amount)` method. This should raise a `NotImplementedError` since withdrawals are not allowed from savings accounts.

### Step 3: Subclass CheckingAccount (25%)
Create a `CheckingAccount` class that inherits from `Account`:
- Methods:
  - Implement the `withdraw(self, amount)` method. Ensure that the withdrawal doesn't result in a negative balance. If the balance is insufficient, raise a `ValueError`.

## Test Cases (20% of Total Grade)

Implement and pass the following test cases:

### Test Case 1
1. Create a `SavingsAccount` with an initial balance of 1000.
2. Deposit 500 into the account.
3. Verify the balance is 1500.
4. Calculate interest and expect it to be 75.

```python
savings = SavingsAccount(1000)
savings.deposit(500)
print(savings.get_balance())
print(savings.calculate_interest())
```

### Test Case 2
1. Create a `CheckingAccount` with an initial balance of 500.
2. Deposit 200 into the account.
3. Withdraw 400 from the account.
4. Verify the balance is 300.
5. Attempt to withdraw 500 and expect a `ValueError`.

```python
checking = CheckingAccount(500)
checking.deposit(200)
checking.withdraw(400)
print(checking.get_balance())
try:
    checking.withdraw(500)
except ValueError as e:
    print(e)
```

### Test Case 3
1. Create a `SavingsAccount` with an initial balance of 1000.
2. Attempt to withdraw 100 and expect a `NotImplementedError`.

```python
savings = SavingsAccount(1000)
try:
    savings.withdraw(100)
except NotImplementedError as e:
    print(e)
```

### Test Case 4
1. Create a `CheckingAccount` with an initial balance of 500.
2. Attempt to deposit -100 and expect a `ValueError`.

```python
checking = CheckingAccount(500)
try:
    checking.deposit(-100)
except ValueError as e:
    print(e)
```

## Grading Criteria

- Code Implementation (80%):
  - Step 1 (Base Class Account): 30%
  - Step 2 (Subclass SavingsAccount): 25%
  - Step 3 (Subclass CheckingAccount): 25%
  - Test Cases: 20%

- Questions (20%): Based on your understanding of key OOP concepts and the implemented code.