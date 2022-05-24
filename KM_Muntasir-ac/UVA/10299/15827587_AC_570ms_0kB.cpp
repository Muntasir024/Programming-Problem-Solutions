#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll phi(ll n)
{
    ll r = n, i;
    for(i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
                n/=i;
            r -= (r/i);
        }
    }
    if(n>1)
        r -= (r/n);
    return r;
}

int main()
{
    ll b;
    while(true)
    {
        scanf("%lld",&b);
        if(b==0)
            return 0;
        if(b==1)
        {
            printf("0\n");
            continue;
        }
        printf("%lld\n", phi(b));
    }
}
