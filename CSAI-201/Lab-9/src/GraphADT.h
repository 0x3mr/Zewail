#ifndef GRAPH_ADT_
#define GRAPH_ADT_

template<typename T>
class GraphADT
{
public:

	virtual bool IsEmpty() const = 0;

	/** Adds a new vertex to the graph.
	@post  If the operation was successful, the vertex is included in the graph, with no edges.
	@param v  The vertex to be added.
	@return  True if the addition is successful or false if not. */
	virtual bool AddVertex(const T& v) = 0;
	
	/** Removes a vertex from the graph if it is there.
	@post  If the operation was successful, the vertex is removed from the graph.
	@param v  The vertex to be removed.
	@return  True if the removal is successful or false if not. */
	virtual bool RemoveVertex(const T& v) = 0;

	/** Adds a new edge to the graph.
	@post  If the operation was successful, the edge is included in the graph.
	@param fromV  The source vertex.
	@param toV  The destination vertex.
	@param weight  The edge weight.
	@return  True if the addition is successful or false if not. */
	virtual bool AddEdge(const T& fromV, const T& toV, int weight = 1) = 0;

	/** Removes an edge from the graph.
	@post  If the operation was successful, the edge is removed in the graph.
	@param fromV  The source vertex.
	@param toV  The destination vertex.
	@return  True if the addition is successful or false if not. */
	virtual void RemoveEdge(const T& fromV, const T& toV) = 0;

	/** Displays successors of a source node.
	@post  No change.
	@param v  The source vertex. */
	virtual void DisplayNeighbors(const T& v) const = 0;

	/** Checks if an edge exists from a source vertex to a destination vertex.
	@post  No change.
	@param fromV  The source vertex.
	@param toV  The destination vertex.
	@return  True if an edge exists from source to destination. */
	virtual bool EdgeExists(const T& fromV, const T& toV) const = 0;

	/** Checks if two nodes are connected back and forth.
	@post  No change.
	@param v1  The first vertex.
	@param v2  The second vertex.
	@return  True if an edge exists from v1 to v2 and an edge exists from v2 to v1. */
	virtual bool IsAdjacent(const T& v1, const T& v2) const = 0;

	/** Displays graph in a readable manner.
	@post  No change. */
	virtual void PrintGraph() = 0;

	/** Traverses the graph using DFS.
	@post  No change.
	@param startV  The start vertex. */
	virtual void DFS(const T& startV) const = 0;

	/** Traverses the graph using BFS.
	@post  No change.
	@param startV  The start vertex. */
	virtual void BFS(const T& startV) const = 0;

	/** Traverses the graph using DFS.
	@post  No change. */
	virtual void TopologicalSort() const = 0;

	/** Destroys this graph and frees its assigned memory. */
	virtual ~GraphADT() { }
}; // end GraphADT

#endif