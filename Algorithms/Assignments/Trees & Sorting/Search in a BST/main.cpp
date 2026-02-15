#include <iostream>
using namespace std;

class Node {
    int data;
    Node *left = nullptr, *right = nullptr;

    public:
        Node(int value) {
            data = value;
        }
        
        void setData(int newValue) {
            data = newValue;
        }

        void setLeft(Node* newNode) {
            left = newNode;
        }

        void setRight(Node* newNode) {
            right = newNode;
        }

        int getData() { return data; }
        Node*& getLeft() { return left; }
        Node*& getRight() { return right; }
};

class BST {
    Node* root;

    static void recursionInsert(Node*& subRoot, int key)
    {
        if (subRoot == nullptr)
        {
            Node* newNode = new Node(key);
            subRoot = newNode;
        }
        else if (key < subRoot->getData())
        {
            recursionInsert(subRoot->getLeft(), key);
        }
        else
        {
            recursionInsert(subRoot->getRight(), key);
        }
    }

    static void recursionPreOrderTraversal(Node* subRoot)
    {
        if (subRoot == nullptr) return;
        cout << subRoot->getData() << " ";
        recursionPreOrderTraversal(subRoot->getLeft());
        recursionPreOrderTraversal(subRoot->getRight());
    }

    static Node* recursionSearch(Node* subRoot, int target)
    {
        if (subRoot == nullptr) return subRoot; // or just 'return nullptr' (same thing)
        if (subRoot->getData() == target) return subRoot;

        Node* result = recursionSearch(subRoot->getLeft(), target);

        if (result != nullptr) return result;
        return recursionSearch(subRoot->getRight(), target);
    }

    public:
        BST() { root = nullptr; }

        void insert(int key) {
            recursionInsert(root, key);
        }

        void preOrderTraversal() const {
            recursionPreOrderTraversal(root);
        }

        void printSubRoot(int target) {
            Node* targetNode = recursionSearch(root, target);
            if (targetNode == nullptr) cout << -1;
            else recursionPreOrderTraversal(targetNode);
            cout << endl;
        }
};

int main()
{
    int n, x, target;
    BST amr;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        amr.insert(x);
    }
    cin >> target;
    amr.printSubRoot(target);
    return 0;
}