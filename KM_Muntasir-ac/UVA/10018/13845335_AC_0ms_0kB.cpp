#include <stdio.h>
long long reverse(long long n)
{
    long long sum=0;

    while(n)
    {
        sum= 10*sum + n%10;
        n=n/10;
    }

    return sum;
}

int main()
{
    long long n,rev,cnt;
    int t;
    scanf("%d",&t);
    while(t--)
    {

        scanf("%lld",&n);
        cnt=0;

        while(1)
        {
            rev = reverse(n);
            if(rev==n)
                break;
            n = n + rev;
            cnt++;
        }
        printf("%lld %lld\n",cnt, rev);
    }
    return 0;
}
