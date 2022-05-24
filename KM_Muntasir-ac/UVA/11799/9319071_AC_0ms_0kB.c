#include <stdio.h>
int main()
{
    int t,n,i,j,a,max;
    scanf("%d", &t);

    for (i=1;i<=t;i++) {
        scanf("%d",&n);
        max=0;
        for(j=0;j<n;j++) {
            scanf("%d",&a );
            if (a>max )
                max=a;
        }
        printf("Case %d: %d\n", i, max );
    }
    return 0;
}
