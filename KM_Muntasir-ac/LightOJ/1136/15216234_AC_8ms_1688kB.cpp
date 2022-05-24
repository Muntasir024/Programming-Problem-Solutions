#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long k, t, a, b, x, y, ans;
    scanf("%lld",&k);
    for(t=1; t<=k; t++)
    {
        scanf("%lld %lld",&a,&b);
        x = (b/3)*2;
        if(b%3 == 2)
            x++;
        y = (a/3)*2;
        if(a%3 == 2)
            y++;
        ans = x - y;
        if(a%3==0 || a%3==2)
            ans++;
        printf("Case %lld: %lld\n",t, ans);
    }
}

