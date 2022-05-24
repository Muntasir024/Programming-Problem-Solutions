#include<stdio.h>

int main()
{
    long long nn,x,i,c=0,e=0,s;
    scanf("%lld",&nn);
    for(i=0;i<nn;i++)
    {
        scanf("%lld",&x);
        if(x%2==1)
            ++c;
        else
            ++e;
    }
    if(e>=c)
        printf("%lld\n",c);
    else
        printf("%lld\n",e+(c-e)/3);
    return 0;
}
