#pragma once

class Node
{
private:
	int data;
	Node *left;
	Node *right;
public:
	Node(int val);
	void setdata(int d);
	int getdata();
	void setright(Node* p);
	Node*& getright();
	//returns a pointer by reference
	//Reason for that is explained in file BSTree.cpp as a note written
	//inside the body of function BSTree::rec_insertBST

	void setleft(Node* p);	
	Node*& getleft();



};
