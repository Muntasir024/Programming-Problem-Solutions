#include<stdio.h>
int main()
{
    int a,b,c;

    scanf("%d %d",&a,&b);

    if(a>b)
        printf("%d\n", b-(a-b) );
    else
        printf("%d\n", b+(b-a) );

    return 0;
}