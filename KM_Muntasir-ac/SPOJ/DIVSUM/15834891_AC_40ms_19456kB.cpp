#include <bits/stdc++.h>
#define ll long long
#define mx 500007
using namespace std;

ll sum[mx];

int main()
{
    ll t, a, i, j;

    for(i=1;i<=mx;i++)
    {
        for(j=i+i;j<=mx;j+=i)
            sum[j]+=i;
    }
    sum[1] = 0;

    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld", &a);

        printf("%lld\n", sum[a]);
    }
    return 0;
}