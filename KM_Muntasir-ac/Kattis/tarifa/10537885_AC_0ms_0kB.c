#include<stdio.h>
int main()
{
    unsigned a,b,c,s=0,i;

    scanf("%d",&a);
    scanf("%d",&b);
    for(i=1;i<=b;i++) {
        scanf("%d",&c);
        s = s + c;
    }
    printf("%d\n", ((a*b)-s)+a );

    return 0;
}