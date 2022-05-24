#include <bits/stdc++.h>
#define ll long long
#define mx 100007
using namespace std;

ll phi[mx];

void SievePhi(ll n)
{
    ll i, j;
    for(i = 0; i < n; i++)
        phi[i]=i;

    for(i = 2; i < n; i++)
    {
        if(phi[i] == i)
        {
            phi[i]=i-1;
            for(j = i + i; j < n; j += i)
            {
                phi[j] = (phi[j] / i) * (i - 1);
            }
        }
    }
}

int main()
{
    ll a, b, i, t;
    SievePhi(mx);

    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld", &a);

        printf("%lld\n", phi[a]);
    }
    return 0;
}
