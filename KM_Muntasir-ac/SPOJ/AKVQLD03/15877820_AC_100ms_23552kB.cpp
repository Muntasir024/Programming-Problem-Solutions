#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a[1000007], n, s;

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
    string str;

    scanf("%lld %lld", &n, &m);
    for(i = 0; i <= n; i++)
        a[i] = 0;

    while(m--)
    {
        cin>>str;
        if(str == "add")
        {
            scanf("%lld %lld", &u, &k);
            update(u, k);
        }
        else
        {
            k = 0;
            scanf("%lld %lld", &u, &v);
            k = query(v);
            k = k - query(u-1);
            printf("%lld\n", k);
        }

        cin.ignore();
    }
    return 0;
}

