#include <stdio.h>
int main()
{
    unsigned t,a,b,i;
    scanf("%d",&t);

    for(i=1;i<=t;i++) {
        scanf("%d %d", &a,&b);
        if (a!=0 && a<=b) {
        printf("Case %d: %d\n",i, (b*4)+19 );
        }
        else if (a!=0 && a>b)
            printf("Case %d: %d\n",i, ((a-b)*4)+(a*4)+19 );
        else
            continue;
    }


    return 0;
}
