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

        bool isEmpty() { return (head == nullptr); }

        Node<T>* getHead() { return head; }

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

        void merge(LinkedList<T> ListToMerge)
        {
            if (head != nullptr && !(ListToMerge.isEmpty()))
            {
                Node<T>* temp = head;

                while (temp->getNext() != nullptr) {
                    temp = temp->getNext();
                }
                temp->setNext(ListToMerge.getHead());
            }
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
    cout << endl << "#\n#   Testing the merge function\n#" << endl << endl;

    LinkedList<int> list1;
    LinkedList<int> list2;

    list1.insert(1, 1);
    list1.insert(2, 2);
    list1.insert(3, 3);
    list1.insert(4, 4);
    list1.insert(5, 5);

    cout << "List 1 before merging: " << endl;
    list1.printList();

    list2.insert(1, 6);
    list2.insert(2, 7);
    list2.insert(3, 8);

    cout << "List 2 before merging: " << endl;
    list2.printList();

    list1.merge(list2);

    cout << "List 1 after merging with List 2: " << endl;
    list1.printList();

    cout << endl << "#\n#   End of testing\n#" << endl << endl;

    return 0;
}
