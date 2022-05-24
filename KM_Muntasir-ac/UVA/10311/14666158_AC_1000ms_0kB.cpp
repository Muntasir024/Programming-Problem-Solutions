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

    while(scanf("%lld",&n) != EOF)
    {
        if(n<=4)
        {
            printf("%lld is not the sum of two primes!\n",n);
            continue;
        }
        if(n%2==1)
        {
            d=n-2;
            if(prime[d]!=1)
            {
                printf("%lld is the sum of 2 and %lld.\n",n,d);
                continue;
            }
            else
            {
                printf("%lld is not the sum of two primes!\n",n);
                continue;
            }
        }
        c=n/2;
        if(c%2==0)
        {
            c=c-1;
        }
        l=1;
        for(k=c; k>=1; k=k-2)
        {
            b=n-k;
            if(b-k>0 && prime[b]!=1 && prime[k]!=1)
            {
                l=0;
                break;
            }
        }
        if(l==0)
        {
            printf("%lld is the sum of %lld and %lld.\n",n,k,b);
        }
        else
        {
            printf("%lld is not the sum of two primes!\n",n);
        }
    }
    return 0;
}
