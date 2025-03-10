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

        Node<T>* getNodeAt(int position) {
            if (position < 1 || position > itemCount) { return nullptr; }
            if (position == 1) { return head; }

            Node<T>* temp = head;
            for (int i = 1; i < position; i++) {
                temp = temp->getNext();
            }

            return temp;
        }

        T getNodeDataAt(int position) {
            if (position < 1 || position > itemCount) { throw out_of_range("Position out of range"); }
            return getNodeAt(position)->getData();
        }

        bool insert(int position, T data) {
            if (position < 1 || position > itemCount + 1) { return false; }

            Node<T>* newNode = new Node<T>(data);

            if (position == 1)
            {
                newNode->setNext(head);
                head = newNode;
            }
            else
            {
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

        bool remove(int position) {
            if (position < 1 || position > itemCount) {
                return false;
            }

            Node<T>* nodeToDelete;

            if (position == 1)
            {
                nodeToDelete = head;
                head = nodeToDelete->getNext();
            }
            else
            {
                Node<T>* previousNode = head;
                for (int i = 1; i < position - 1; i++) {
                    previousNode = previousNode->getNext();
                }
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
        }

        int getItemCount() { return itemCount; }
};

int main() {
    cout << endl << "#\n#   This code is being tested by 1-indexing\n#   and not zero indexing.\n#" << endl << endl;

    LinkedList<int> amr;

    amr.insert(1, 1);
    amr.insert(1, 2);
    amr.insert(1, 3);

    amr.printList();

    cout << "------------------" << endl;
    cout << amr.getNodeDataAt(1) << endl;

    amr.remove(2);

    cout << "------------------" << endl;
    cout << amr.getNodeDataAt(2) << endl;

    cout << "------------------" << endl;
    cout << amr.getItemCount() << endl;

    cout << endl << "#\n#   This code is being tested by 1-indexing\n#   and not zero indexing.\n#" << endl << endl;

    return 0;
}
