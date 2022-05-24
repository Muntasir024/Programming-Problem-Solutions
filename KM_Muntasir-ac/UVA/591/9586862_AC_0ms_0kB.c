#include <stdio.h>
int main()
{
    int n,i,h[102],sum,d,e;

    int j=1;
    while(1) {
        scanf("%d",&n);
        if (n==0)
            return 0;
        else {
        sum=0;e=0;
        for(i=0;i<n;i++) {
            scanf("%d",&h[i]);
            sum=sum+h[i];
        }
        d=sum/n;
        for(i=0;i<n;i++)
            if(h[i]>d)
                e=e+(h[i]-d);

    printf("Set #%d\n",j);
    printf("The minimum number of moves is %d.\n",e);
    printf("\n");
    j++;
        }
    }
    return 0;
}
