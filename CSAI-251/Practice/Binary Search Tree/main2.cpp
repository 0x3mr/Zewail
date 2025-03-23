#include <iostream>
#include <set>
using namespace std;

class BST {
    set<int> tree;

public:
    void insert(int key) {
        tree.insert(key);
    }

    void preOrderTraversal() const {
        for (auto it = tree.begin(); it != tree.end(); ++it)
            cout << *it << " ";
    }

    void inOrderTraversal() const {
        for (auto it = tree.begin(); it != tree.end(); ++it)
            cout << *it << " ";
    }

    void postOrderTraversal() const {
        for (auto it = tree.rbegin(); it != tree.rend(); ++it)
            cout << *it << " ";
    }

    void destroyTree() {
        tree.clear();
    }

    int size() {
        return tree.size();
    }
};

int main() {
    BST tree;
    int amr[6] = {8, 12, 3, 9, 1, 4};

    cout << "Size of the tree before: " << tree.size() << endl;

    for (int i = 0; i < 6; i++)
        tree.insert(amr[i]);

    cout << "Size of the tree after: " << tree.size() << endl;

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

    return 0;
}
