#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a[1000007], n, s;

ll update(ll i, ll v)
{
    for( ; i <= 1000000; i = i + (i & -i))
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
    ll m, c, i, u, v, k, x, t, tc = 1;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld", &n);
        for(i = 0; i <= 1000000; i++)
            a[i] = 0;
        c = 0;
        for(i = 1; i <= n; i++)
        {
            scanf("%lld", &x);
            c += query(x);
            update(x+1, x);
        }
        printf("%lld\n", c);
    }
    return 0;
}

