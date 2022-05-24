#include<bits/stdc++.h>
using namespace std;

int visited[30007];
vector<int > adjList[30007];
string s[30007];

bool dfs(int s,int length)
{
    visited[s]=length;

    for(int i=0; i<adjList[s].size(); i++)
    {
        if(visited[adjList[s][i]] == -1)
        {
            dfs(adjList[s][i],length+1);
        }
        if(visited[adjList[s][i]] >= 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n, m, tc = 1, t, f;
    scanf("%d", &t);
    while(t--)
    {
        getchar();
        memset(visited, -1, sizeof(visited));
        map <string, int> mp;
        scanf("%d", &m);
        getchar();
        string u, v, a = "", b = "";
        n = f = 0;
        while(m--)
        {
            cin>>u>>v;
            if(u == b || v == a || u == v)
                f = 1;
            a = u;
            b = v;
            if(mp[u] == 0)
                mp[u] = ++n;
            if(mp[v] == 0)
                mp[v] = ++n;
            adjList[mp[u]].push_back(mp[v]);
        }

        if(f == 0)
            printf("Case %d: Yes\n", tc++);
        else
            printf("Case %d: No\n", tc++);
    }
    return 0;
}
