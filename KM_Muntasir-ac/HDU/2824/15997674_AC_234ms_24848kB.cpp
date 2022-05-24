#include <bits/stdc++.h>
#define ll long long
#define mx 3000007
using namespace std;

ll phi[mx] = {0};

void SievePhi(ll n)
{
    ll i, j;

    for(i=0; i<n; i++)
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
    ll a, b, i, ans;
    SievePhi(mx);

    while(scanf("%lld%lld", &a, &b) != EOF)
    {
        ans = 0;
        for(i=a; i<=b; i++)
            ans += phi[i];

        printf("%lld\n", ans);
    }

    return 0;
}
