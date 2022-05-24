#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool visit[1007];
vector <ll > adj[1007];

int main()
{
    ll t, tc, i, j, n, m, u, v, p, c, mx;
    scanf("%lld", &t);
    for(tc=1; tc<=t; tc++)
    {
        scanf("%lld %lld", &n, &m);
        ll a[n+2];
        for(i=0; i<n; i++)
        {
            scanf("%lld", &a[i]);
            visit[i]=false,adj[i].clear();
        }
        while(m--)
        {
            scanf("%lld %lld", &u, &v);
            adj[u].push_back(v);
        }
        p = c = 0;
        queue <ll > q;
        q.push(0);
        visit[0] = true;

        while(!q.empty())
        {
            ll u = q.front();
            q.pop();
            mx = 0;
            for(ll i=0; i < adj[u].size(); i++)
            {
                if(visit[adj[u][i]]==false)
                {
                    ll v = adj[u][i];
                    mx = max(mx, a[v]);
                }
            }
            for(ll i=0; i < adj[u].size(); i++)
            {
                ll v = adj[u][i];
                if(visit[adj[u][i]]==false && mx == a[v])
                {
                    visit[v] = true;
                    p = v;
                    q.push(v);
                }
            }
            c += mx;
        }

        printf("Case %lld: %lld %lld\n", tc, c, p);
    }
    return 0;
}
