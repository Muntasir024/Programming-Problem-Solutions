#include<stdio.h>
int main()
{
    int t,a,b;scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        b%a ? printf("-1\n") : printf("%d %d\n",a,b);
    }
}
