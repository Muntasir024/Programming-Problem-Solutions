#include <stdio.h>
int main()
{
    int t,n,c,a,b;
    scanf("%d",&t);
    while(t--) {
        scanf("%d %d %d",&a,&b,&c);
        n = a+b+c;
        if (a==180 || b==180 || c==180)
            printf("NO\n");
        else if(n==180)
            printf("YES\n");
        else
            printf("NO\n");

    }

    return 0;
}
