#include <bits/stdc++.h>
using namespace std;

void bellmanFord(int V, int E, int X, vector<vector<int>>& edges) {
    vector<int> dist(V, INT_MAX);
    dist[X] = 0;

    for (int i = 0; i < V - 1; ++i) {
        for (int j = 0; j < E; ++j) {
            int U = edges[j][0];
            int V = edges[j][1];
            int wt = edges[j][2];
            if (dist[U] != INT_MAX && dist[U] + wt < dist[V]) {
                dist[V] = dist[U] + wt;
            }
        }
    }

    for (int j = 0; j < E; ++j) {
        int U = edges[j][0];
        int V = edges[j][1];
        int wt = edges[j][2];
        if (dist[U] != INT_MAX && dist[U] + wt < dist[V]) {
            cout << "Graph has a negative weight cycle\n";
            return;
        }
    }

    for (int i = 0; i < V; ++i) {
        cout << "U->V: " << i << "->" << dist[i] << " cost to reach " << i << " from source " << X << " = " << dist[i] << endl;
    }
}

int main() {
           system("color fc");
    int V, E, X;
    cin >> V >> E >> X;

    vector<vector<int>> edges(E, vector<int>(3));
    for (int i = 0; i < E; ++i) {
        cin >> edges[i][0] >> edges[i][1] >> edges[i][2];
    }

    bellmanFord(V, E, X, edges);
    return 0;
}
