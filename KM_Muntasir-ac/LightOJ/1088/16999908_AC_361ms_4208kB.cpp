#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll t, i, k, n, q, x, y, l, h;
    scanf("%lld", &k);
    for(t=1;t<=k;t++)
    {
        scanf("%lld %lld", &n, &q);
        vector <ll > v;
        for(i=0;i<n;i++) {scanf("%lld", &x); v.push_back(x);}
        printf("Case %lld:\n", t);
        while(q--)
        {
            scanf("%lld %lld", &x, &y);
            l = (lower_bound (v.begin(), v.end(), x) - v.begin());
            h = (lower_bound (v.begin(), v.end(), y) - v.begin());
            if(y==v[h]) h++;
            printf("%lld\n", h-l);
        }
    }
    return 0;
}
