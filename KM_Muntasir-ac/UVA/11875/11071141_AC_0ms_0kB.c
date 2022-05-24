#include<stdio.h>
int main()
{
    int i,j,t,n,arr[12];
    scanf("%d",&t);
    for(j=1;j<=t;j++) {
        scanf("%d",&n);
        for(i=0;i<n;i++) {
            scanf("%d",&arr[i]);
        }
        printf("Case %d: %d\n",j, arr[(n/2)] );
    }

    return 0;
}
