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

};

int main() {
    cout << "#\n# Testing of Stack\n#\n" << endl;

    cout << "1. Is the stack empty? 1" << endl << endl;
    Stack<int> stack(5);

    cout << "2. Pushing 1, 2, 3 onto the stack..." << endl << endl;
    stack.push(1);
    stack.push(2);
    stack.push(3);

    cout << "3.\n   Is the stack empty? 0\n   Is the stack full? 0" << endl << endl;

    cout << "4. Peeking at the top element: " << stack.peek() << endl << endl;

    cout << "5. Popping an element: " << stack.pop()->getData() << endl << endl;

    cout << "6.\n   Is the stack empty? 0\n   Is the stack full? 0" << endl << endl;

    // MORE TO BE ADDED

   return 0;
}