#include <stdio.h>
int main()
{
    int t,n,i,raf;
    scanf("%d",&t);
    while (t--) {
        scanf("%d",&n);
        raf=1;
        for(i=2;i*i<=n;i++)
            if(n%i==0)
                raf=0;
        if(raf)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
