#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t, n, a[10], g, e, q, s, f, x, tc;
    scanf("%lld", &t);
    for(tc=1;tc<=t;tc++)
    {
        scanf("%lld %lld %lld %lld %lld", &a[0], &a[1], &a[2], &a[3], &a[4]);
        g = q = s = f = e = 0;
        scanf("%lld", &n);
        while(n--)
        {
            scanf("%lld", &x);
            if(x>=1 && x<=48)
                g++;
            if(x>=49 && x<=56)
                e++;
            if(x>=57 && x<=60)
                q++;
            if(x>=61 && x<=62)
                s++;
            if(x==63)
                f++;
        }
        g = (a[0]*g) + (a[1]*e) + (a[2]*q) + (a[3]*s) + (a[4]*f);
        printf("Case #%lld: %lld\n", tc, g*10000);
    }
    return 0;
}
