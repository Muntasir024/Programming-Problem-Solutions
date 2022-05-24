#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll ans[200007];

int main()
{
    ll n, i, m, x,y, s = 0;
    scanf("%lld %lld", &n, &m);
    ll a[n+2], b[n+2];

    for(i = 1; i <= n; i++)
    {
        scanf("%lld", &a[i]);
        b[i]=a[i];
    }
    sort(b+1, b+n+1);
    for(i=1; i<=n; i++)
    {
        x = lower_bound(b+1,b+n+1,a[i])-b;
        ans[i] = x - 1;
    }
    for(i=0; i<m; i++)
    {
        scanf("%lld %lld", &x, &y);
        if(a[x] > a[y])
            ans[x]--;
        else if(a[x]<a[y])
            ans[y]--;
    }

    printf("%lld", ans[1]);
    for(i=2; i<=n; i++)
        printf(" %lld", ans[i]);
    printf("\n");
    return 0;
}
