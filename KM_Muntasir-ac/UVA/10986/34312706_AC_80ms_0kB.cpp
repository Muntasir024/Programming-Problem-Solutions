#include<bits/stdc++.h>
#define N 20010
#define ll long long
#define INF LONG_LONG_MAX
using namespace std;
typedef pair<ll,ll> pi;
vector<pi> a[N];
ll dis[N];
ll p[N];
ll n,m;
void dijkstra(ll s)
{
    priority_queue<pi,vector<pi>,greater<pi> >pq;
    dis[s]=0;
    pq.push(pi(0,s));
    while(pq.size())
    {
        ll u,du,w,v;
        u=pq.top().second;
        du=pq.top().first;
        pq.pop();

        if(du!=dis[u])
            continue;

        for(int i=0; i<a[u].size(); i++)
        {
            v=a[u][i].second;
            w=a[u][i].first;

            if(du+w<dis[v])
            {
                dis[v]=du+w;
                p[v]=u;
                pq.push(pi(dis[v],v));
            }
        }
    }
}

int main()
{
    ll x, y, w, s, t, tc = 1, c;
    scanf("%lld", &c);
    while(c--)
    {
        scanf("%lld %lld %lld %lld",&n,&m, &s, &t);
        for(int i=0; i<=n; i++)
        {
            a[i].clear();
            dis[i] = INF;
        }
        for(int i=1; i<=m; i++)
        {
            scanf("%lld %lld %lld",&x,&y,&w);
            a[x].push_back(pi(w,y));
            a[y].push_back(pi(w,x));
        }
        dijkstra(s);
        printf("Case #%lld: ", tc++);
        if(dis[t]!=INF)
        {
            printf("%lld\n", dis[t]);
        }
        else
        {
            printf("unreachable\n");
        }
    }
}
