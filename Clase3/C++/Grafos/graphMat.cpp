#include <bits/stdc++.h>
using namespace std;

class Graph {
private:
    int V;
    vector<vector<int>> adjMatrix;

public:
    Graph(int V) : V(V) {
        adjMatrix.assign(V, vector<int>(V, 0));
    }

    void addEdge(int u, int v, int w = 0) {
        adjMatrix[u][v] = w;
        adjMatrix[v][u] = w;
    }

    void printMatrix() {
        for (int i = 0; i < V; ++i) {
            for (int j = 0; j < V; ++j) {
                cout << adjMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int V = 9;
    Graph g(V);

    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    g.printMatrix();

    return 0;
}
