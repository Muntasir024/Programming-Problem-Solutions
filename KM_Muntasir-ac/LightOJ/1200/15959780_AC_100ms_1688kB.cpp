#include <bits/stdc++.h>
#define ll long long
#define sc1(n,m,o) scanf("%lld %lld %lld", &n, &m, &o)
#define sc2(n,m) scanf("%lld %lld", &n, &m)
using namespace std;

int main()
{
    ll n, w, i, j, t, k;
    scanf("%lld", &k);
    for(t=1; t<=k; t++)
    {
        sc2(n, w);
        ll v[n+2], wt[n+2], c;
        for(i=1; i<=n; i++)
        {
            sc1(v[i],c,wt[i]);
            w -= (wt[i]*c);
        }
        //cout<<w<<endl;
        if(w < 0)
        {
            printf("Case %lld: Impossible\n", t);
            continue;
        }
        ll DP[w+2];
        for(i=0; i<=w; i++)
            DP[i]=0;
        for (i = 1; i <= n; i++)
        {
            for (j = wt[i]; j <= w; j++)
            {
                DP[j] = max(DP[j], v[i] + DP[j - wt[i]]);
            }
        }
        printf("Case %lld: %lld\n", t, DP[w]);
    }
    return 0;
}
