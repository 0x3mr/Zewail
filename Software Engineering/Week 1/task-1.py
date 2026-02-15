from abc import ABC, abstractmethod

class Account:
    def __init__(self, balance=0):
        self._balance = balance

    def deposit(self, amount):
        if (amount <= 0):
            raise ValueError("Deposit amount must be positive!")
        
        self._balance += amount
    
    def get_balance(self):
        return self._balance
    
    @abstractmethod
    def withdraw(self, amount):
        pass

class SavingsAccount(Account):
    def __init__(self, balance=0):
        super().__init__(balance)
        self.interest_rate = 0.05
    
    def calculate_interest(self):
        return self._balance * self.interest_rate
    
    def withdraw(self, amount):
        raise NotImplementedError("This feature is disabled in Savings Account!")

class CheckingAccount(Account):
    def withdraw(self, amount):
        if (self._balance - amount < 0):
            raise ValueError("Insufficient balance!")
        else:
            self._balance -= amount

# Test Case 1

savings = SavingsAccount(1000)
savings.deposit(500)
print(savings.get_balance())
print(savings.calculate_interest())
