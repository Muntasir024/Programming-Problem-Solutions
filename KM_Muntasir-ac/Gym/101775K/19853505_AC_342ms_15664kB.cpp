#include<bits/stdc++.h>
using namespace std;

long long t, n, k, c, s, f, x, y, aa, bb, tc, ans, i;
long long a[1000007], b[1000007];

int main()
{
    scanf("%lld", &t);
    for(tc=1;tc<=t;tc++)
    {
        scanf("%lld %lld %lld", &aa, &bb, &n);
        map <long long, int> m;
        b[0]=0;
        x=aa;
        y=bb;
        for(i=1;i<=aa;i++)
        {
            scanf("%lld", &a[i]);
            b[i]=b[i-1]+a[i];
        }
        while(n--)
        {
            i = lower_bound(b+1,b+aa+1,x)-b;
            y=a[i]-b[i]+x;
            if(m[i]==1) break;
            m[i]=1;
            x=i;
        }
        printf("Case #%lld: %lld-%lld\n", tc, x, y);
    }
    return 0;
}
