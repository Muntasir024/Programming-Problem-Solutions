#include<bits/stdc++.h>
using namespace std;

vector <int > adj[100001];
vector <int > tr[100001];
vector <int > order;
stack <int > scc;
int vis[100001];
int cnt;
char ch;

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
    int t, n, m, a, b;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin >> ch;
                if(ch == 'Y'){
                adj[i].push_back(j);
                tr[j].push_back(i);
                }
            }
        }

        for(int i=0; i<n; i++) if(!vis[i]) dfs(i);
        for(int i=0; i<=n; i++) vis[i]=0;
        cnt = 0;
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
        printf("%d\n", cnt);
        for(int i=0;i<=n;i++) adj[i].clear(), tr[i].clear(), vis[i]=0;
    }
    return 0;
}
