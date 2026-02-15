#include <iostream>
using namespace std;

template<class T>
class Node {
    private:
        T data;
        Node* next = nullptr;
    public:
        Node(T data) {
            this->data = data;
        }
        
        void setData(T data) { this->data = data; }
        void setNext(Node* node) { next = node; }

        T getData() { return data; }
        Node* getNext() { return next; }
};

template<class T>
class Stack {
    private:
        Node<T>* top;

        int maxSize;
        int itemCount;

    public:
        Stack(int maxSize) {
            top = nullptr;
            this->maxSize = maxSize;
            itemCount = 0;
        }

        int getMaxSize() { return maxSize; }
        int getItemCount() { return itemCount; }

        Node<T>* getTop() { return top; }

        bool isEmpty() {
            return (top == nullptr);
        }

        bool isFull() {
            return (itemCount == maxSize);
        }

        bool push(T data) {
            if (isFull()) return false;

            Node<T>* newNode = new Node<T>(data);
            newNode->setNext(top);
            top = newNode;

            itemCount++;
            return true;
        }

        Node<T>* pop() {
            if (isEmpty()) return nullptr;

            Node<T>* getTop = top;
            top = top->getNext();

            itemCount--;
            return getTop;
        }

        T peek() {
            if (isEmpty()) { return T(); }
            return top->getData();
        }

        void printStack(Stack<T> instance)
        {
            Stack<T> temp = instance;

            if (temp.isEmpty()) { return; }

            Node<T>* popedNode;

            while (!temp.isEmpty()) {
                popedNode = temp.pop();
                cout << popedNode->getData() << endl;
            }
        }

        Stack<T> reverse(Stack<T> instance)
        {
            Stack<T> temp = instance;

            if (temp.isEmpty()) { return instance; }

            Node<T>* popedNode;
            int array[temp.getMaxSize()];

            for (int i = 0; !temp.isEmpty(); i++) {
                popedNode = temp.pop();
                array[i] = popedNode->getData();
            }

            for (int i = 0; i < (sizeof(array) / sizeof(array[0])); i++) { temp.push(array[i]); }

            return temp;
        }

        bool replaceAll(Stack<T> &instance, T value, T newValue)
        {
            Stack<T> temp = instance;

            if (temp.isEmpty()) { return false; }

            Node<T>* popedNode;
            int array[temp.getMaxSize()];

            for (int i = temp.getMaxSize() - 1; !temp.isEmpty(); i--) {
                popedNode = temp.pop();
                array[i] = popedNode->getData();
            }

            for (int i = 0; i < (sizeof(array) / sizeof(array[0])); i++) {
                if (array[i] == value) {
                    temp.push(newValue);
                } else {
                    temp.push(array[i]);
                }
            }

            return true;
        }

        Stack<T> collapse(Stack<T> &instance)
        {
            Stack<T> temp = instance;

            if (temp.isEmpty()) { return instance; }

            Node<T>* popedNode;
            int array[temp.getMaxSize()];

            for (int i = temp.getMaxSize() - 1; !temp.isEmpty(); i--) {
                popedNode = temp.pop();
                array[i] = popedNode->getData();
            }

            if (itemCount % 2 == 0)
            {
                for (int i = 0; i < (sizeof(array) / sizeof(array[0])); i += 2)
                {
                    temp.push(array[i] + array[i+1]);
                }
            }
            else
            {
                temp.push(array[0]);
                for (int i = 1; i < (sizeof(array) / sizeof(array[0])); i += 2)
                {
                    temp.push(array[i] + array[i+1]);
                }
            }

            return temp;
        }
};

int main() {
    cout << "#\n# Testing of Stack\n#\n" << endl;

    Stack<int> amr(10);

    cout << "\nPushing 10 elements to the stack:" << endl;
    cout << amr.push(7) << endl;
    cout << amr.push(2) << endl;
    cout << amr.push(8) << endl;
    cout << amr.push(9) << endl;
    cout << amr.push(4) << endl;
    cout << amr.push(13) << endl;
    cout << amr.push(7) << endl;
    cout << amr.push(1) << endl;
    cout << amr.push(9) << endl;
    cout << amr.push(10) << endl;

    cout << "\nPrinting the entire stack:" << endl;
    amr.printStack(amr);

    // collapse function:

    Stack<int> amoor = amr.collapse(amr);
    cout <<"\nCollapsing the stack:" << endl;
    amoor.printStack(amoor);

    // collapse function | Test case 2

    Stack<int> cookie(5);

    cout << "\nCollapsing the 'cookie' stack again:" << endl;

    cookie.push(1);
    cookie.push(2);
    cookie.push(3);
    cookie.push(4);
    cookie.push(5);

    cookie = cookie.collapse(cookie);
    cookie.printStack(cookie);

   return 0;
}