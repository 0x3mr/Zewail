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

        // bool isEmpty() { return (head == nullptr) ? true : false; }
        bool isEmpty() { return (head == nullptr); }

        Node<T>* getHead() { return head; }

        Node<T>* getNodeAt(int position) {
            if (position < 1 || position > itemCount) { return nullptr; }
            if (position == 1) { return head; }

            Node<T>* temp = head;
            for (int i = 1; i < position; i++) {
                temp = temp->getNext();
            }

            return temp;
        }

        LinkedList<T> cloneList() {
            LinkedList<T> amr;

            if (head != nullptr)
            {
                Node<T>* temp = head;

                for (int i = 1; temp != nullptr; i++)
                {
                    amr.insert(i, temp->getData());
                    temp = temp->getNext();
                }
            }

            return amr;
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

        void insertEnd(T data) {
            Node<T>* newNode = new Node<T>(data);

            if (head == nullptr)
            {
                head = newNode;
            }
            else
            {
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

            if (itemCount == 1)
            {
                head = nullptr;
            }
            else
            {
                head = head->getNext();
            }

            if (itemCount > 0) { itemCount--; }
            delete nodeToDelete;
            return;
        }

        void deleteLast() {
            if (head == nullptr) { return; }

            Node<T>* nodeToDelete = head;

            if (itemCount == 1)
            {
                head == nullptr;
            }
            else
            {
                Node<T>* temp = head;
                for (int i = 1; i < itemCount - 1; i++) {
                    temp = temp->getNext();
                }
                nodeToDelete = temp->getNext();
                temp->setNext(nullptr);
            }

            if (itemCount > 0) { itemCount--; }
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

        int getItemCount() { return itemCount; }

        bool find(T key) {
            Node<T>* temp = head;
            while (temp != nullptr) {
                if (temp->getData() == key) { return true; }
                temp = temp->getNext();
            }
            return false;
        }

        int countOccurrence(T value) {
            int count = 0;
            Node<T>* temp = head;
            while (temp != nullptr) {
                if (temp->getData() == value) { count++; }
                temp = temp->getNext();
            }
            return count;
        }

        void recPrint(Node<T>* node) {
            if (node == nullptr) { return; }
            cout << node->getData() << endl;
            node = node->getNext();
            recPrint(node);
        }

        int recSum(Node<T>* node) {
            if (node == nullptr) { return 0; }
            if (typeid(node->getData()) == typeid(int)) {
                return node->getData() + recSum(node->getNext());
            } else {
                return 0 + recSum(node->getNext());
            }
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

        bool deleteNode(T value) {
            if (find(value))
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
                return true;
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

        void reverse() {
            if (head != nullptr)
            {
                T data[itemCount];

                Node<T>* temp = head;
                for (int i = itemCount - 1; temp != nullptr; i--) {
                    data[i] = temp->getData();
                    temp = temp->getNext();
                }

                temp = head;
                for (int i = 0; temp != nullptr; i++) {
                    temp->setData(data[i]);
                    temp = temp->getNext();
                }
            }
            else
            {
                cout << "Your list is empty!" << endl;
            }
        }
};  

int main() {
    cout << endl << "#\n#   This code is being tested by 1-indexing\n#   and not zero indexing.\n#" << endl << endl;

    LinkedList<int> amr;

    amr.insert(1, 1);
    amr.insert(2, 2);
    amr.insert(3, 3);
    amr.insert(4, 4);
    amr.insert(5, 5);

    amr.printList();

    cout << amr.find(7) << endl;
    cout << amr.find(3) << endl;

    cout << "------------------" << endl;

    amr.insertEnd(1); // pos 7
    amr.insertEnd(1); // pos 8

    cout << amr.countOccurrence(1) << endl;

    cout << "------------------" << endl;

    amr.recPrint(amr.getNodeAt(1));

    cout << "------------------" << endl;
    cout << amr.getItemCount() << endl;
    cout << "------------------" << endl;

    amr.deleteFirst();
    amr.printList();
    cout << "pre 1: " << amr.getItemCount() << endl;
    cout << "------------------" << endl;

    amr.deleteLast();
    amr.printList();
    cout << "pre 2: " << amr.getItemCount() << endl;
    cout << "------------------" << endl;

    amr.deleteNode(4);
    amr.printList();

    amr.insert(5, 5);
    amr.insert(6, 5);
    amr.insert(7, 5);
    amr.printList();
    amr.deleteNodes(5);
    amr.printList();

    amr.reverse();
    amr.printList();

    cout << "Sum: " << amr.recSum(amr.getNodeAt(1)) << endl;

    LinkedList<int> clonedList = amr.cloneList();
    
    cout << endl;
    clonedList.printList();

    amr.merge(clonedList);
    amr.printList();

    cout << endl << "#\n#   This code is being tested by 1-indexing\n#   and not zero indexing.\n#" << endl << endl;

    return 0;
}
