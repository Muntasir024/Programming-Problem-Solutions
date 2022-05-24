#include <stdio.h>
int main()
{
    int t,i=1,n,cnt1,cnt2;

    while(1) {
        cnt1=0; cnt2=0;
        scanf("%d",&t);
        if (t==0)
            return 0;
        while (t--) {
            scanf("%d",&n);
            if(n==0)
                cnt1=cnt1+1;
            else
                cnt2=cnt2+1;
        }
    printf("Case %d: %d\n", i , cnt2 - cnt1 );
    i++;
    }

    return 0;
}
