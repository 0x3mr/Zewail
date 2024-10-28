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

        bool find(T key) {
            Node<T>* temp = head;
            while (temp != nullptr) {
                if (temp->getData() == key) { return true; }
                temp = temp->getNext();
            }
            return false;
        }

        bool deleteNodes(T value) {
            bool deleted = false;
            while (find(value))
            {
                Node<T>* nodeToDelete;

                if (head->getData() == value)
                {
                    nodeToDelete = head;
                    head = nodeToDelete->getNext();
                }
                else
                {
                    Node<T>* previousNode = head;
                    while (previousNode->getNext() != nullptr && (previousNode->getNext())->getData() != value) {
                        previousNode = previousNode->getNext();
                    }
                    nodeToDelete = previousNode->getNext();
                    previousNode->setNext(nodeToDelete->getNext());
                }

                delete nodeToDelete;
                itemCount--;
                deleted = true;
            }
            return deleted;
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
    cout << endl << "#\n#   Testing the deleteNodes functionality\n#" << endl;

    LinkedList<int> myList;

    myList.insertEnd(1);
    myList.insertEnd(2);
    myList.insertEnd(3);
    myList.insertEnd(1);
    myList.insertEnd(4);
    myList.insertEnd(1);
    myList.insertEnd(5);

    cout << "List before deleting nodes with value 1:" << endl;
    myList.printList();

    myList.deleteNodes(1);

    cout << "List after deleting nodes with value 1:" << endl;
    myList.printList();

    cout << endl << "#\n#   End of test for deleteNodes functionality\n#" << endl;

    return 0;
}
