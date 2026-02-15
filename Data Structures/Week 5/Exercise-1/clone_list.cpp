#include <iostream>
#include <typeinfo>
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

        LinkedList<T> cloneList() {
            LinkedList<T> clonedList;

            Node<T>* temp = head;
            while (temp != nullptr) {
                clonedList.insertEnd(temp->getData());
                temp = temp->getNext();
            }

            return clonedList;
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
    cout << endl << "#\n#   Testing the cloneList functionality\n#" << endl << endl;

    LinkedList<int> originalList;

    originalList.insertEnd(1);
    originalList.insertEnd(2);
    originalList.insertEnd(3);
    originalList.insertEnd(4);
    originalList.insertEnd(5);

    cout << "Original List:" << endl;
    originalList.printList();

    LinkedList<int> clonedList = originalList.cloneList();

    cout << "Cloned List:" << endl;
    clonedList.printList();

    cout << endl << "#\n#   End of test for cloneList functionality\n#" << endl << endl;

    return 0;
}
