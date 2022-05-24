#include<bits/stdc++.h>
using namespace std;

vector <int > arr[50007];
int visited[50007], c, k;

void dfs(int s)
{
    visited[s]=k;
    c++;
    for(int i=0;i<arr[s].size();i++)
    {
        if(visited[arr[s][i]]!=k)
        {
            dfs(arr[s][i]);
        }
    }
}

int main()
{
    int t, n, u, v, i, tc = 1, mx, p;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        for(i=0; i<=n; i++) arr[i].clear(),visited[i]=0;
        k = mx = 0;
        for(i=1; i<=n; i++)
        {
            scanf("%d %d", &u, &v);
            arr[u].push_back(v);
        }
        for(i=1; i<=n; i++)
        {
            if(visited[i]==0)
            {
                c = 0;
                k++;
                dfs(i);
                if(c>mx)
                {
                    mx=c;
                    p=i;
                }
            }
        }
        printf("Case %d: %d\n", tc++, p);
    }
    return 0;
}
