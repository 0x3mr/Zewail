#include <iostream>
using namespace std;

template <class T>
class Node {
    private:
        T data;
        Node* next = nullptr;
    public:
        Node(T data) {
            this->data = data;
            next = nullptr;
        }

        void setData(T data) { this->data = data; }
        void setNext(Node* newNode) { next = newNode; }

        T getData() { return data; }
        Node* getNext() { return next; }
};

template <class T>
class LinkedList {
    private:
        int itemCount;
        Node<T>* head;
    public:
        LinkedList() {
            head = nullptr;
            itemCount = 0;
        }

        bool insertEnd(T data) {
            Node<T>* newNode = new Node<T>(data);
            if (head == nullptr) {
                head = newNode;
            } else {
                Node<T>* temp = head;
                while (temp->getNext() != nullptr) {
                    temp = temp->getNext();
                }
                temp->setNext(newNode);
            }
            itemCount++;
            return true;
        }

        bool find(T key) {
            Node<T>* temp = head;
            while (temp != nullptr) {
                if (temp->getData() == key) {
                    return true;
                }
                temp = temp->getNext();
            }
            return false;
        }

        void printList() {
            Node<T>* temp = head;
            while (temp != nullptr) {
                cout << temp->getData() << endl;
                temp = temp->getNext();
            }
            cout << "------------------" << endl;
        }
};

int main() {
    cout << endl << "#\n#   Testing the insertEnd functionality\n#" << endl;

    LinkedList<int> amr;

    amr.insertEnd(10);
    amr.insertEnd(20);
    amr.insertEnd(30);
    amr.insertEnd(40);
    amr.insertEnd(50);

    cout << endl << "Current list after inserting at the end:" << endl;
    amr.printList();

    cout << endl << "#\n#   End of test for insertEnd functionality\n#" << endl;

    return 0;
}
