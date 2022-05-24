#include <stdio.h>
int main()
{
    unsigned t,i,a,b,c;
    scanf("%d", &t);
    for(i=1;i<=t;i++) {
        scanf("%d %d %d",&a,&b,&c);
        if (a>=1000 && a<=10000 && b>=1000 && b<=10000 && c>=1000 && c<=10000) {
        if (a>b && a<c || a<b && a>c)
            printf("Case %d: %d\n",i,a);
        if (b>a && b<c || b<a && b>c)
            printf("Case %d: %d\n",i,b);
        if (c>b && c<a || c<b && c>a)
            printf("Case %d: %d\n",i,c);
        }
    }

    return 0;
}
