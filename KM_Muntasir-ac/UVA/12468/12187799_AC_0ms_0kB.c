#include<stdio.h>

int main()
{
    int n,k, s,m, temp;
    while(scanf("%d %d",&n,&k) == 2) {
        if (n==(-1) && k==(-1))
            return 0;
        if(n>k) {
            temp=n;n=k;k=temp;
        }
        s=k-n;
        m=(n+100)-k;
        if(s<=m)
            printf("%d\n",s);
        else
            printf("%d\n",m);
    }

    return 0;
}
