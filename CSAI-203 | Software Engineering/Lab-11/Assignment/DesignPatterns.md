# Design Patterns in Pizza Restaurant System

## Design Patterns Explanation

### 1. Decorator Pattern
#### Before Pattern
Initially, adding toppings would require:
- Creating a new class for each pizza and topping combination
- Massive class explosion (e.g., MargheritaWithCheese, MargheritaWithOlives, etc.)

#### After Pattern
- Dynamic topping addition
- Flexible and extensible
- Cost and description automatically updated

#### Code Example
```python
# Without Decorator Pattern
class MargheritaWithCheese:
    def cost(self):
        return 6.0

# With Decorator Pattern
class CheeseToppingDecorator(ToppingDecorator):
    def get_cost(self):
        return self._pizza.get_cost() + 1.0
```

### 2. Singleton Pattern
#### Purpose
Ensure only one inventory manager exists across the application.

#### Implementation
```python
class InventoryManager:
    _instance = None

    def __new__(cls):
        if cls._instance is None:
            cls._instance = super().__new__(cls)
        return cls._instance
```

### Overengineering Example
#### Potential Overengineering Scenario
```python
# Overengineered Topping System
class AbstractToppingFactory:
    @staticmethod
    def create_topping(topping_type, pizza, additional_params=None):
        # Unnecessarily complex topping creation
        pass

class ToppingConfigurationManager:
    def __init__(self):
        self.topping_configurations = {}
        self.topping_cost_matrix = {}
        # Overly complex configuration management
```

#### Why It's Overengineered
- Introduces unnecessary complexity
- Creates abstraction layers that don't provide significant value
- Makes the system harder to understand and maintain
- Adds performance overhead
- Increases development and maintenance costs

### Key Takeaways
- Design patterns should simplify, not complicate
- Only apply patterns when they provide clear benefits
- Keep the solution as simple as possible
- Focus on solving the actual problem at hand