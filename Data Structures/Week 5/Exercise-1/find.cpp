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

        bool insert(int position, T data) {
            if (position < 1 || position > itemCount + 1) { return false; }

            Node<T>* newNode = new Node<T>(data);

            if (position == 1) {
                newNode->setNext(head);
                head = newNode;
            } else {
                Node<T>* previousNode = head;
                for (int i = 1; i < position - 1; i++) {
                    previousNode = previousNode->getNext();
                }
                newNode->setNext(previousNode->getNext());
                previousNode->setNext(newNode);
            }
            itemCount++;
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
    cout << endl << "#\n#   Testing the find functionality\n#" << endl;

    LinkedList<int> amr;

    amr.insert(1, 10);
    amr.insert(2, 20);
    amr.insert(3, 30);
    amr.insert(4, 40);
    amr.insert(5, 50);

    cout << endl << "Current list:" << endl;
    amr.printList();

    int searchKey1 = 30;

    if (amr.find(searchKey1))
    {
        cout << "Finding " << searchKey1 << ": Found" << endl;
    }
    else
    {
        cout << "Finding " << searchKey1 << ": Not Found" << endl;
    }

    int searchKey2 = 100;

    if (amr.find(searchKey2))
    {
        cout << "Finding " << searchKey2 << ": Found" << endl;
    }
    else
    {
        cout << "Finding " << searchKey2 << ": Not Found" << endl;
    }

    cout << endl << "#\n#   End of test for find functionality\n#" << endl;

    return 0;
}
