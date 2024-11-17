from abc import ABC, abstractmethod

class Observer(ABC):
    @abstractmethod
    def update(self, discount):
        pass

class EmailSubscriber(Observer):
    def update(self, discount):
        print(f"Email Notification: New discount applied: {discount}%")

class MobileAppSubscriber(Observer):
    def update(self, discount):
        print(f"Mobile App Notification: New discount applied: {discount}%")

class Subject(ABC):
    @abstractmethod
    def add_observer(self, observer):
        pass

    @abstractmethod
    def remove_observer(self, observer):
        pass

    @abstractmethod
    def notify_observers(self):
        pass

    @abstractmethod
    def apply_discount(self, discount):
        pass

class Product(Subject):
    def __init__(self, name):
        self._name = name
        self._observers = []
        self._discount = 0

    def add_observer(self, observer):
        self._observers.append(observer)

    def remove_observer(self, observer):
        self._observers.remove(observer)

    def notify_observers(self):
        for observer in self._observers:
            observer.update(self._discount)

    def apply_discount(self, discount):
        print(f"\n{self._name}: Applying new discount of {discount}%")
        self._discount = discount
        self.notify_observers()

if __name__ == "__main__":
    product = Product("Gaming Laptop")
    
    email_subscriber = EmailSubscriber()
    mobile_app_subscriber = MobileAppSubscriber()
    
    product.add_observer(email_subscriber)
    product.add_observer(mobile_app_subscriber)
    
    product.apply_discount(10)
    product.apply_discount(20)
    
    product.remove_observer(mobile_app_subscriber)
    
    product.apply_discount(30)
