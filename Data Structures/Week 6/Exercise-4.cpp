#include <iostream>
using namespace std;

template<class T>
class Node {
    private:
        T data;
        Node* next = nullptr;
    public:
        Node(T data) {
            this->data = data;
        }
        
        void setData(T data) { this->data = data; }
        void setNext(Node* node) { next = node; }

        T getData() { return data; }
        Node* getNext() { return next; }
};

template<class T>
class Stack {
    private:
        Node<T>* top;

        int maxSize;
        int itemCount;

    public:
        Stack(int maxSize) {
            top = nullptr;
            this->maxSize = maxSize;
            itemCount = 0;
        }

        int getMaxSize() { return maxSize; }
        int getItemCount() { return itemCount; }

        Node<T>* getTop() { return top; }

        bool isEmpty() {
            return (top == nullptr);
        }

        bool isFull() {
            return (itemCount == maxSize);
        }

        bool push(T data) {
            if (isFull()) return false;

            Node<T>* newNode = new Node<T>(data);
            newNode->setNext(top);
            top = newNode;

            itemCount++;
            return true;
        }

        Node<T>* pop() {
            if (isEmpty()) return nullptr;

            Node<T>* getTop = top;
            top = top->getNext();

            itemCount--;
            return getTop;
        }

        T peek() {
            if (isEmpty()) { return T(); }
            return top->getData();
        }

        void printStack(Stack<T> instance)
        {
            Stack<T> temp = instance;

            if (temp.isEmpty()) { return; }

            Node<T>* popedNode;

            while (!temp.isEmpty()) {
                popedNode = temp.pop();
                cout << popedNode->getData() << endl;
            }
        }

        Stack<T> reverse(Stack<T> instance)
        {
            Stack<T> temp = instance;

            if (temp.isEmpty()) { return instance; }

            Node<T>* popedNode;
            int array[temp.getMaxSize()];

            for (int i = 0; !temp.isEmpty(); i++) {
                popedNode = temp.pop();
                array[i] = popedNode->getData();
            }

            for (int i = 0; i < (sizeof(array) / sizeof(array[0])); i++) { temp.push(array[i]); }

            return temp;
        }

        bool replaceAll(Stack<T> &instance, T value, T newValue)
        {
            Stack<T> temp = instance;

            if (temp.isEmpty()) { return false; }

            Node<T>* popedNode;
            int array[temp.getMaxSize()];

            for (int i = temp.getMaxSize() - 1; !temp.isEmpty(); i--) {
                popedNode = temp.pop();
                array[i] = popedNode->getData();
            }

            for (int i = 0; i < (sizeof(array) / sizeof(array[0])); i++) {
                if (array[i] == value) {
                    temp.push(newValue);
                } else {
                    temp.push(array[i]);
                }
            }

            return true;
        }

        Stack<T> collapse(Stack<T> &instance)
        {
            Stack<T> temp = instance;

            if (temp.isEmpty()) { return instance; }

            Node<T>* popedNode;
            int array[temp.getMaxSize()];

            for (int i = temp.getMaxSize() - 1; !temp.isEmpty(); i--) {
                popedNode = temp.pop();
                array[i] = popedNode->getData();
            }

            if (itemCount % 2 == 0)
            {
                for (int i = 0; i < (sizeof(array) / sizeof(array[0])); i += 2)
                {
                    temp.push(array[i] + array[i+1]);
                }
            }
            else
            {
                temp.push(array[0]);
                for (int i = 1; i < (sizeof(array) / sizeof(array[0])); i += 2)
                {
                    temp.push(array[i] + array[i+1]);
                }
            }

            return temp;
        }
};


class Car {
    private:
        int car_number;
        int engine_number;

    public:
        Car(int car_number, int engine_number) {
            this->car_number = car_number;
            this->engine_number = engine_number;
        }

        Car() : car_number(0), engine_number(0) {}

        int getCarNumber() { return car_number; }
        int getEnginerNumber() { return engine_number; }

        //
        // I hate operator overloading
        //
        friend ostream& operator<<(ostream& os, const Car& car)
        {
            os << "Car Number: " << car.car_number << ", Engine Number: " << car.engine_number;
            return os;
        }
};

int main() {
    cout << "#\n# Testing of Stack\n#\n" << endl;

    Stack<Car> cars(3);

    Car amr(201, 5001);
    Car amrTany(202, 5002);
    Car amrTalet(203, 5003);

    cout << "\nPushing 3 elements to the stack:" << endl;
    cout << cars.push(amr) << endl;
    cout << cars.push(amrTany) << endl;
    cout << cars.push(amrTalet) << endl;

    cars.printStack(cars);

   return 0;
}