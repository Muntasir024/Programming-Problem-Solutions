#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, tc = 1;
    while(scanf("%d", &n) != EOF)
    {
        getchar();
        int indegree[n+2];
        memset(indegree, 0, sizeof(indegree));
        map <string, int> mp;
        vector<int > adjList[n+1];
        string s[n+2];
        for(int i=1; i<=n; i++)
        {
            cin>>s[i];
            mp[s[i]] = i;
        }
        scanf("%d", &m);
        getchar();
        string u, v;
        while(m--)
        {
            cin>>u>>v;
            adjList[mp[u]].push_back(mp[v]);
            ++indegree[mp[v]];
        }

        priority_queue<int, vector<int>, greater<int> >q;

        for(int i = 1; i <= n; ++i)
        {
            if(!indegree[i])
                q.push(i);
        }
        printf("Case #%d: Dilbert should drink beverages in this order:", tc++);
        while(!q.empty())
        {
            int x = q.top();
            q.pop();
            cout<<" "<<s[x];

            for(unsigned i = 0; i < adjList[x].size(); ++i)
            {
                int y = adjList[x][i];
                --indegree[y];
                if(indegree[y] == 0)
                    q.push(y);
            }
        }
        printf(".\n\n");
    }
    return 0;
}

