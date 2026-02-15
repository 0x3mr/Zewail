#include <iostream>
#include <vector>
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
        else if (key > subRoot->getData())
        {
            recursionInsert(subRoot->getRight(), key);
        }
    }

    static void recursionInOrderTraversal(Node* subRoot, vector<int> &array)
    {
        if (subRoot == nullptr) return;
        recursionInOrderTraversal(subRoot->getLeft(), array);
        array.push_back(subRoot->getData());
        recursionInOrderTraversal(subRoot->getRight(), array);
    }

    int recursionSize(Node* subRoot)
    {
        if (subRoot == nullptr) return 0;
        return (1 + recursionSize(subRoot->getLeft()) + recursionSize(subRoot->getRight()));
    }

    int getTotalSumExceptRecursion(Node* traversingNode, int key)
    {
        if (traversingNode == nullptr) return 0;
        return (((traversingNode->getData() <= key) ? (0) : (traversingNode->getData())) + getTotalSumExceptRecursion(traversingNode->getLeft(), key) + getTotalSumExceptRecursion(traversingNode->getRight(), key));
    }

    void recursionScaling(Node* subRoot, vector<int> &array)
    {
        if (subRoot == nullptr) return;
        recursionScaling(subRoot->getLeft(), array);
        array.push_back(subRoot->getData() + getTotalSumExceptRecursion(root, subRoot->getData()));
        recursionScaling(subRoot->getRight(), array);
    }

    public:
        BST() { root = nullptr; }

        void insert(int key) {
            recursionInsert(root, key);
        }

        int getTotalSumExcept(int exception) {
            return (exception + getTotalSumExceptRecursion(root, exception));
        }

        void applyScaling(int n) {
            vector<int> scaled;
            recursionScaling(root, scaled);
            BST test;
            int size = scaled.size();
            for (int i = 0; i < size; i++) {
                test.insert(scaled[i]);
            }
            vector<int> array;
            test.inOrderTraversal(array);
            for (int i = n - 1; i >= 0; i--) {
                cout << array[i] << ((i > 0) ? " " : "");
            }
            cout << endl;
            //
            // I understand that this may be the worst ever written
            // code ever - but it works.. right?
        }

        void inOrderTraversal(vector<int> &array) const {
            recursionInOrderTraversal(root, array);
        }

        int size() {
            return (recursionSize(root));
        }
};

int main() {
    BST amr;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        amr.insert(x);
    }
    amr.applyScaling(n);
    // cout << amr.getTotalSumExcept(50) << endl;
    // amr.inOrderTraversal();
    return 0;
}

