#include "MatrixGraph.cpp"
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    MatrixGraph<char> graph; // char is the type of vertex names

    cout << graph.IsEmpty() << endl;
    cout << "\n\nAdding vertex ===============" << endl;
    graph.AddVertex('A');
    graph.PrintGraph();

    cout << "\n\nAdding vertex ===============" << endl;
    graph.AddVertex('B');
    graph.PrintGraph();

    cout << "\n\nAdding duplicate vertex ===============" << endl;
    graph.AddVertex('A');
    graph.PrintGraph();

    cout << "\n\nAdding vertices ===============" << endl;
    graph.AddVertex('C');
    graph.AddVertex('D');
    graph.AddVertex('F');
    graph.AddVertex('E');
    graph.PrintGraph();

    cout << "\n\nAdding edges ===============" << endl;
    graph.AddEdge('A', 'B', 3);
    graph.AddEdge('B', 'C', 2);
    graph.AddEdge('B', 'D', 4);
    graph.AddEdge('C', 'E', 5);
    graph.AddEdge('D', 'C', 5);
    graph.AddEdge('E', 'D', 2);
    graph.AddEdge('E', 'F');
    graph.AddEdge('F', 'A');
    graph.PrintGraph();

    cout << "\n\nRemoving edge ===============" << endl;
    graph.RemoveEdge('F', 'A');
    graph.PrintGraph();

    cout << "\n\nRemoving vertex ===============" << endl;
    graph.RemoveVertex('F');
    graph.PrintGraph();

    cout << "\n\nDisplaying neighbors ===============" << endl;
    graph.DisplayNeighbors('B');

    return 0;
}
