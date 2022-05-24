#include <bits/stdc++.h>
#define ll long long
#define mx 1000007
using namespace std;

ll a[mx+10], b[mx+10], n, s;

ll update(ll i, ll v)
{
    for( ; i <= mx; i = i + (i & -i))
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
    ll m, c, i, u, v, k, x, t, tc;
    scanf("%lld", &t);
    for(tc=1;tc<=t;tc++)
    {
        scanf("%lld %lld", &n, &m);
        for(i = 0; i <= n; i++)
        {
            a[i] = 0;
        }
        b[0] = 0;
        for(i = 1; i <= n; i++)
        {
            scanf("%lld", &b[i]);
            update(i, b[i]);
        }
        printf("Case %lld:\n", tc);
        while(m--)
        {
            scanf("%lld", &u);
            if(u==1)
            {
                scanf("%lld", &v);
                v++;
                k = query(v);
                k = k - query(v-1);
                printf("%lld\n", k);
                update(v, -k);
            }
            else if(u==2)
            {
                scanf("%lld %lld", &u, &v);
                update(u+1, v);
            }
            else if(u==3)
            {
                scanf("%lld %lld", &u, &v);
                k = query(v+1);
                k = k - query(u);
                printf("%lld\n", k);
            }
        }
    }
    return 0;
}
