#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, i, n, mx, s, p, v, q, c;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld%lld", &n,&q);
        int a[n+2];
        mx = c = 0;
        map <long long, long long> m;
        for(i=1;i<=n;i++)
        {
            scanf("%lld", &a[i]);
            m[a[i]]++;
        }
        while(q--)
        {
            scanf("%lld", &i);
            if(i==1)
            {
                scanf("%lld%lld", &p,&v);
                m[a[p]] = m[a[p]] - 1;
                if(m[a[p]] == 0) m.erase(m.find(a[p]));
                a[p]=v;
                //if(m[a[p]] == 0) ++c;
                m[a[p]] = m[a[p]] + 1;
            }
            else
            {
                c = m.size();
                if(m.count(0)) --c;
                printf("%lld\n", c);
            }
        }
    }
    return 0;
}
