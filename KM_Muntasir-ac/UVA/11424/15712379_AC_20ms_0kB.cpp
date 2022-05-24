#include <bits/stdc++.h>
#define ll long long
#define mx 200007
using namespace std;

ll phi[mx];
ll gcd[mx];

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

void GCD()
{
    ll i, j;
    gcd[1] = 0;
    for(i = 1; i < mx; i++)
    {
        for(j = i + i; j < mx; j += i)
        {
            gcd[j] += (i * phi[j / i]);
        }
    }
    for(i = 2; i < mx; i++)
        gcd[i] += gcd[i-1];
}

int main()
{
    ll n;
    SievePhi(mx);
    GCD();

    while(scanf("%lld", &n) && n)
    {
        printf("%lld\n", gcd[n]);
    }
    return 0;
}


