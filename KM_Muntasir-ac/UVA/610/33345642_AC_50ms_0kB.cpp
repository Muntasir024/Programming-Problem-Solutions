#include<bits/stdc++.h>
using namespace std;

int vis[1007];
vector<int> adj[1007];
int t, in[1007], low[1007], par[1007], road[1007][1007];

void findBridge(int u)
{
    low[u] = in[u] = ++t;
    vis[u]=true;
    for(int i=0; i<adj[u].size(); i++)
    {
        int v=adj[u][i];
        if(!vis[v])
        {
            par[v]=u;
            findBridge(v);
            low[u]=min(low[u], low[v]);
            if(low[v]>in[u])
                road[u][v]=road[v][u]=1;
            else if(!road[v][u]) road[u][v]=1;
        }
        else if(par[u]!=v)
        {
            low[u]=min(low[u], in[v]);
            if(!road[v][u]) road[u][v]=1;
        }

    }
    return;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, u, v, tc=1;
    while(cin>>n>>m && n)
    {
        for(int i=0; i<m; i++)
        {
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        t=0;

        findBridge(1);

        cout<<tc++<<"\n\n";
        for(int i=1; i<=n; i++)
            for(int j=1; j<=n; j++)
                if(road[i][j])
                    cout<<i<<" "<<j<<'\n';
        cout<<"#\n";

        memset(road,0,sizeof(road));
        for(int i=1; i<=n; i++)
            adj[i].clear(), vis[i]=0, par[i]=0;
    }
    return 0;
}
