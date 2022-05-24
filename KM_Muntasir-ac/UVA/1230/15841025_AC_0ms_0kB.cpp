#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll binpow(ll a, ll b, ll m)
{
    a %= m;
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

int main()
{
    ll t, a, b, m;
    while(scanf("%lld", &t) && t)
    {
        while(t--)
        {
            scanf("%lld %lld %lld",&a, &b, &m);
            printf("%lld\n", binpow(a, b, m));
        }
    }
}
