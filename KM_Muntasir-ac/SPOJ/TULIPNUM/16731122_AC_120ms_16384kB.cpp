#include <bits/stdc++.h>
#define ll int
using namespace std;

int main()
{
    ll m, c, i, u, v, k, x, t, tc, n;
    scanf("%d", &t);
    for(tc=1;tc<=t;tc++)
    {
        scanf("%d %d", &n, &m);
        ll a[n+2], b[n+2];
        b[0] = 0;
        for(i = 1; i <= n; i++)
        {
            scanf("%d", &b[i]);
            if(b[i]==b[i-1])
            {
                a[i]=a[i-1];
            }
            else
            {
                a[i]=a[i-1]+1;
            }
        }
        printf("Case %d:\n", tc);
        while(m--)
        {
            scanf("%d %d", &u, &v);
            printf("%d\n", a[v]-a[u]+1);
        }
    }
    return 0;
}
