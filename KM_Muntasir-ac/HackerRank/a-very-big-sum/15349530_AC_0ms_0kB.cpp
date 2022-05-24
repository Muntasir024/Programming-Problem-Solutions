#include <stdio.h>

int main()
{
    long long n,x,s=0;
    scanf("%lld",&n);
    while(n--)
    {
        scanf("%lld",&x);
        s+=x;
    }
    printf("%lld\n",s);
}
