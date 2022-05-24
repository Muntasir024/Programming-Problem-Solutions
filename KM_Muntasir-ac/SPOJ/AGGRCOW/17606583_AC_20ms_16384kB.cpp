#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, c, i, t, l, h, m, x, ans, s;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &n, &c);
        int a[n+2];
        for(i=0; i<n; i++)
            scanf("%d", &a[i]);
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
        printf("%d\n", ans);
    }
}
