#include<stdio.h>

int main()
{
    int t,n,x,y,i,j,k;
    scanf("%d",&t);

    while(t--) {
        scanf("%d",&x);
        scanf("%d",&y);

        while(y--) {
            for(i=1;i<=x;i++) {
                for(j=1,k=i;j<=i;j++)
                    printf("%d",k);
                printf("\n");
            }
            for(i=x-1;i>0;i--) {
                for(j=i,k=i;j>0;j--)
                    printf("%d",k);
                printf("\n");
            }
        if (t!=0 || y!=0)
            printf("\n");
        }
    }


    return 0;
}
