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
            if (position == 1) {
                nodeToDelete = head;
                head = head->getNext();
            } else {
                Node<T>* prevNode = head;
                for (int i = 1; i < position - 1; ++i) {
                    prevNode = prevNode->getNext();
                }
                nodeToDelete = prevNode->getNext();
                prevNode->setNext(nodeToDelete->getNext());
            }

            delete nodeToDelete;
            itemCount--;
            return true;
        }

        void printList() {
            Node<T>* current = head;
            while (current != nullptr) {
                cout << current->getData() << " ";
                current = current->getNext();
            }
            cout << endl;
        }

        int getItemCount() { return itemCount; }
};

int main() {
    LinkedList<int> list;

    list.insert(1, 10);
    list.insert(2, 20);
    list.insert(3, 30);
    list.insert(2, 15);

    cout << "List after insertions: ";
    list.printList();

    cout << "Data at position 3: " << list.getNodeDataAt(3) << endl;

    list.remove(2);

    cout << "List after removal: ";
    list.printList();

    return 0;
}
