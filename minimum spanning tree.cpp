#include<bits/stdc++.h>
using namespace std;
const int N=1e5+6;
vector<int>parent(N);
vector<int>sz(N);
void make_set(int v)
{
    parent[v]=v;
    sz[v]=1;
}

int find_set(int v)
{
    if(v==parent[v])return v;
    return parent[v]=find_set(parent[v]);
}
void union_sets(int a,int b)
{
    a=find_set(a);
    b=find_set(b);
    if(a!=b)
    {
        if(sz[a]<sz[b])swap(a,b);
        parent[b]=a;
        sz[a]+=sz[b];
    }
}

int main()
{
    for(int i=0; i<N; i++)make_set(i);
    int v,e;
    cin>>v>>e;
    vector<vector<int>>edges;
    for(int i=0; i<e; i++)
    {
        int s,d,w;
        cin>>s>>d>>w;
        edges.push_back({w,s,d});
    }
    sort(edges.begin(),edges.end());
    int cost=0;
    for(auto i:edges)
    {
        int w=i[0];
        int u=i[1];
        int v=i[2];
        int x=find_set(u);
        int y=find_set(v);
        if(x==y)continue;
    else
        {
            cost+=w;
            union_sets(u,v);
        }     
    }
    cout<<"Minimum Cost: "<<cost;
}