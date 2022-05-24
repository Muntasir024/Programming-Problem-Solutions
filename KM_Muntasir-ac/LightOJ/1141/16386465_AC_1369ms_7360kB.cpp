#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector <ll > adj[1007];
ll visit[1007];
ll dist[1007];
ll p[1007], l;
bool prime[1000007];
vector <ll > v;

void seive()
{
    memset(prime, true, sizeof(prime));
    v.push_back(2);
    for (ll p=4; p*p<=1000000; p+=2)
        prime[p] = false;
    for (ll p=3; p*p<=1000000; p+=2)
    {
        if (prime[p] == true)
        {
            v.push_back(p);
            for (ll i=p*2; i<=1000000; i += p)
                prime[i] = false;
        }
    }
    l = v.size();
}

void BFS(ll s, ll t)
{
    memset(visit, 0, sizeof(visit));

    queue <ll > q;
    q.push(s);
    visit[s] = 1;
    dist[s] = 0;
    p[s] = s;
    seive();

    while(!q.empty())
    {
        ll u = q.front();
        q.pop();

        ll n = u;
        if(prime[u]==false)
        {
            for(ll i=0; i<l; i++)
            {
                if(v[i]>n)
                    break;
                if(n%v[i]==0)
                {
                    adj[u].push_back(v[i]);
                }
            }
        }

        for(ll i=0; i < adj[u].size(); i++)
        {
            if(visit[u+adj[u][i]]==0 && adj[u][i]+u<=t)
            {
                ll v = u+adj[u][i];
                visit[v] = 1;
                dist[v] = dist[u] + 1;
                p[v] = u;
                q.push(v);
            }
        }
    }
    if(!visit[t])
        printf("-1\n");
    else
    {
        ll now = t, c = 0;
        while(now != s)
        {
            now = p[now];
            ++c;
        }
        printf("%lld\n", c);
    }
}

int main()
{
    ll  tc, k, s, t, p, i;
    scanf("%lld", &k);
    for(tc = 1; tc <= k; tc++)
    {
        scanf("%lld %lld", &s, &t);
        printf("Case %lld: ", tc);
        if(prime[s])
        {
            if(s==t)
                printf("0\n");
            else
                printf("-1\n");
        }
        else
            BFS(s, t);
    }
    return 0;
}

