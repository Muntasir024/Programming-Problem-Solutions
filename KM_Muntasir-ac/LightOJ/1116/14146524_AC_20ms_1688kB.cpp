#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,t,k,c,d,a,b;
    scanf("%lld",&k);
    for(t=1; t<=k; t++)
    {
        scanf("%lld",&n);

        if(n % 2 != 0)
        {
            printf("Case %lld: Impossible\n",t);
            continue;
        }

        for(i=2; i<=n/2; i+=2)
        {
            if((n/i) % 2 == 1 && ((n/i)*i) == n)
            {
                printf("Case %lld: %lld %lld\n",t,n/i,i);
                break;
            }
        }
    }
}


