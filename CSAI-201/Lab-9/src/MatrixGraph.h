#pragma once

#ifndef MATRIX_GRAPH_
#define MATRIX_GRAPH_


#include <vector>
#include "GraphADT.h"
#include "Util.h"
using namespace std;


template<typename T>
class MatrixGraph : public GraphADT<T>
{
private:
	vector<T> vertices;
	vector<vector<int>> adjMatrix;

public:
	MatrixGraph();

	bool IsEmpty() const;
	bool AddVertex(const T& v);
	bool RemoveVertex(const T& v);
	bool AddEdge(const T& fromV, const T& toV, int weight = 1);
	void RemoveEdge(const T& fromV, const T& toV);
	void DisplayNeighbors(const T& fromV) const;
	bool EdgeExists(const T& fromV, const T& toV) const;
	bool IsAdjacent(const T& v1, const T& v2) const;
	void PrintGraph();
	void DFS(const T& startV) const;
	void BFS(const T& startV) const;
	void TopologicalSort() const;


	~MatrixGraph();
};

#endif