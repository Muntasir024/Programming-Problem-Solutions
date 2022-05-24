#include<stdio.h>
main()
{
    long long i,f[90];f[1]=1;f[2]=1;
    for(i=3; i<=85; i++)
        f[i]=f[i-1]+f[i-2];
    while(scanf("%lld",&i)&&i)
    {
        printf("%lld\n",f[i]);
    }
}