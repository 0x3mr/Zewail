#include <iostream>
#include <vector>

using namespace std;

// Define constants for vertex colors
enum Color { WHITE, GRAY, BLACK };

struct Vertex {
    Color color;
    int discoveryTime;
    int finishingTime;
    int parent;
};

int timeCounter = 0;

// DFS-Visit Function
void DFS_Visit(int u, vector<vector<int>>& adjList, vector<Vertex>& vertices)
{
    timeCounter++;
    vertices[u].discoveryTime = timeCounter;
    vertices[u].color = GRAY; // Vertex is being visited

    for (int v : adjList[u])
    {
        if (vertices[v].color == WHITE)
        { // Explore undiscovered vertex
            vertices[v].parent = u;
            DFS_Visit(v, adjList, vertices);
        }
    }

    vertices[u].color = BLACK; // Vertex is fully explored
    timeCounter++;
    vertices[u].finishingTime = timeCounter;
}

// DFS Function
void DFS(vector<vector<int>>& adjList)
{
    int numVertices = adjList.size();
    vector<Vertex> vertices(numVertices);

    // Initialize all vertices
    for (int i = 0; i < numVertices; i++)
    {
        vertices[i].color = WHITE;
        vertices[i].parent = -1;
        vertices[i].discoveryTime = 0;
        vertices[i].finishingTime = 0;
    }

    timeCounter = 0;

    // Start DFS from each undiscovered vertex
    for (int i = 0; i < numVertices; i++)
    {
        if (vertices[i].color == WHITE)
        {
            DFS_Visit(i, adjList, vertices);
        }
    }

    // Display DFS results
    for (int i = 0; i < numVertices; i++)
    {
        cout << "Vertex: " << i 
             << ", Discovery Time: " << vertices[i].discoveryTime
             << ", Finishing Time: " << vertices[i].finishingTime
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

    cout << "Depth-First Search:\n";
    DFS(adjList);

    return 0;
}

// This is code implementation from lecture slides