#include<bits/stdc++.h>
using namespace std;

vector<int> adj[1007], scc;
int vis[1007];

void dfs(int node)
{
    vis[node] = 1;

    for(int child : adj[node])
        if(!vis[child])
            dfs(child);
    scc.push_back(node);
}


void dfs1(int node)
{
    vis[node] = 1;

    for(int child : adj[node])
        if(!vis[child])
            dfs1(child);
}

int main()
{
    int n, m, a, b;
    while (scanf("%d %d", &n, &m) != EOF)
    {
        for(int i = 0; i <= n; i++) adj[i].clear(), vis[i] = 0;

        for(int i = 0; i < m; i++)
        {
            scanf("%d %d", &a, &b);
            if (b == 0) continue;
            adj[a].push_back(b);
        }
        for(int i = 0; i <= n; i++) vis[i] = 0;
        scc.clear();
        for(int i = 0; i <= n; i++) if(vis[i] == 0) dfs(i);
        reverse(scc.begin(), scc.end());
        for(int i = 0; i <= n; i++) vis[i] = 0;

        int cnt = 0;
        for(int i = 0; i < scc.size(); i++)
        {
            if(vis[scc[i]]) continue;
            cnt++;
            dfs1(scc[i]);
        }
        printf("%d\n", cnt - 1);
    }
    return 0;
}
