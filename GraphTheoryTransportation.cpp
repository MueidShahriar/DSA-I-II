#include <bits/stdc++.h>
using namespace std;

const int N = 1001;
int parent[N], sz[N];

void make(int v) 
{ 
    parent[v] = v, sz[v] = 1; 
}
int find(int v) 
{ 
    return 
    (v == parent[v]) ? v : parent[v] = find(parent[v]); 
}
void Union(int a, int b)
{
    a = find(a), b = find(b);
    if (a != b)
    {
        if (sz[a] < sz[b])
            swap(a, b);
        parent[b] = a, sz[a] += sz[b];
    }
}

double dist(pair<int, int> &a, pair<int, int> &b)
{
    return sqrt(pow(a.first - b.first, 2) + pow(a.second - b.second, 2));
}

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n, r;
        cin >> n >> r;
        vector<pair<int, int>> cities(n);
        for (auto &city : cities)
            cin >> city.first >> city.second;

        vector<tuple<double, int, int>> edges;
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                edges.push_back({dist(cities[i], cities[j]), i, j});

        sort(edges.begin(), edges.end());
        for (int i = 0; i < n; i++)
            make(i);

        int num_states = 1;
        double road_cost = 0, railroad_cost = 0;
        for (auto &[d, u, v] : edges)
        {
            if (find(u) != find(v))
            {
                if (d <= r)
                    road_cost += d;
                else
                    railroad_cost += d, num_states++;
                Union(u, v);
            }
        }
        cout << "Case #" << i << ": " << num_states << " " << round(road_cost) << " " << round(railroad_cost) << endl;
    }
    return 0;
}
