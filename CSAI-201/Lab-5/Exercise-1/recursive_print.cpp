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

        Node<T>* getNodeAt(int position) {
            if (position < 1 || position > itemCount) { return nullptr; }
            if (position == 1) { return head; }

            Node<T>* temp = head;
            for (int i = 1; i < position; i++) {
                temp = temp->getNext();
            }

            return temp;
        }

        void recPrint(Node<T>* node) {
            if (node == nullptr) { return; }
            cout << node->getData() << endl;
            node = node->getNext();
            recPrint(node);
        }
};  

int main() {
    cout << endl << "#\n#   Testing the recPrint function\n#" << endl << endl;

    LinkedList<int> list1;

    list1.insert(1, 1);
    list1.insert(2, 2);
    list1.insert(3, 3);
    list1.insert(4, 4);
    list1.insert(5, 5);

    cout << "Printing using recursion: " << endl;
    list1.recPrint(list1.getNodeAt(1));

    cout << endl << "#\n#   End of testing\n#" << endl << endl;

    return 0;
}
