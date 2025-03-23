#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

// Define constants for vertex colors
enum Color { WHITE, GRAY, BLACK };

struct Vertex {
    Color color;
    int distance;
    int parent;
};

// BFS Function
void BFS(vector<vector<int>>& adjList, int startVertex) {
    int numVertices = adjList.size();
    vector<Vertex> vertices(numVertices);

    // Step 1: Initialize all vertices except the start vertex
    for (int i = 0; i < numVertices; i++)
    {
        vertices[i].color = WHITE;
        vertices[i].distance = numeric_limits<int>::max();
        vertices[i].parent = -1; // NIL
    }

    // Step 2: Initialize the start vertex
    vertices[startVertex].color = GRAY;
    vertices[startVertex].distance = 0;
    vertices[startVertex].parent = -1;

    queue<int> Q;
    Q.push(startVertex);

    // Step 3: BFS Loop
    while (!Q.empty())
    {
        int u = Q.front();
        Q.pop();

        for (int v : adjList[u])
        { // Explore neighbors of u
            if (vertices[v].color == WHITE)
            { // v is discovered
                vertices[v].color = GRAY;
                vertices[v].distance = vertices[u].distance + 1;
                vertices[v].parent = u;
                Q.push(v);
            }
        }

        vertices[u].color = BLACK; // u is fully explored
    }

    // Display BFS result
    for (int i = 0; i < numVertices; i++) {
        cout << "Vertex: " << i 
             << ", Distance: " << vertices[i].distance 
             << ", Parent: " << vertices[i].parent << endl;
    }
}

// Example Usage
int main() {
    int numVertices = 5;
    vector<vector<int>> adjList = {
        {1, 2},     // Neighbors of vertex 0
        {0, 3, 4},  // Neighbors of vertex 1
        {0, 4},     // Neighbors of vertex 2
        {1},        // Neighbors of vertex 3    
        {1, 2}      // Neighbors of vertex 4
    };

    int startVertex = 0;
    cout << "Breadth-First Search starting from vertex " << startVertex << ":\n";
    BFS(adjList, startVertex);

    return 0;
}

// This is code implementation from lecture slides