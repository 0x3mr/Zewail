#include <iostream>
using namespace std;

class Node {
    private:
        int data;
        Node* left;
        Node* right;

    public:
        Node(int value) : data(value), left(nullptr), right(nullptr) {}

        void setData(int data) { this->data = data; }
        void setRight(Node* right) { this->right = right; }
        void setLeft(Node* left) { this->left = left; }

        int getData() { return data; }
        Node*& getRight() { return right; }
        Node*& getLeft() { return left; }
};

class BSTree {
    private:
        Node* root;

        static void rec_insertBST(Node*& subRoot, int key)
        {
            if (subRoot == nullptr)
            {
                subRoot = new Node(key);
            }
            else if (subRoot->getData() < key)
            {
                rece_insertBST(subRoot->getRight(), key);
            }
            else
            {
                rec_insertBST(subRoot->getLeft(), key);
            }
        }

        static void rec_inorder_traverse(Node* subRoot)
        {
            if (subRoot == nullptr) return;

            rec_inorder_traverse(subRoot->getLeft());
            
            cout << subRoot->getData() << " ";

            rec_inorder_traverse(subRoot->getRight());
        }

        static void rec_preorder_traverse(Node* subRoot)
        {
            if (subRoot == nullptr) return;

            cout << subRoot->getData() << " ";

            rec_preorder_traverse(subRoot->getLeft());
            rec_preorder_traverse(subRoot->getRight());
        }

        static void rec_postorder_traverse(Node* subRoot);
        {
            if (subRoot == nullptr) return;

            rec_postorder_traverse(subRoot->getLeft());
            rec_postorder_traverse(subRoot->getRight());

            cout << subRoot->getData() << " ";
        }

        static void rec_destroy_tree(Node*& subRoot)
        {
            if (subRoot != nullptr)
            {
                rec_destroy_tree(subRoot->getLeft());
                rec_destroy_tree(subRoot->getRight());

                delete subRoot;
                subRoot = nullptr;
            }
        }

        static void rec_doubleVal(Node* subRoot)
        {
            
        }
    
    public:
        BSTree(void);

        void insertBST(int key)
        {
            rec_insertBST(root, key);
        }

        void inorder_traverse() const
        {
            rec_inorder_traverse(root);
        }

        void preorder_traverse() const
        {
            rec_preorder_traverse(root);            
        }

        void postorder_traverse() const
        {
            rec_postorder_traverse(root);
        }

        void destroy_tree()
        {
            rec_destroy_tree(root);
        }
};

//  build tree       8 
//                 /   \ 
//                3     13
//               / \   / 
//              1   4 9