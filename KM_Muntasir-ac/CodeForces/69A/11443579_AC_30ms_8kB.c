#include<stdio.h>
int main()
{
    int n,i, a,b,c,sm1=0,sm2=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        scanf("%d %d %d",&a,&b,&c);
        sm1=sm1+a;
        sm2=sm2+c;
    }
    if(sm1==0 && sm2==0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
