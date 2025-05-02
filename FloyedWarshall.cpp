#include <bits/stdc++.h>
using namespace std;

int dis[1000][1000];
int main()
{
    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < 1000; j++)
        {
            if (i != j)
                dis[i][j] = 100000000;
            else
                dis[i][j] = 0;
        }
    }

    int n, e;
    cout << "Total nodes: ";
    cin >> n;
    cout << "Total edges: ";
    cin >> e;
    cout << "Edges with Cost: "<< endl;

    while (e--)
    {
        int u, v, c;
        cin >> u >> v >> c;
        dis[u][v] = c;
    }

    cout << endl;
    cout << "Algorithm begin here... ";

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (dis[i][j] > dis[i][k] + dis[k][j])
                {
                    dis[i][j] = dis[i][k] + dis[k][j];
                }
            }
        }
    }
    cout << endl;

    int q;
    cin>>q;
	while(q--)
	{
		int u, v;
        cin>>u>>v;
		if(dis[u][v]==100000000)
			cout<<"-1"<<endl;
		else
			cout<<dis[u][v]<<endl;
	}
}