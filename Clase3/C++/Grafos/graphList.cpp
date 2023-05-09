// Program to find Dijkstra's shortest path using
// priority_queue in STL
#include <bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
 
// This class represents a directed graph using
// adjacency list representation
class Graph {
    int V; // No. of vertices
 
    // In a weighted graph, we need to store vertex
    // and weight pair for every edge
    list<pair<int, int> >* adj;
 
public:
    Graph(int V); // Constructor
 
    // function to add an edge to graph
    void addEdge(int u, int v, int w);
 
    // prints shortest path from s
    // void shortestPath(int s);
    
    void printGraph();
};
 
// Allocates memory for adjacency list
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<pair<int, int>>[V];
}
 
void Graph::addEdge(int u, int v, int w = 0)
{
    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w));
} 

// A utility function to print the adjacency list
// representation of graph
void Graph::printGraph()
{
    for (int i = 0; i < V; ++i) {
        cout << i << ": ";
        for (auto& j : adj[i]) {
            cout << "(" << j.first << ", " << j.second << ") ";
        }
        cout << endl;
    }
}

// Driver code
int main()
{
    
    // create the graph given in above figure
    int V = 9;
    Graph g(V);
    
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.printGraph();
    return 0;
}
