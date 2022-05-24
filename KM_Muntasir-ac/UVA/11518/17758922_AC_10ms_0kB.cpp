#include <bits/stdc++.h>
using namespace std;

vector <int > arr[100007];
int visited[100007];

void dfs(int s)
{
    visited[s] = 1;

    for(int i=0; i<arr[s].size(); i++)
    {
        if(visited[arr[s][i]] == 0)
        {
            dfs(arr[s][i]);
        }
    }
}

int main()
{
    int t, i, u, v, n, m, q, c;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d %d", &n, &m, &q);
        for(i=0; i<=n; i++) visited[i]=0, arr[i].clear();
        while(m--)
        {
            scanf("%d %d", &u, &v);
            arr[u].push_back(v);
        }

        int a[q+2];
        for(i=0; i<q; i++)
        {
            scanf("%d", &a[i]);
            dfs(a[i]);
        }

        c = 0;
        for(i=1; i<=n; i++) if(visited[i] == 1) ++c;

        printf("%d\n", c);
    }
    return 0;
}
