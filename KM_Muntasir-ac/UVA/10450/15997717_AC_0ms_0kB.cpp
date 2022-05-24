#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t, k, n, i, f[60];
    f[0] = 1;
    f[1] = 2;
    for(i=2; i<=59; i++)
        f[i] = f[i-1] + f[i-2];
    scanf("%lld", &k);
    for(t=1; t<=k; t++)
    {
        scanf("%lld", &n);
        printf("Scenario #%lld:\n", t);
        printf("%lld\n\n", f[n]);
    }
    return 0;
}

