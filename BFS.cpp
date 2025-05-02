#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>nodes;
vector<bool>visited;
void bfs(int st)
{
    queue<int>q;
    q.push(st);
    visited[st]=true;
    while(!q.empty())
    {
        int n=q.front();
        cout<<n<<" ";
        q.pop();

        for(auto i:nodes[n])
        {
            if(!visited[i])
            {
                q.push(i);
                visited[i]=true;
            }
        }
    }
}
int main()
{
    int v,s,e;
    cin>>v>>s>>e;
    nodes.resize(v);
    visited.resize(v,false);
    for(int i=0; i<e; i++)
    {
        int a,b;
        cin>>a>>b;
        nodes[a].push_back(b);
        nodes[b].push_back(a);
    }
    bfs(s);
}
