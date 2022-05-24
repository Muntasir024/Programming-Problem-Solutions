#include <bits/stdc++.h>
using namespace std;

vector <int > arr[100007];
stack <int > ans;
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
    ans.push(s);
}

void ds(int s)
{
    visited[s] = 2;

    for(int i=0; i<arr[s].size(); i++)
    {
        if(visited[arr[s][i]] == 1)
        {
            ds(arr[s][i]);
        }
    }
}

int main()
{
    int t, i, u, v, n, m, c;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &n, &m);
        for(i=0; i<=n; i++) visited[i]=0, arr[i].clear();
        while(m--)
        {
            scanf("%d %d", &u, &v);
            arr[u].push_back(v);
        }

        c = 0;
        for(i=1; i<=n; i++)
        {
            if(visited[i] == 0)
            {
                dfs(i);
            }
        }

        while(!ans.empty())
        {
            i = ans.top();
            ans.pop();
            if(visited[i] == 1)
            {
                ds(i);
                ++c;
            }
        }
        printf("%d\n", c);
    }
    return 0;
}
