#include "BSTree.h"
#include <iostream>
using namespace std;


int main()
{
	BSTree bst;

	//build tree       8 
	//               /   \
	//              3     13
	//             / \   / 
	//            1   4 9

	//==============================================================
	//							InsertBST function
	//==============================================================
	cout << "\n\n\nBuilding the tree with sequence 8 13 3 9 1 4" << endl << endl;
	bst.insertBST(8);
	bst.insertBST(13);
	bst.insertBST(3);
	bst.insertBST(9);
	bst.insertBST(1);
	bst.insertBST(4);

	//==============================================================
	//							Traversal
	//==============================================================
	// traverse the tree with different orders
	cout << "The tree pre-order traversal" << endl;
	bst.preorder_traverse();
	cout << endl << endl;

	cout << "The tree in-order traversal" << endl;
	bst.inorder_traverse();
	cout << endl << endl;

	cout << "The tree post-order traversal" << endl;
	bst.postorder_traverse();
	cout << endl << endl;

	//==============================================================
	//							TO Do
	//==============================================================
	// Call the implemented functions here and test them.

	cout << "Printed in pre-order traversal" << endl;
	cout << "The double of each value in the tree:" << endl;
	bst.doubleVal();
	bst.preorder_traverse();
	cout << endl << endl;

	cout << "Leaves in this BST:" << endl;
	bst.printLeaves();
	cout << endl << endl;

	cout << "Node with highest value:" << endl;
	cout << bst.find_max()->getdata() << endl;
	cout << endl;

	cout << "Node with least value:" << endl;
	cout << bst.find_min()->getdata() << endl;
	cout << endl;

	cout << "Max depth of BST:" << endl;
	cout << bst.max_depth() << endl;
	cout << endl;

	//==============================================================
	//							Destroy
	//==============================================================
	cout << "\n[!] Destroying tree..." << endl;
	bst.destroy_tree();

	return 0;

}


