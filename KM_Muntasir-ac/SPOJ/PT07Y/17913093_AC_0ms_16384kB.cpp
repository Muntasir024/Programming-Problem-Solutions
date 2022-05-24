#include<bits/stdc++.h>
using namespace std;

vector <int > arr[10007];
int visited[10007];

void dfs(int s)
{
    visited[s] = visited[s] + 1;;

    for(int i=0; i<arr[s].size(); i++)
    {
        if(visited[arr[s][i]] == 0)
        {
            dfs(arr[s][i]);
        }
        else
            visited[arr[s][i]] = visited[arr[s][i]] + 1;
    }
}

int main()
{
    int t, n, m, u, v, i, f = 1;
    scanf("%d %d", &n, &m);
    for(i=0; i<=n; i++) arr[i].clear(),visited[i] = 0;
    for(i=1; i<=m; i++)
    {
        scanf("%d %d", &u, &v);
        arr[u].push_back(v);
        arr[v].push_back(u);
    }
    dfs(1);
    for(i=1; i<=n; i++)
    {
        if(visited[v] != 1)
        {
            f = 0;
            break;
        }
    }
    if(f) printf("YES\n");
    else printf("NO\n");
    return 0;
}
