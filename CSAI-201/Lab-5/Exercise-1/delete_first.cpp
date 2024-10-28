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

        void insertEnd(T data) {
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
        }

        void deleteFirst() {
            if (head == nullptr) { return; }

            Node<T>* nodeToDelete = head;

            if (itemCount == 1) {
                head = nullptr;
            } else {
                head = head->getNext();
            }

            itemCount--;
            delete nodeToDelete;
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
    cout << endl << "#\n#   Testing the deleteFirst functionality\n#" << endl << endl;

    LinkedList<int> myList;

    myList.insertEnd(1);
    myList.insertEnd(2);
    myList.insertEnd(3);
    myList.insertEnd(4);
    myList.insertEnd(5);

    cout << "List before deleting the first element:" << endl;
    myList.printList();

    myList.deleteFirst();

    cout << "List after deleting the first element:" << endl;
    myList.printList();

    cout << endl << "#\n#   End of test for deleteFirst functionality\n#" << endl << endl;

    return 0;
}
