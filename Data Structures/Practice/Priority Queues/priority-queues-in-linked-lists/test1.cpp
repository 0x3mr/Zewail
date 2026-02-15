#include <iostream>
using namespace std;

template<class T>
class Node {
    private:
        T data;
        Node* next;
        int priority;

    public:
        Node(T data, int priority = 1) {
            this->data = data;
            this->priority = priority;
        }

        void setData(T data) { this->data = data; }
        void setNext(Node* newNode) { next = newNode; }

        int getPriority() { return priority; }
        T getData() { return data; }
        Node* getNext() { return next; }
};

template<class T>
class PriorityQueue {
    private:
        Node<T>* front = nullptr;
        Node<T>* rear = nullptr;
    public:
        bool isEmpty() { return (front == nullptr); }
        
        bool enqueue(T data, int priority = 1) {
            Node<T>* nodeToAdd = new Node<T>(data, priority);

            if (isEmpty()) {
                front = nodeToAdd;
                rear = nodeToAdd;
                return true;
            }

            if (nodeToAdd->getPriority() > front->getPriority()) {
                nodeToAdd->setNext(front);
                front = nodeToAdd;
                return true;
            }

            Node<T>* temp = front;
            while (temp->getNext() != nullptr && temp->getNext()->getPriority() >= nodeToAdd->getPriority()) {
                temp = temp->getNext();
            }

            nodeToAdd->setNext(temp->getNext());
            temp->setNext(nodeToAdd);

            if (nodeToAdd->getNext() == nullptr) {
                rear = nodeToAdd;
            }

            return true;
        }

        Node<T>* dequeue() {
            if (isEmpty()) { return nullptr; }

            Node<T>* nodeToDequeue = front;
            front = front->getNext();

            if (front == nullptr) { rear = nullptr; }

            return nodeToDequeue;
        }

        void display() {
            Node<T>* temp = front;
            while (temp != nullptr) {
                cout << "Data: " << temp->getData() << " | Priority: " << temp->getPriority() << endl;
                temp = temp->getNext();
            }
        }
};

int main() {
    PriorityQueue<int> amr;

    amr.enqueue(10, 2);
    amr.enqueue(5);  // Default priority = 1
    amr.enqueue(20, 1);
    amr.enqueue(15, 3);

    cout << "Queue contents based on priority:" << endl;
    amr.display();

    cout << "\nDequeuing elements:" << endl;
    while (!amr.isEmpty()) {
        cout << amr.dequeue()->getData() << endl;
    }

    return 0;
}