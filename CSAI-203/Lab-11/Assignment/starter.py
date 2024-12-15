from abc import ABC, abstractmethod

# Pizza Base Abstract Class
class Pizza(ABC):
    @abstractmethod
    def get_description(self):
        pass
    
    @abstractmethod
    def get_cost(self):
        pass

# Concrete Pizza Classes
class MargheritaPizza(Pizza):
    def get_description(self):
        return "Margherita Pizza"
    
    def get_cost(self):
        return 5.0

class PepperoniPizza(Pizza):
    def get_description(self):
        return "Pepperoni Pizza"
    
    def get_cost(self):
        return 6.0

# Decorator Pattern for Toppings
class ToppingDecorator(Pizza):
    def __init__(self, pizza):
        self._pizza = pizza

    def get_description(self):
        return self._pizza.get_description()
    
    def get_cost(self):
        return self._pizza.get_cost()

# Concrete Topping Decorators
class CheeseToppingDecorator(ToppingDecorator):
    def __init__(self, pizza):
        super().__init__(pizza)
    
    def get_description(self):
        return f"{self._pizza.get_description()}, Cheese"
    
    def get_cost(self):
        return self._pizza.get_cost() + 1.0

class OlivesToppingsDecorator(ToppingDecorator):
    def __init__(self, pizza):
        super().__init__(pizza)
    
    def get_description(self):
        return f"{self._pizza.get_description()}, Olives"
    
    def get_cost(self):
        return self._pizza.get_cost() + 0.5

class MushroomToppingDecorator(ToppingDecorator):
    def __init__(self, pizza):
        super().__init__(pizza)
    
    def get_description(self):
        return f"{self._pizza.get_description()}, Mushrooms"
    
    def get_cost(self):
        return self._pizza.get_cost() + 0.7

# Singleton Inventory Manager
class InventoryManager:
    _instance = None
    _inventory = {
        "Margherita": 10,
        "Pepperoni": 10,
        "Cheese": 15,
        "Olives": 10,
        "Mushrooms": 12,
    }

    def __new__(cls):
        if cls._instance is None:
            cls._instance = super().__new__(cls)
        return cls._instance

    def check_and_decrement(self, item: str) -> bool:
        if self._inventory.get(item, 0) > 0:
            self._inventory[item] -= 1
            return True
        return False

    def get_inventory(self):
        return self._inventory

# Payment Strategy Pattern
class PaymentStrategy(ABC):
    @abstractmethod
    def pay(self, amount):
        pass

class PayPalPayment(PaymentStrategy):
    def pay(self, amount):
        print(f"Paid ${amount:.2f} using PayPal")
        return True

class CreditCardPayment(PaymentStrategy):
    def pay(self, amount):
        print(f"Paid ${amount:.2f} using Credit Card")
        return True

# Pizza Factory
class PizzaFactory:
    @staticmethod
    def create_pizza(pizza_type):
        inventory_manager = InventoryManager()
        
        if pizza_type == '1':
            if inventory_manager.check_and_decrement("Margherita"):
                return MargheritaPizza()
        elif pizza_type == '2':
            if inventory_manager.check_and_decrement("Pepperoni"):
                return PepperoniPizza()
        
        print("Pizza not available!")
        return None

def main():
    inventory_manager = InventoryManager()

    print("Welcome to the Pizza Restaurant!")

    while True:
        print("\nChoose your base pizza:")
        print("1. Margherita ($5.0)")
        print("2. Pepperoni ($6.0)")
        print("0 => to exit")
        pizza_choice = input("Enter the number of your choice: ")
        
        if pizza_choice == '0':
            break
        
        # Create base pizza
        pizza = PizzaFactory.create_pizza(pizza_choice)
        if not pizza:
            continue

        # Add toppings
        while True:
            print("\nAvailable toppings:")
            print("1. Cheese ($1.0)")
            print("2. Olives ($0.5)")
            print("3. Mushrooms ($0.7)")
            print("4. Finish order")
            topping_choice = input("Enter the number of your choice: ")
            
            # Add toppings
            if topping_choice == "1":
                if inventory_manager.check_and_decrement("Cheese"):
                    pizza = CheeseToppingDecorator(pizza)
                else:
                    print("Cheese not available!")
            elif topping_choice == "2":
                if inventory_manager.check_and_decrement("Olives"):
                    pizza = OlivesToppingsDecorator(pizza)
                else:
                    print("Olives not available!")
            elif topping_choice == "3":
                if inventory_manager.check_and_decrement("Mushrooms"):
                    pizza = MushroomToppingDecorator(pizza)
                else:
                    print("Mushrooms not available!")
            elif topping_choice == "4":
                break
            else:
                print("Invalid choice!")

        # Display final pizza details
        print("\nYour order:")
        print(f"Description: {pizza.get_description()}")
        print(f"Total cost: ${pizza.get_cost():.2f}")

        # Payment
        print("\nChoose Payment Method:")
        print("1. PayPal")
        print("2. Credit Card")
        payment_choice = input("Enter payment method: ")
        
        payment_strategy = None
        if payment_choice == "1":
            payment_strategy = PayPalPayment()
        elif payment_choice == "2":
            payment_strategy = CreditCardPayment()
        else:
            print("Invalid payment method!")
            continue

        # Process payment
        if payment_strategy.pay(pizza.get_cost()):
            print("Payment successful!")

        # Show final inventory
        print("\nRemaining Inventory:")
        print(inventory_manager.get_inventory())

if __name__ == "__main__":
    main()