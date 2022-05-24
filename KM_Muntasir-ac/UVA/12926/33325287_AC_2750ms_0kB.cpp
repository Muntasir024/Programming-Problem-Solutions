#include<bits/stdc++.h>
using namespace std;

vector<int > adj[5007], tr[5007];
int vis[5007], ar[5007][5007];
stack <int > scc;

void dfs(int node)
{
    vis[node] = 1;

    for(int child : adj[node])
        if(!vis[child])
            dfs(child);
    scc.push(node);
}


void dfs1(int node)
{
    vis[node] = 1;

    for(int child : tr[node])
        if(!vis[child])
            dfs1(child);
}

int main()
{
    int t, n, m, a, b, tc = 1;
    while(scanf("%d %d", &n, &m) != EOF)
    {
        for(int i = 1; i <= n; i++) {
                adj[i].clear(), tr[i].clear(), vis[i] = 0;
                for(int j=1;j<=i;j++) ar[i][j]=1, ar[j][i]=1;
        }

        for(int i = 0; i < m; i++)
        {
            scanf("%d %d", &a, &b);
            ar[a][b] = 0;
        }
        scanf("%d", &b);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(ar[i][j]) {
                    adj[i].push_back(j);
                    tr[j].push_back(i);
                }
            }
        }
        for(int i=1; i<=n; i++) if(!vis[i]) dfs(i);
        for(int i=0; i<=n; i++) vis[i]=0;
        int cnt = 0;
        while(!scc.empty())
        {
            int i = scc.top();
            scc.pop();
            if(!vis[i])
            {
                dfs1(i);

                cnt++;
            }
        }
        printf("%d\n", cnt * b );
    }
    return 0;
}
