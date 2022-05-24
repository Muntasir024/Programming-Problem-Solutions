#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,t,tc,i;
    scanf("%lld", &t);
    for(tc=1;tc<=t;tc++)
    {
        scanf("%lld", &n);
        long long j=0, a[10];
        for(i=2;i <= n / 2;i++)
        {
            if(n%i == 0)
            {
                a[j]=i;
                ++j;
                a[j]=n/i;
                ++j;
            }
            if(j >= 3)
                break;
        }
        printf("Case #%lld: %lld = %lld * %lld = %lld * %lld\n", tc, n, a[0], a[1], a[2], a[3]);
    }
    return 0;
}
