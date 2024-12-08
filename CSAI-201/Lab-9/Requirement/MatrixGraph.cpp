#pragma once
#include <iostream>
#include <stack>
#include <queue>
#include <vector>

#include "MatrixGraph.h"
using namespace std;

template<typename T>
MatrixGraph<T>::MatrixGraph()
{
	cout << "------ Constructing MatrixGraph ------\n";
}

template<typename T>
bool MatrixGraph<T>::IsEmpty() const
{
	return adjMatrix.size() == 0;
}

template<typename T>
bool MatrixGraph<T>::AddVertex(const T & v)
{
	if (findKey(vertices, v) < 0) { // vertex does not already exist in graph
		// Add it to the list of vertices
		vertices.push_back(v);

		// Adjust the adjacency matrix accordingly
		// First, add a new column to existing rows
		for (auto row = adjMatrix.begin(); row != adjMatrix.end(); row++)
			row->push_back(0);
		// Second, add a new row
		vector<int> newRow;
		for (int i = 0; i < vertices.size(); i++)
			newRow.push_back(0);
		adjMatrix.push_back(newRow);

		return true;
	}
	return false;
}

template<typename T>
bool MatrixGraph<T>::RemoveVertex(const T & v)
{
	int index = findKey(vertices, v);
	if (index >= 0) { // vertex exists
		// First, delete it from list of vertices
		removeKey(vertices, v);

		// Second, adjust adjacency matrix accordingly
		removeColumn(adjMatrix, index);
		removeRow(adjMatrix, index);

		return true;
	}

	return false;
}

template<typename T>
bool MatrixGraph<T>::AddEdge(const T & fromV, const T & toV, int weight)
{
	int fromIndex = findKey(vertices, fromV);
	int toIndex = findKey(vertices, toV);

	if (fromIndex >= 0 && toIndex >= 0) {
		adjMatrix[fromIndex][toIndex] = weight;

		return true;
	}

	return false;
}

template<typename T>
void MatrixGraph<T>::RemoveEdge(const T & fromV, const T & toV)
{
	AddEdge(fromV, toV, 0);
}

template<typename T>
void MatrixGraph<T>::DisplayNeighbors(const T & fromV) const
{
	int i = findKey(vertices, fromV);
	if (i >= 0) {
		cout << "Neighbors of vertex " << fromV << " are : ";
		for (int j = 0; j < vertices.size(); j++) {
			if (adjMatrix[i][j] > 0)
				cout << vertices[j] << " ";
		}
		cout << endl;
	}
}

template<typename T>
bool MatrixGraph<T>::EdgeExists(const T & fromV, const T & toV) const
{
	int fromIndex = findKey(vertices, fromV);
	int toIndex = findKey(vertices, toV);

	return (fromIndex >= 0
		&& toIndex >= 0
		&& adjMatrix[fromIndex][toIndex] > 0);
}

template<typename T>
bool MatrixGraph<T>::IsAdjacent(const T & v1, const T & v2) const
{
	return (EdgeExists(v1, v2)
		|| EdgeExists(v2, v1));
}

template<typename T>
void MatrixGraph<T>::PrintGraph()
{
	int numVertices = vertices.size();

	cout << "\t\t";
	for (int i = 0; i  < numVertices; i++)
		cout << vertices[i] << "\t";

	cout << endl;

	for (int i = 0; i < numVertices; i++)
		cout << "--------------";
	cout << endl;
	for (int i = 0; i < numVertices; i++) {
		cout << vertices[i] << "\t|\t";
		for (int j = 0; j < numVertices; j++) {
			cout << adjMatrix[i][j] << "\t";
		}
		cout << endl;
	}

}

template<typename T>
void MatrixGraph<T>::DFS(const T & startV) const
{
	// Step 1: Create a stack with the total number of vertices in the graph as the size.


	// Step 2: Choose any vertex as the traversal's beginning point. Push a visit to that vertex and add it to the stack.

	// Step 3 - Push any non-visited adjacent vertices of a vertex at the top of the stack to the top of the stack.

	// Step 4 - Repeat steps 3 and 4 until there are no more vertices to visit from the vertex at the top of the stack.

	// Step 5 - If there are no new vertices to visit, go back and pop one from the stack using backtracking.

	// Step 6 - Continue using steps 3, 4, and 5 until the stack is empty.

	// Step 7 - When the stack is entirely unoccupied, create the final spanning tree by deleting the graph's unused edges.
}

template<typename T>
void MatrixGraph<T>::BFS(const T & startV) const
{
	// Step 1: get the vertex to start with first

	// Step 2: we want to know the vertices we have already visited so we create a vector to store in it visited vertices

	// Step 3: vector queue for breadth first search

	// Step 4: enqueue the index of the start vertice and mark it as visited

	// Step 5: LOOP IN QUEUE:
	//         - Step 6: remove the front of the queue (we will dequeue it)
	//
	//         - Step 7: cout the vertex we are standing on
	//
	//         - Step 8: continue to the rest of the queue to check on the rest of unvisited vertices
}

template<typename T>
void MatrixGraph<T>::TopologicalSort() const
{
}


template<typename T>
MatrixGraph<T>::~MatrixGraph()
{
	cout << "~~~~~~ Destroying MatrixGraph ~~~~~~\n";
}


