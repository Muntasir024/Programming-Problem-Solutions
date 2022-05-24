#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, i, x, j, tc = 1;
    while(scanf("%d%d", &n,&k) == 2)
    {
        if((n+k) == 0)
            return 0;

        map <int, int> m;
        map <int, int> q;
        int a[n+2];
        for(i=0;i<n;i++) cin>>a[i];
        sort(a, a+n);
        for(i=0;i<n;i++)
        {
            m[a[i]]++;
            if(m[a[i]] == 1)
            {
                q[a[i]] = i + 1;
            }
        }
        printf("CASE# %d:\n", tc++);
        for(i=1;i<=k;i++)
        {
            cin>>x;
            if(m[x] == 0)
            {
                printf("%d not found\n", x);
            }
            else
            {
                printf("%d found at %d\n", x, q[x]);
            }
        }
    }
}
