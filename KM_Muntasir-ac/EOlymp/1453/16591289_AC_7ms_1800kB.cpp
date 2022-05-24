#include<bits/stdc++.h>
#define N 1007
#define ll long long
#define INF 30000
using namespace std;
typedef pair<ll,ll> pi;
vector<pi> a[N];
vector<ll> v;
ll dis[N];
ll p[N];
ll n,m;
void dijkstra()
{
    priority_queue<pi,vector<pi>,greater<pi> >pq;
    for(int i=1; i<=n; i++)
        dis[i]=INF;
    dis[1]=0;
    pq.push(pi(0,1));
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
                pq.push(pi(dis[v],v));
            }
        }
    }
}

int main()
{
    ll x, y, w;
    scanf("%lld %lld",&n,&m);
    for(int i=1; i<=m; i++)
    {
        scanf("%lld %lld %lld",&x,&y,&w);
        a[x].push_back(pi(w,y));
    }
    dijkstra();
    for(int i=1;i<=n;i++)
    {
        printf("%lld ", dis[i]);
    }
}
