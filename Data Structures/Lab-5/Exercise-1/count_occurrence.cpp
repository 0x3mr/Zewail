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

        int countOccurrence(T value) {
            int count = 0;
            Node<T>* temp = head;
            while (temp != nullptr) {
                if (temp->getData() == value) { count++;}
                temp = temp->getNext();
            }
            return count;
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
    cout << endl << "#\n#   Testing the countOccurrence functionality\n#" << endl << endl;

    LinkedList<int> myList;

    myList.insertEnd(1);
    myList.insertEnd(2);
    myList.insertEnd(2);
    myList.insertEnd(3);
    myList.insertEnd(4);
    myList.insertEnd(2);
    myList.insertEnd(5);

    cout << "List:" << endl;
    myList.printList();

    int valueToCount = 2;
    int occurrences = myList.countOccurrence(valueToCount);
    
    cout << "Count of occurrences of " << valueToCount << ": " << occurrences << endl;

    cout << endl << "#\n#   End of test for countOccurrence functionality\n#" << endl << endl;

    return 0;
}
