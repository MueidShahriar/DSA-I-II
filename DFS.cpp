
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>nodes;
vector<bool>visited;
void dfs(int str)
{
    visited[str]=true;
    cout<<str<<" ";
    for(auto t:nodes[str])
    {
        if(!visited[t])dfs(t);
    }
}
int main()
{
    int v,s;
    cout<<"Enter Vertices: ";
    cin>>v;
    cout<<"Starting node: ";
    cin>>s;
    nodes.resize(v);
    visited.resize(v,false);
    int e;
    cout<<"Enter Edges number:";
    cin>>e;
    for(int i=0; i<e; i++)
    {
        int a,b;
        cin>>a>>b;
        nodes[a].push_back(b);
        nodes[b].push_back(a);
    }
    dfs(s);
}
