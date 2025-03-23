#include <iostream>
#include <algorithm>
using namespace std;

class Node {
    int data, height = 1;
    Node *left = nullptr, *right = nullptr;

    public:
        Node(int value) {
            data = value;
        }

        void setData(int newValue) { data = newValue; }
        void setLeft(Node* newNode) { left = newNode; }
        void setRight(Node* newNode) { right = newNode; }
        void setHeight(int newHeight) { height = newHeight; }

        int getData() { return data; }
        int getHeight() { return height; }
        Node*& getLeft() { return left; }
        Node*& getRight() { return right; }
};

class AVL {
    Node* root;

    static void recursionInsert(Node*& subRoot, int key)
    {
        // -
    }

    static void balanceNode(Node*& subRoot)
    {
        if (subRoot == nullptr) return;

        updateHeight(subRoot);

        int BF = balanceFactor(subRoot); // Check the balance factor

        // -
    }

    static void updateHeight(Node*& subRoot)
    {
        if (node == nullptr) return;

        int leftMostHeight = (subRoot->getLeft())->getHeight();
        int rightMostHeight = (subRoot->getRight())->getHeight();

        subRoot->setHeight(1 + max(leftMostHeight, rightMostHeight));
    }

    static int balanceFactor(Node*& subRoot)
    {
        if (node == nullptr) return 0;

        int leftMostHeight = (subRoot->getLeft())->getHeight();
        int rightMostHeight = (subRoot->getRight())->getHeight();

        return (leftMostHeight - rightMostHeight);
    }

    public:
        AVL() { root = nullptr; }
        ~AVL() { destroyTree(); }

        void insert(int key) {
            root = recursionInsert(root, key);
        }

        void remove(int target) {
            root = recursionDelete(root, target);
        }

        void preOrderTraversal() const {}
        void inOrderTraversal() const {}
        void postOrderTraversal() const {}
};