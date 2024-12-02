#include "Node.h"

Node::Node(int val)
{
	data = val;
	left = right = nullptr;
}


void Node::setdata(int d)
{
	data = d;
}
int Node::getdata()
{
	return data;
}
void Node::setleft(Node* p)
{
	left = p;
}
Node*& Node::getleft()
{
	return left;
}
void Node::setright(Node* p)
{
	right = p;
}
Node*& Node::getright()
{
	return right;
}
