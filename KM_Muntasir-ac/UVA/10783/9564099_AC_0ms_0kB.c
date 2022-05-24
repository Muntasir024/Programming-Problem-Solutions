#include <stdio.h>
int main()
{
    int a,b,i,j,n,t;
    scanf("%d",&t);

    for(i=1;i<=t;i++) {
        scanf("%d",&a);
        scanf("%d",&b);

        n=0;
        if(a%2==0)
            for(j=a+1;j<=b;j=j+2)
                n=n+j;
        else
            for(j=a;j<=b;j=j+2)
                n=n+j;
        printf("Case %d: %d\n",i,n);
    }

    return 0;
}
