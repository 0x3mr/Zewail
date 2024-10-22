#include <iostream>
using namespace std;

template<class T>
class Node {
    private:
        T data;
        Node* next;
    public:
        Node(T data) {
            this->data = data;
            next = nullptr;
        }

        void setData(T data) { this->data = data; }
        void setNext(Node* nextNode) { next = nextNode; }

        T getData() { return data; }
        Node* getNext() { return next; }
};

int main() {
    Node<string>* first = new Node<string>("Amr");
    Node<string> second("is");
    Node<string> third("cooking.");

    first->setNext(&second);
    second.setNext(&third);
    // third next is set to nullptr

    for (Node<string>* i = first; i != NULL; i = i->getNext()) {
        cout << i->getData() << " ";
    }

    cout << endl << endl;

    Node<string>* curr = first;
    while (curr != NULL) {
        cout << curr->getData() << " ";
        curr = curr->getNext();
    }

    return 0;
}