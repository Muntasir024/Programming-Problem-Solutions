#include<bits/stdc++.h>
using namespace std;

vector <int > adj[1007];
int visit1[1007];
int visit2[1007];

int main()
{
    int n, m, i, mx, j, t, tc, u, v;
    scanf("%d", &t);
    for(tc=1;tc<=t;tc++)
    {
        scanf("%d %d", &n, &m);
        for(i=0;i<=n;i++) adj[i].clear();
        for(i=0;i<m;i++)
        {
            scanf("%d %d", &u, &v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        scanf("%d %d", &u, &v);
        mx = 0;

        for(i=0;i<=n;i++) visit1[i]=-1;
        for(i=0;i<=n;i++) visit2[i]=-1;
        queue <int > q;
        q.push(u);
        visit1[u] = 0;
        while(!q.empty())
        {
            u = q.front();
            q.pop();

            for(i=0;i<adj[u].size();i++)
            {
                if(visit1[adj[u][i]] == -1)
                {
                    visit1[adj[u][i]] = visit1[u] + 1;
                    q.push(adj[u][i]);
                }
            }
        }
        q.push(v);
        visit2[v] = 0;
        while(!q.empty())
        {
            u = q.front();
            q.pop();

            for(i=0;i<adj[u].size();i++)
            {
                if(visit2[adj[u][i]] == -1)
                {
                    visit2[adj[u][i]] = visit2[u] + 1;
                    q.push(adj[u][i]);
                }
            }
        }
        for(i=0;i<n;i++)
        {
            mx = max(mx, visit1[i]+visit2[i]);
        }
        printf("Case %d: %d\n", tc, mx);
    }
    return 0;
}
