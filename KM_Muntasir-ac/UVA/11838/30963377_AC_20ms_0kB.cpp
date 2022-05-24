#include<bits/stdc++.h>
using namespace std;

vector <int > g[2001];
bool vis[2001], onStack[2001];
int in[2001], low[2001];
stack<int> st;

int timer = 1, SCC = 0;

void dfs(int node)
{
    vis[node] = 1;
    in[node] = low[node] = timer++;
    onStack[node] = true;
    st.push(node);

    for(int u : g[node])
    {
        if((vis[u] == true) && (onStack[u] == true))
        {
            low[node] = min(low[node], in[u]);
        }
        else if(vis[u] == false)
        {
            dfs(u);

            if(onStack[u] == true)
                low[node] = min(low[node], low[u]);
        }
    }

    if(in[node] == low[node])
    {
        SCC++;
        int u;

        while(1)
        {
            u = st.top();
            st.pop(), onStack[u] = false;

            if(u == node) break;
        }
    }
}

int main()
{
    int n, m, a, b, p;
    while(scanf("%d %d", &n, &m) && n && m)
    {
        for(int i=1; i<=m; i++)
        {
            scanf("%d %d %d", &a, &b, &p);
            g[a].push_back(b);
            if(p == 2)
                g[b].push_back(a);
        }

        for(int i=1; i<=n; i++)
            if(vis[i] == false) dfs(i);

        if(SCC == 1) printf("1\n");
        else         printf("0\n");

        for(int i=1; i<=n; i++) vis[i] = onStack[i] = false, g[i].clear();
        SCC = timer = 0;
    }
}
