#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
vector<int>adj[N];
bool visited[N];
void dfs(int node)
{
    visited[node]=1;
    cout<<node<<" ";
    vector<int>::iterator it;
    for(it=adj[node].begin();it!=adj[node].end();it++)
    {
      if(visited[*it]);
      else
        {
          dfs(*it);
        }
    }
} 

int main()
{
  int n,m,x,y;
  cin>>n>>m;
  for(int i=0;i<=n;i++)
  visited[i]=false;
  
  for(int i=0;i<m;i++)
  {
    cin >> x >> y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }
  dfs(1);
}

