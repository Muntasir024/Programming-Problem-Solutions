#include<stdio.h>
main()
{
    int n, t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(n%3==0) printf("%d is a multiple of 3\n", n);
        else printf("%d is not a multiple of 3\n", n);
    }
}
