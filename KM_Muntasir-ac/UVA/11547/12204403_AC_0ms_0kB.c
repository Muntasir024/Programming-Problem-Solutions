#include<stdio.h>
int main()
{
    int t,n,rev;
    scanf("%d",&t);
    while(t--) {
        scanf("%d",&n);
        n=n*567;
        n=n/9;
        n=n+7492;
        n=n*235;
        n=n/47;
        n=n-498;
        n=n/10;
        rev=n%10;
        if(rev<0)
            printf("%d\n",(-1)*(rev));
        else
            printf("%d\n",rev);
    }

    return 0;
}
