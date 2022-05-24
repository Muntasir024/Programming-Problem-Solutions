#include<bits/stdc++.h>
using namespace std;

vector <int > adj[2507];
int visit[2507];

int main ()
{
    int n, m, x, i, t;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &m);
        while(m--)
        {
            scanf("%d", &x);
            adj[i].push_back(x);
        }
    }
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &m);
        for(i=0; i<=n; i++) visit[i]=-1;

        queue <int > q;
        map <int, int > mp;
        int mx = 0, u, v, p = -1;
        q.push(m);
        visit[m] = 0;
        while(!q.empty())
        {
            u = q.front();
            q.pop();

            for(i=0; i<adj[u].size(); i++)
            {
                v = adj[u][i];
                if(visit[v] == -1)
                {
                    visit[v] = visit[u] + 1;
                    //cout << v << endl;
                    q.push(v);
                    if(v!=m)
                    {
                        mp[visit[v]]++;
                        if(mp[visit[v]] > mx)
                        {
                            mx = mp[visit[v]];
                            // cout << i << endl;
                            p = visit[v];
                        }
                    }
                }
            }
        }
        printf("%d", mx);
        if(mx != 0) printf(" %d", p);
        printf("\n");
    }
    return 0;
}

