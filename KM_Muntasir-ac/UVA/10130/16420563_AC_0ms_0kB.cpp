#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t, n, m, i, j;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld", &n);
        ll DP[40], v[n+2], wt[n+2];
        for(i=1; i<=n; i++)
            scanf("%lld %lld", &v[i], &wt[i]);

        for(i=0; i<=35; i++) DP[i]=0;
        for (i = 1; i <= n; i++)
        {
            for (j = 30; j >= wt[i]; j--)
            {
                DP[j] = max(DP[j], v[i] + DP[j - wt[i]]);
            }
        }
        ll x,mx=0;
        scanf("%lld", &x);
        while(x--)
        {
            scanf("%lld", &m);

            mx+=DP[m];
        }
        printf("%lld\n", mx);
    }
    return 0;
}
