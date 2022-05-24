#include<bits/stdc++.h>
using namespace std;

int visited[100007] = {0}, f;
vector <int > arr[100007];

void dfs(int s, int x)
{
    if(visited[s])
    {
        f = 0;
        return;
    }
    visited[s]=1;

    for(int i=0;i<arr[s].size();i++)
    {
        if(arr[s][i]!=x)
        {
            dfs(arr[s][i], s);
        }
    }
}

int main()
{
    int n, m, i, c = 0, u, v;
    cin >> n >> m;
    for(i=0;i<=n;i++) visited[i]=0;
    while(m--)
    {
        cin >> u >> v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }
    for(i=1;i<=n;i++)
    {
        if(visited[i] == 0)
        {
            f = 1;
            dfs(i, -1);
            c += f;
        }
    }
    cout << c << endl;
    return 0;
}
