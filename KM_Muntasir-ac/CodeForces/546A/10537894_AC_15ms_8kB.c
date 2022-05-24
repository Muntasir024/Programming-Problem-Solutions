#include<stdio.h>
int main()
{
    long a,b,c,s=0,i;
    scanf("%ld %ld %ld",&a,&b,&c);
    for(i=1;i<=c;i++)
        s = s + (i*a);

    if(s>b)
        printf("%ld\n", s-b );
    else
        printf("0\n");

    return 0;
}