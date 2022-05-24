#include<bits/stdc++.h>
#define ll long long
#define maxn 1007
#define INF 10000007
using namespace std;

ll dist[maxn];

int main()
{
    ll v, e, t, i, j, a, b, d;
    bool f;
    scanf("%lld", &t);
    while(t--)
    {
        vector < pair<ll, ll> > adj[maxn];
        for(i = 0; i < maxn; i++) dist[i] = INF;
        dist[0] = 0;
        f = false;
        scanf("%lld %lld", &v, &e);

        for(i = 0; i < e; i++)
        {
            scanf("%lld %lld %lld", &a, &b, &d);
            adj[a].push_back(make_pair(b, d));
        }

        for(i = 0; i < v; i++)
        {
            for(j = 0; j < adj[i].size(); j++)
            {
                if(dist[adj[i][j].first] > dist[i] + adj[i][j].second)
                    dist[adj[i][j].first] = dist[i] + adj[i][j].second;
            }
        }

        for(i = 0; !f && i < v; i++)
        {
            for(j = 0; !f && j < adj[i].size(); j++)
            {
                if(dist[adj[i][j].first] > dist[i] + adj[i][j].second)
                    f = true;
            }
        }

        if(f) printf("possible\n");
        else printf("not possible\n");
    }
    return 0;
}
