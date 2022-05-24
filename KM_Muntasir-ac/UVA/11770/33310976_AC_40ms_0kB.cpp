#include<bits/stdc++.h>
using namespace std;

vector<int> adj[10007], scc;
int vis[10007];

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
    int t, n, m, a, b, tc = 1;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &n, &m);
        for(int i = 0; i <= n; i++) adj[i].clear(), vis[i] = 0;

        for(int i = 0; i < m; i++)
        {
            scanf("%d %d", &a, &b);
            adj[a].push_back(b);
        }
        for(int i = 1; i <= n; i++) vis[i] = 0;
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
        printf("Case %d: %d\n", tc++, cnt - 1);
    }
    return 0;
}
