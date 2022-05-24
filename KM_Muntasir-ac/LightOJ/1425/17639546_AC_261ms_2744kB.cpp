#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, mx, mn, t, i, x, tc = 1, l, m, h, ans;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld", &n);
        long long a[n+2];
        mx = mn = 0;
        for(i=0;i<n;i++)
        {
            scanf("%lld", &a[i]);
            mx = max(mx, a[i]);
            if(i)
                mn = max(mn, a[i]-a[i-1]);
        }
        if(n==1) mn = a[0];
        l = 0, h = mx, ans = 0;
        while(l<=h)
        {
            m = (l+h) / 2;
            x = m;
            for(i=1;i<n;i++)
            {
                if(a[i]-a[i-1] > x)
                    x = 0;
                if(a[i]-a[i-1] == x)
                    x--;
            }
            if(x > 0)
            {
                ans = m;
                h = m - 1;
            }
            else
                l = m + 1;
        }
        printf("Case %lld: %lld\n", tc++, max(ans, mn));
    }
    return 0;
}
