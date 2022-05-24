#include<stdio.h>
int main()
{
    long a,b,sum;
    while (1) {
        scanf("%ld%ld",&a,&b);
        if (a==0 && b==0)
            return 0;
        sum=a+b;
        printf("%ld\n",sum);
    }
    return 0;
}
