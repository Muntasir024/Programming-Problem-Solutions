#include<stdio.h>
int main()
{
    int t,m,n;
    scanf("%d",&t);
    while(t--) {
        scanf("%d %d",&m,&n);
        if(n>m || (m-n)%2 != 0)
            printf("impossible\n");
        else
            printf("%d %d\n",(m+n)/2,(m-n)/2);
    }

    return 0;
}
