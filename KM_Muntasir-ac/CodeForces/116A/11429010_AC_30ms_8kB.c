#include<stdio.h>
int main()
{
    int n,i,j,mx;
    scanf("%d",&n);
    int ci[1005],co[1005];
    for(i=2;i<=n+1;i++)
        scanf("%d %d",&co[i],&ci[i]);

    mx=0;
    int sum;
    ci[1]=0;
    for(i=2;i<=n+1;i++) {
        sum=(ci[i-1]-co[i])+ci[i];
        if(sum>mx)
            mx=sum;
        ci[i]=sum;
    }
    printf("%d\n",mx);


    return 0;
}
