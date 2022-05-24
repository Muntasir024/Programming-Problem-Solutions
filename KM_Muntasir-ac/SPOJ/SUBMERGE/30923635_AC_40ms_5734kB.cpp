#include<bits/stdc++.h>
using namespace std;

int in[10001], low[10001], vis[10001], timer;
vector <int > adj[10001];
set <int > res;

void DFS(int node, int par)
{
    in[node] = low[node] = timer++;
    vis[node] = 1;
    int rc = 0;

    for(int child : adj[node])
    {
        if(child == par) continue;

        if(vis[child])
        {
            low[node] = min(low[node], in[child]);
        }
        else
        {
            DFS(child, node);
            low[node] = min(low[node], low[child]);
            rc++;
            if(low[child] >= in[node] && par != (-1))
            {
                res.insert(node);
            }
        }
    }

    if(par == (-1) && rc > 1) res.insert(rc);
}

int main()
{
    int n, m, a, b, i;
    while(scanf("%d %d", &n, &m) && n && m)
    {
        for(i=0;i<=n;i++) adj[i].clear(), vis[i]=0;
        res.clear();
        while(m--)
        {
            scanf("%d %d", &a, &b);
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        timer = 1;
        for(i=1;i<=n;i++)
            if(!vis[i])
                DFS(i, -1);
        printf("%d\n", res.size());
    }
}

