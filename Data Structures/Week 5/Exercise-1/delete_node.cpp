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

        bool deleteNode(T value) {
            if (head == nullptr) return false;

            Node<T>* nodeToDelete;

            if (head->getData() == value) {
                nodeToDelete = head;
                head = head->getNext();
            } else {
                Node<T>* previousNode = head;
                while (previousNode->getNext() != nullptr && (previousNode->getNext())->getData() != value) {
                    previousNode = previousNode->getNext();
                }
                if (previousNode->getNext() == nullptr) return false;

                nodeToDelete = previousNode->getNext();
                previousNode->setNext(nodeToDelete->getNext());
            }

            delete nodeToDelete;
            itemCount--;
            return true;
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
    cout << endl << "#\n#   Testing the deleteNode functionality\n#" << endl << endl;

    LinkedList<int> myList;

    myList.insertEnd(1);
    myList.insertEnd(2);
    myList.insertEnd(3);
    myList.insertEnd(1);
    myList.insertEnd(4);
    myList.insertEnd(3);
    myList.insertEnd(5);

    cout << "List before deleting a node with value 3:" << endl;
    myList.printList();

    myList.deleteNode(3);

    cout << "List after deleting the node with value 3:" << endl;
    myList.printList();

    cout << endl << "#\n#   End of test for deleteNode functionality\n#" << endl << endl;

    return 0;
}
