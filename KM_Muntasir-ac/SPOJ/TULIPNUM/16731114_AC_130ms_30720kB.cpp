#include <bits/stdc++.h>
#define ll long long
#define mx 1000007
using namespace std;

ll a[mx+10], b[mx+10], n, s;

int main()
{
    ll m, c, i, u, v, k, x, t, tc;
    scanf("%lld", &t);
    for(tc=1;tc<=t;tc++)
    {
        scanf("%lld %lld", &n, &m);
        b[0] = 0;
        for(i = 1; i <= n; i++)
        {
            scanf("%lld", &b[i]);
            if(b[i]==b[i-1])
            {
                a[i]=a[i-1];
            }
            else
            {
                a[i]=a[i-1]+1;
            }
        }
        printf("Case %lld:\n", tc);
        while(m--)
        {
            scanf("%lld %lld", &u, &v);
            printf("%lld\n", a[v]-a[u]+1);
        }
    }
    return 0;
}
