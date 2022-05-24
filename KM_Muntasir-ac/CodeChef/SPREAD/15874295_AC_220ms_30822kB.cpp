#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a[2000007], n, s;

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
    ll m, c, i, u, v, k, x;
    char ch;
    scanf("%lld %lld %lld", &n, &m, &c);
    for(i = 1; i <= n; i++)
        a[i] = 0;
    while(m--)
    {
        cin>>ch;
        if(ch == 'S')
        {
            scanf("%lld %lld %lld", &u, &v, &k);
            /*for(i=u; i<=n+20; i = i + (i & -i))
            {
                a[i] += k;
            }
            for(i=v+1; i<=n+20; i = i + (i & -i))
            {
                a[i] -= k;
            }*/
            update(u, k);
            k = (-1)*k;
            update(v+1, k);
        }
        else
        {
            scanf("%lld", &x);
            /*i = x;
            while(i)
            {
                s += a[i];
                i = i - (i & -i);
            }*/
            printf("%lld\n", query(x) + c);
        }
        cin.ignore();
    }
    return 0;
}
