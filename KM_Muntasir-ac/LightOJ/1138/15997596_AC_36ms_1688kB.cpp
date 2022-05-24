#include <bits/stdc++.h>
#define ll long long
#define sc1(n) scanf("%lld", &n)
#define sc2(n,m) scanf("%lld %lld", &n, &m)
using namespace std;

ll sum(ll x)
{
    ll d = 0;
    while(x)
    {
        d += (x/5);
        x /= 5;
    }
    return d;
}

int main()
{
    ll t, k, n, x, l, r, m, ans;
    sc1(k);
    for(t=1; t<=k; t++)
    {
        sc1(n);
        l=1,ans=0,r=1000000000000;
        while(l<=r)
        {
            m=(l+r)/2;
            if(sum(m) == n)
            {
                ans=m;
                r=m-1;
            }
            else if(sum(m) > n)
                r = m-1;
            else
                l = m+1;
        }
        if(ans)
            printf("Case %lld: %lld\n", t, ans);
        else
            printf("Case %lld: impossible\n", t);
    }
    return 0;
}

