#include <iostream>
using namespace std;

template<class T>
class Node {
    private:
        T data;
        Node* next;
    public:
        Node(T data) {
            this->data = data;
        }

        void setData(T data) { this->data = data; }
        void setNext(Node* newNode) { next = newNode; }

        T getData() { return data; }
        Node* getNext() { return next; }
};

template<class T>
class Queue {
    private:
        Node<T>* front = nullptr;
        Node<T>* rear = nullptr;
        int maxSize;
    public:
        Queue(int max) {
            maxSize = max;
        }

        bool isEmpty() { return (front == nullptr); }
        
        bool isFull() {
            int AmountOfNodes = 0;

            Node<T>* temp = front;
            
            while (temp != nullptr)
            {
                AmountOfNodes++;
                if (AmountOfNodes == maxSize) { return true; }
                temp = temp->getNext();
            }

            return false;
        }

        bool enqueue(T data) {
            if (isFull()) { return false; }

            Node<T>* nodeToAdd = new Node<T>(data);

            if (isEmpty())
            {
                front = nodeToAdd;
                rear = nodeToAdd;
            }
            else
            {
                rear->setNext(nodeToAdd);
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
};

int main() {
    cout << "#\n# Testing of Queue\n#\n" << endl;
    Queue<int> queue(5);

    cout << "Is the queue full?" << endl;
    cout << queue.isFull() << endl;

    cout << "\nIs the queue empty?" << endl;
    cout << queue.isEmpty() << endl;

    cout << "\nEnqueuing 5 elements:" << endl;
    cout << queue.enqueue(613) << endl;
    cout << queue.enqueue(2) << endl;
    cout << queue.enqueue(3) << endl;
    cout << queue.enqueue(4) << endl;
    cout << queue.enqueue(5) << endl;

    cout << "\nAttempting to enqueue another element (should fail):" << endl;
    cout << queue.enqueue(6) << endl;

    cout << "\nDequeuing an element:" << endl;
    Node<int>* dequeuedNode = queue.dequeue();
    cout << " - Dequeued element: " << dequeuedNode->getData() << endl;

    return 0;
}