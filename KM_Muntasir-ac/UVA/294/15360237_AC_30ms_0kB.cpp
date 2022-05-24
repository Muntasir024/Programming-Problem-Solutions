#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, a, b, c, d, x, i, an, ans;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld%lld", &a,&b);
        an=0;
        ans=0;
        for(n=a; n<=b; n++)
        {
            x=n;
            d=1;
            c=0;
            while(n%2==0)
            {
                ++c;
                n=n/2;
            }
            if(c!=0)
            {
                d=d*(c+1);
            }
            for(i=3; i*i<=n; i+=2)
            {
                c=0;
                while(n%i==0)
                {
                    ++c;
                    n=n/i;
                }
                if(c != 0)
                {
                    d=d*(c+1);
                }
            }
            c=0;
            if(n>1)
            {
                d=d*2;
            }
            n=x;
            if(d > an)
            {
                an=d;
                ans=x;
            }
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n", a, b, ans, an);
    }

    return 0;
}
