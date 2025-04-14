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
    Node<string> head("Amr");
    Node<string> two("is");
    Node<string>* three = new Node<string>("cooking");
    Node<string> four("bgad");
    Node<string> five("wallahi");
    Node<string>* six = new Node<string>("fr");
    
    head.setNext(&two);
    two.setNext(three);
    three->setNext(&four);
    four.setNext(&five);
    five.setNext(six);

    for (Node<string>* i = &head; i != NULL; i = i->getNext()) {
        cout << i->getData() << " ";
    }

    cout << endl << endl;

    Node<string>* curr = &head;
    while (curr != NULL) {
        cout << curr->getData() << " ";
        curr = curr->getNext();
    }

    return 0;
}