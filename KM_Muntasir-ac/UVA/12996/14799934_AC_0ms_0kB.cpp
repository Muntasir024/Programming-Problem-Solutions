#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, l, i, x, t, k, s;
    scanf("%d", &k);
    for(t = 1; t <= k; t++)
    {
        scanf("%d %d", &n, &l);
        int a[n+2];
        s = 0;
        bool f = 1;
        for(i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            s += a[i];
            if(s > l)
                f = 0;
        }
        for(i = 0; i < n; i++)
        {
            scanf("%d", &x);
            if(x < a[i])
                f = 0;
        }
        if(f)
            printf("Case %d: Yes\n", t);
        else
            printf("Case %d: No\n", t);
    }
    return 0;
}
