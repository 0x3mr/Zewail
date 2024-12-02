#pragma once

#include "Node.h"

class BSTree
{
private:
	Node* root;

	// Utility Functions - Recursive Functions --------------------------

	// Given functions
	static void rec_insertBST(Node *& subRoot, int key);
	static void rec_inorder_traverse(Node* subRoot);
	static void rec_preorder_traverse(Node* subRoot);
	static void rec_postorder_traverse(Node* subRoot);	
	static void rec_destroy_tree(Node *& subRoot);

	//Functions to be implemented by student
	static void rec_doubleVal(Node* subRoot);
	static void rec_printLeaves(Node* subRoot);
	static Node* rec_find_max(Node* subRoot);
	static Node* rec_find_min(Node* subRoot);
	static int rec_max_depth(Node* subRoot);

	// [Note]: in the above utility functions:
	// we made them static just to prevent you (programmer) from accidently 
	// using "root" instead of the passed "subRoot" by mistake
	// Check body of function rec_preorder_traverse (in file BSTree.cpp) for more details	
	// 

public:
	BSTree(void);
	~BSTree(void);

	// Public Functions --------------------------

	// Given functions
	void insertBST(int key); // not const
	void inorder_traverse() const;
	void preorder_traverse() const;
	void postorder_traverse() const;	
	void destroy_tree(); // not const

	// Functions to be implemented by student
	void doubleVal() const;
	void printLeaves() const;
	Node*  find_max() const; // return a pointer to the node that hold the maximum value in binary search tree.
	Node*  find_min() const; // return a pointer to the node that hold the minimum value in binary search tree.
	int max_depth() const;
	

	// [Note]: in the above public functions:
	// const functions are const because there is no probibility to change 
	// the root (data member) either directly (root = something) 
	// or by indirectly by passing it (by reference) to another function (utility fn here)
};

