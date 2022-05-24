#include <bits/stdc++.h>
#define ll long long
#define maxn 10000007
using namespace std;

ll a[maxn+10], n, s;

ll update(ll i, ll v)
{
    for( ; i <= maxn; i = i + (i & -i))
        a[i] += v;
}

ll query(ll i)
{
    s = 0;
    for( ; i > 0; i = i - (i & -i))
        s += a[i];
    return s;
}

int main()
{
    ll i, t, ans, mx;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld", &n);
        ll b[n+2];
        ans = mx = 0;
        for(i=0; i<n; i++)
        {
            scanf("%lld", &b[i]);
            if(mx<b[i])
                mx=b[i];
        }

        for(i=0; i<=mx; i++)
            a[i]=0;
        for(i=n-1; i>=0; i--)
        {
            ans += query(b[i]-1);
            update(b[i], 1);
        }
        printf("%lld\n", ans);
    }
    return 0;
}
