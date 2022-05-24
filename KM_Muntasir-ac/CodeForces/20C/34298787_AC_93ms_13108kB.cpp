#include<bits/stdc++.h>
#define N 100010
#define ll long long
#define INF LONG_LONG_MAX
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
                p[v]=u;
                pq.push(pi(dis[v],v));
            }
        }
    }
}
void print(ll x)
{
    v.push_back(x);
    if(x==1)
        return;
    print(p[x]);
}
int main()
{
    ll x, y, w;
    scanf("%lld %lld",&n,&m);
    for(int i=1; i<=m; i++)
    {
        scanf("%lld %lld %lld",&x,&y,&w);
        a[x].push_back(pi(w,y));
        a[y].push_back(pi(w,x));
    }
    dijkstra();
    if(dis[n]!=INF)
    {
        print(n);
        reverse(v.begin(), v.end());
        for(int i=0;i<v.size();i++) printf("%lld ", v[i]);
        printf("\n");
    }
    else
    {
        printf("-1\n");
    }
}