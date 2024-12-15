# SOLID Principles and Design Patterns in Pizza Restaurant System

## Design Patterns Applied

### 1. Decorator Pattern
#### SOLID Principles Addressed
- **Open/Closed Principle (OCP)**: The Decorator pattern allows extending pizza functionality (adding toppings) without modifying existing pizza classes.

#### Implementation
- `ToppingDecorator` and its subclasses (`CheeseToppingDecorator`, `OlivesToppingsDecorator`, `MushroomToppingDecorator`) dynamically add toppings to pizzas.
- Each topping decorator wraps the base pizza, adding description and cost without changing the original pizza class.

### 2. Factory Pattern
#### SOLID Principles Addressed
- **Single Responsibility Principle (SRP)**: `PizzaFactory` is solely responsible for creating pizza objects.
- **Open/Closed Principle (OCP)**: New pizza types can be added without modifying existing code.

#### Implementation
- `PizzaFactory.create_pizza()` method encapsulates pizza creation logic.
- Allows easy addition of new pizza types without changing the client code.

### 3. Singleton Pattern
#### SOLID Principles Addressed
- **Single Responsibility Principle (SRP)**: `InventoryManager` manages inventory with a single global instance.
- **Dependency Inversion Principle (DIP)**: Provides a single point of access for inventory management.

#### Implementation
- `InventoryManager` ensures only one instance exists using `__new__` method.
- Centralizes inventory tracking and management.

### 4. Strategy Pattern
#### SOLID Principles Addressed
- **Open/Closed Principle (OCP)**: Different payment methods can be added without modifying existing code.
- **Dependency Inversion Principle (DIP)**: High-level modules depend on payment abstractions.

#### Implementation
- `PaymentStrategy` abstract base class with concrete implementations like `PayPalPayment` and `CreditCardPayment`.
- Allows runtime selection and addition of payment methods.

### 5. Abstract Base Class (Pizza)
#### SOLID Principles Addressed
- **Liskov Substitution Principle (LSP)**: Base `Pizza` class ensures all pizza types can be used interchangeably.
- **Interface Segregation Principle (ISP)**: Defines clear, minimal interface for pizzas.

#### Implementation
- Abstract `Pizza` class with `get_description()` and `get_cost()` methods.
- Concrete pizza classes implement these methods consistently.