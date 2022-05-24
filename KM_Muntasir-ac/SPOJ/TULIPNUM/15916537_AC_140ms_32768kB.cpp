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
        ll c[n+2];
        for(i = 0; i <= n; i++)
        {
            a[i] = 0;
            c[i] = 0;
        }
        b[0] = 0;
        for(i = 1; i <= n; i++)
        {
            scanf("%lld", &b[i]);
            if(b[i]==b[i-1])
            {
                c[i]=c[i-1];
            }
            else
            {
                c[i]=i;
                update(i, 1);
            }
        }
        printf("Case %lld:\n", tc);
        while(m--)
        {
            k = 0;
            scanf("%lld %lld", &u, &v);
            k = query(v);
            //cout<<c[u]<<endl;
            if(c[u] != u)
                k = k - query(c[u]-1);
            else
                k = k - query(u-1);
            printf("%lld\n", k);
            /*for(i=1;i<=n;i++)
                cout<<a[i]<<" ";
            cout<<endl;*/
        }
    }
    return 0;
}
