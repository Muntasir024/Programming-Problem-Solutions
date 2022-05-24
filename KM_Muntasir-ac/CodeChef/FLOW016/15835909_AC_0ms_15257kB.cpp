#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd (ll a, ll b)
{
    return b ? gcd (b, a % b) : a;
}

int main()
{
    ll t, a, b, i, g, l;

    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld %lld", &a,&b);
        g = gcd(a, b);
        l = a / g * b;
        printf("%lld %lld\n", g, l);
    }
    return 0;
}
