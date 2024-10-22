#include <iostream>
using namespace std;

template<class T>
class Node {
    private:
        T Data;
        Node* Next;

    public:
        Node(T data) {
            Data = data;
            Next = nullptr;
        }

        void setData(T d) { Data = d; }
        void setNext(Node* N) { Next = N; }

        T getData() const { return Data; }
        Node* getNext() const { return Next; }
};

int main() {
    Node<string> amr("Amr");
    Node<string> ahmed("is");
    Node<string> omar("cooking.");
    Node<string> todo(" >.<");

    amr.setNext(&ahmed);
    ahmed.setNext(&omar);
    omar.setNext(&todo);
    
    for (Node<string>* i = &amr; i != nullptr; i = i->getNext()) {
        cout << i->getData() << " ";
    }

    cout << endl << endl;

    Node<string>* i = &amr;
    while (i != NULL) {
        cout << i->getData() << " ";
        i = i->getNext();
    }

    return 0;
}