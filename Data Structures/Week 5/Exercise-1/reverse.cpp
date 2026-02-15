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

    void printList() {
        Node<T>* temp = head;
        while (temp != nullptr) {
            cout << temp->getData() << endl;
            temp = temp->getNext();
        }
        cout << "------------------" << endl;
    }

    // void reverse() {
    //     if (head != nullptr) {
    //         Node<T>* prev = nullptr;
    //         Node<T>* current = head;
    //         Node<T>* next = nullptr;
    //         while (current != nullptr) {
    //             next = current->getNext();
    //             current->setNext(prev);
    //             prev = current;
    //             current = next;
    //         }
    //         head = prev;
    //     } else {
    //         cout << "Your list is empty!" << endl;
    //     }
    // }

    void reverse() {
        if (head == nullptr) {
            cout << "Your list is empty!" << endl;
            return;
        }

        T* data = new T[itemCount];
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

        delete[] data;
    }
};

int main() {
    cout << endl << "#\n#   Testing the reverse function\n#" << endl << endl;

    LinkedList<int> list;

    list.insert(1, 1);
    list.insert(2, 2);
    list.insert(3, 3);
    list.insert(4, 4);
    list.insert(5, 5);

    cout << "Original List: " << endl;
    list.printList();

    list.reverse();

    cout << "Reversed List: " << endl;
    list.printList();

    cout << endl << "#\n#   End of testing\n#" << endl << endl;

    return 0;
}
