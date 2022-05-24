#include<stdio.h>
int main()
{
    int t,n,k,p,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++) {
        scanf("%d %d %d",&n,&k,&p);
        if((p+k)%n)
            printf("Case %d: %d\n",i,(p+k)%n );
        else
            printf("Case %d: %d\n",i,n);
    }

    return 0;
}
