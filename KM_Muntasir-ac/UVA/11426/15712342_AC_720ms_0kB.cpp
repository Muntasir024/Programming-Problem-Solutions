#include <bits/stdc++.h>
#define ll long long
#define mx 4000007
using namespace std;

ll phi[mx];
ll eular[mx];

void SievePhi(ll n)
{
    ll i, j;
    for(i = 0; i < n; i++)
        phi[i]=i;

    for(i = 2; i < n; i++)
        if(phi[i] == i)
            for(j = i; j < n; j += i)
                phi[j] = phi[j] / i * (i - 1);
}

int main()
{
    ll n, i, j, ans;
    SievePhi(mx);
    eular[0] = phi[0];
    for(i = 1; i < mx; i++) eular[i] = eular[i-1]+ phi[i];

    while(scanf("%lld", &n) && n)
    {
        ans = 0;
        for(i = 1; i <= n; i++)
        {
            ans += i * (eular[n / i] - 1);
        }
        printf("%lld\n", ans);
    }

    return 0;
}

