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

    static void submissionNode(Node* subRoot, vector<int> &array)
    {
        if (subRoot == nullptr) return;
        submissionNode(subRoot->getLeft(), array);
        array.push_back(subRoot->getData());
        submissionNode(subRoot->getRight(), array);
    }

    int recursionSize(Node* subRoot)
    {
        if (subRoot == nullptr) return 0;
        return (1 + recursionSize(subRoot->getLeft()) + recursionSize(subRoot->getRight()));
    }

    public:
        BST() { root = nullptr; }

        Node* getRoot() { return root; }

        void insert(int key) {
            recursionInsert(root, key);
        }

        void preOrderTraversal() const {
            recursionPreOrderTraversal(root);
        }

        int size() {
            return (recursionSize(root));
        }

        int treeSubmission(BST &first, BST &second, int target)
        {
            int count = 0;
            vector<int> firstArray, secondArray;

            submissionNode(first.getRoot(), firstArray);
            submissionNode(second.getRoot(), secondArray);

            for (long long i = 0; i < firstArray.size(); i++)
                for (long long j = 0; j < secondArray.size(); j++)
                    if (firstArray[i] + secondArray[j] == target) count++;

            return count;
        }
};

int main()
{
    int n, x, target;
    BST amr, amoor;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        amr.insert(x);
    }
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        amoor.insert(x);
    }
    cin >> target;
    cout << amr.treeSubmission(amr, amoor, target) << endl;
    return 0;
}