#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, c, i, t, l, h, m, x, ans, s;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld %lld", &n, &c);
        long long a[n+2];
        for(i=0; i<n; i++)
            scanf("%lld", &a[i]);
        sort(a, a+n);
        l = a[0], h = a[n-1], ans = 0;
        while(l<=h)
        {
            m = (l+h) / 2;
            x = a[0], s = 1;
            for(i = 1; i < n; i++)
            {
                if(a[i]-x >= m)
                {
                    s++;
                    x = a[i];
                }
            }

            if(s >= c)
            {
                ans = m;
                l = m + 1;
            }
            else
                h = m - 1;
        }
        printf("%lld\n", ans);
    }
}
