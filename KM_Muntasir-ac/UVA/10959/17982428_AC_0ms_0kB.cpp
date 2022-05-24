#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll visit[1007];
vector <ll > adj[1007];

void BFS(ll s)
{
    queue <ll > q;
    q.push(s);
    visit[s] = 0;

    while(!q.empty())
    {
        ll u = q.front();
        q.pop();

        for(ll i=0; i < adj[u].size(); i++)
        {
            if(visit[adj[u][i]] == 0)
            {
                ll v = adj[u][i];
                visit[v] = visit[u] + 1;
                q.push(v);
            }
        }
    }
}

int main()
{
    ll t, n, m, i, u, v, tc;
    scanf("%lld", &t);
    for(tc=1;tc<=t;tc++)
    {
        if(tc!=1)
            printf("\n");
        scanf("%lld %lld", &n, &m);
        for(i=0;i<=n;i++) visit[i]=0,adj[i].clear();
        while(m--)
        {
            scanf("%lld %lld", &u, &v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        BFS(0);
        for(i=1; i<n; i++)
            printf("%lld\n", visit[i]);
    }
    return 0;
}
