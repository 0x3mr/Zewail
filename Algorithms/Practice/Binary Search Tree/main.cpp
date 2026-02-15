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
            // Knowing that the node we're standing on is null,
            // We will create a new node with our give key and
            // set it to the subRoot we're standing on.

            Node* newNode = new Node(key);
            subRoot = newNode;
        }
        else if (key < subRoot->getData())
        {
            // Else we're going to check if the key is less than
            // the current node we're standing on. If so, the key
            // should go to the left side of the subRoot.

            recursionInsert(subRoot->getLeft(), key);
        }
        else if (key > subRoot->getData())
        {
            // Else, (which means it is bigger than),
            // then it should go to the right side of the subRoot.

            recursionInsert(subRoot->getRight(), key);
        }
        // We will not add duplicates in BST
    }

    static Node* findMinimumNode(Node* subRoot)
    {
        while (subRoot->getLeft() != nullptr)
        {
            subRoot = subRoot->getLeft();
        }

        return subRoot;
    }

    static Node* recursionDelete(Node* subRoot, int target)
    {
        if (subRoot == nullptr)
        {
            return subRoot; // or a nullptr (same thing)
        }
        else if (target < subRoot->getData())
        {
            subRoot->setLeft(recursionDelete(subRoot->getLeft(), target));
        }
        else if (target > subRoot->getData())
        {
            subRoot->setRight(recursionDelete(subRoot->getRight(), target));
        }
        else
        {
            // First case: It is a leaf (no childs)
            if (subRoot->getLeft() == nullptr && subRoot->getRight() == nullptr)
            {
                delete subRoot;
                subRoot = nullptr;
                return subRoot;
            }
            // Second case: There is a child on either sides (left or right)
            //              It is on the right side here.
            else if (subRoot->getLeft() == nullptr)
            {
                Node* temp = subRoot;
                subRoot = subRoot->getRight();
                delete temp;
                return subRoot;
            }
            // Second case: There is a child on either sides (left or right)
            //              It is on the left side here.
            else if (subRoot->getRight() == nullptr)
            {
                Node* temp = subRoot;
                subRoot = subRoot->getLeft();
                delete temp;
                return subRoot;
            }
            // Third case: There are 2 children
            else
            {
                Node* temp = findMinimumNode(subRoot->getRight());
                subRoot->setData(temp->getData());
                subRoot->setRight(recursionDelete(subRoot->getRight(), temp->getData()));
            }
        }

        return subRoot;
    }

    static void recursionPreOrderTraversal(Node* subRoot)
    {
        if (subRoot == nullptr) return;
        cout << subRoot->getData() << " ";
        recursionPreOrderTraversal(subRoot->getLeft());
        recursionPreOrderTraversal(subRoot->getRight());
    }

    static void recursionInOrderTraversal(Node* subRoot)
    {
        if (subRoot == nullptr) return;
        recursionInOrderTraversal(subRoot->getLeft());
        cout << subRoot->getData() << " ";
        recursionInOrderTraversal(subRoot->getRight());
    }

    static void recursionPostOrderTraversal(Node* subRoot)
    {
        if (subRoot == nullptr) return;
        recursionPostOrderTraversal(subRoot->getLeft());
        recursionPostOrderTraversal(subRoot->getRight());
        cout << subRoot->getData() << " ";
    }

    static void recursionDestroyTree(Node* subRoot)
    {
        if (subRoot != nullptr)
        {
            recursionDestroyTree(subRoot->getLeft());
            recursionDestroyTree(subRoot->getRight());

            delete subRoot;
            subRoot = nullptr;
        }
    }

    int recursionSize(Node* subRoot)
    {
        if (subRoot == nullptr) return 0;
        return (1 + recursionSize(subRoot->getLeft()) + recursionSize(subRoot->getRight()));
    }

    public:
        BST() { root = nullptr; }
        ~BST() { destroyTree(); }

        void insert(int key) {
            recursionInsert(root, key);
        }

        void remove(int target) {
            root = recursionDelete(root, target);
        }

        void preOrderTraversal() const {
            recursionPreOrderTraversal(root);
        }

        void inOrderTraversal() const {
            recursionInOrderTraversal(root);
        }

        void postOrderTraversal() const {
            recursionPostOrderTraversal(root);
        }

        void destroyTree() {
            recursionDestroyTree(root);
            root = nullptr;
        }

        int size() {
            return (recursionSize(root));
        }
};

int main() {
    BST tree;

    // We will build this tree
    // 8 12 3 9 1 4
    //
	//                 8 
	//               /   \
	//              3     12
	//             / \   / 
	//            1   4 9

    int amr[6] = {8, 12, 3, 9, 1, 4};

    cout << "Size of the tree before: " << tree.size() << endl;

    for (int i = 0; i < 6; i++)
        tree.insert(amr[i]);

    cout << "Size of the tree after: " << tree.size() << endl;

    // Let's traverse the tree:

    cout << endl;
	cout << "PRE-ORDER" << endl;
	tree.preOrderTraversal();
	cout << endl << endl;

	cout << "IN-ORDER" << endl;
	tree.inOrderTraversal();
	cout << endl << endl;

	cout << "POST-ORDER" << endl;
	tree.postOrderTraversal();
	cout << endl << endl;

    cout << ">> Delete the node with value 3 from the tree." << endl;
    tree.remove(3);
    tree.preOrderTraversal();
    cout << endl << endl;

    return 0;
}