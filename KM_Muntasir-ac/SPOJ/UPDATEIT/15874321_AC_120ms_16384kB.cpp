#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a[20007], n, s;

ll update(ll i, ll v)
{
    for( ; i <= n; i = i + (i & -i))
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
    ll m, c, i, u, v, k, x, t;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld %lld", &n, &m);
        for(i = 0; i <= n; i++)
            a[i] = 0;

        while(m--)
        {
            scanf("%lld %lld %lld", &u, &v, &k);
            update(u+1, k);
            k = (-1)*k;
            update(v+2, k);

        }
        scanf("%lld", &m);
        while(m--)
        {
            scanf("%lld", &x);
            printf("%lld\n", query(x+1));
        }
    }
    return 0;
}

