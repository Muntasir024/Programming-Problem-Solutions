#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, t, k;
    scanf("%lld", &k);
    for(t=1; t<=k; t++)
    {
        scanf("%lld", &n);
        n=n*(n-1);
        if(n%4)
            printf("Case %lld: %lld/2\n", t,n/2);
        else
            printf("Case %lld: %lld\n", t,n/4);
    }
    return 0;
}