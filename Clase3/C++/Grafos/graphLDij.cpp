
#include <iostream>
#include <list>
#include <queue>
using namespace std;
#define INF 0x3f3f3f3f
 
class Graph {
    int V; 

    list<pair<int, int> >* adj;
 
public:
    Graph(int V); 
 
    void addEdge(int u, int v, int w);
 
    void shortestPath(int s);
    
    void printGraph();
};
 
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

// Prints shortest paths from src to all other vertices
void Graph::shortestPath(int src)
{
    // Create a priority queue to store vertices that
    // are being preprocessed. This is weird syntax in C++.
    // Refer below link for details of this syntax
    // https://www.geeksforgeeks.org/implement-min-heap-using-stl/
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> >
        pq;
 
    // Create a vector for distances and initialize all
    // distances as infinite (INF)
    vector<int> dist(V, INF);
 
    // Insert source itself in priority queue and initialize
    // its distance as 0.
    pq.push(make_pair(0, src));
    dist[src] = 0;
 
    /* Looping till priority queue becomes empty (or all
    distances are not finalized) */
    while (!pq.empty()) {
        // The first vertex in pair is the minimum distance
        // vertex, extract it from priority queue.
        // vertex label is stored in second of pair (it
        // has to be done this way to keep the vertices
        // sorted distance (distance must be first item
        // in pair)
        int u = pq.top().second;
        pq.pop();
 
        // 'i' is used to get all adjacent vertices of a
        // vertex
        list<pair<int, int> >::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i) {
            // Get vertex label and weight of current
            // adjacent of u.
            int v = (*i).first;
            int weight = (*i).second;
 
            // If there is shorted path to v through u.
            if (dist[v] > dist[u] + weight) {
                // Updating distance of v
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
            
            cout << u << " " << v << endl;
            for(auto& k : dist){
                cout << k << " ";
            }
            cout << endl;
            }
        
        
    }
 
    // Print shortest distances stored in dist[]
    printf("Vertex Distance from Source\n");
    for (int i = 0; i < V; ++i)
        printf("%d \t\t %d\n", i, dist[i]);
}

int main()
{

    int V = 5;
    Graph g(V);
    
    g.addEdge(0, 1, 1);
    g.addEdge(0, 4, 2);
    g.addEdge(1, 2, 3);
    g.addEdge(1, 3, 1);
    g.addEdge(1, 4, 4);
    g.addEdge(2, 3, 7);
    g.addEdge(3, 4, 10);
    g.printGraph();
    g.shortestPath(0);
    return 0;
}
