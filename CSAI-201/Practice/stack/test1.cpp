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

    Stack<int> amr(5);

    cout << "\nIs the stack empty?" << endl;
    cout << amr.isEmpty() << endl << endl;

    cout << "\nIs the stack full?" << endl;
    cout << amr.isFull() << endl << endl;

    cout << "\nPushing 5 elements to the stack:" << endl;
    cout << amr.push(1) << endl;
    cout << amr.push(2) << endl;
    cout << amr.push(3) << endl;
    cout << amr.push(4) << endl;
    cout << amr.push(5) << endl;

    cout << "\nPeeking at the top element:" << endl;
    cout << amr.peek() << endl;

    cout << "\nPoping the top element:" << endl;
    cout << " - Poped element: " << amr.pop() << endl;
    cout << " - Top element:   " << amr.peek() << endl;

    cout << "\nPoping the top element again:" << endl;
    
    cout << " - Poped element: " << amr.pop()->getData() << endl;
    cout << " - Top element:   " << amr.peek() << endl;

   return 0;
}