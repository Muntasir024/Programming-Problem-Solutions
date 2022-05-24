#include<bits/stdc++.h>
#define mx 100000007
using namespace std;

bool prime[mx];

int main()
{
    long long n, p, i, k, c, b, d, l;
    prime[0]=1;
    prime[1]=1;
    for(i = 2; i * i <= mx; i++)
    {
        if(prime[i] == 0)
        {
            for(p = i + i; p <= mx; p += i)
                prime[p]=1;
        }
    }

    while(scanf("%lld",&n) && n)
    {
        printf("%lld:\n",n);
        if(n == 4)
        {
            printf("2+2\n");
            continue;
        }
        if(n%2==1)
        {
            d=n-2;
            if(prime[d]!=1)
            {
                printf("2+%lld\n",d);
                continue;
            }
            else
            {
                printf("NO WAY!\n");
                continue;
            }
        }
        for(k=3; k<=n; k++)
        {
            b=n-k;
            if(prime[b]!=1 && prime[k]!=1)
            {
                printf("%lld+%lld\n",k,b);
                break;
            }
        }
    }
    return 0;
}
