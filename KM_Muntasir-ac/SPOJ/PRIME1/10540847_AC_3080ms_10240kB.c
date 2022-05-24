#include<stdio.h>

int main()
{
    long long t,m,n,i,j,raf;
    scanf("%lld",&t);
    while(t--) {
        scanf("%lld %lld",&m,&n);

        for(i=m;i<=n;i++) {
            if (i<2)
                raf=0;
            else
                raf=1;
            for(j=2;j*j<=i;j++) {
                if(i%j==0) {
                    raf=0;
                    break;
                }
            }
            if(raf)
                printf("%lld\n",i);
        }
    }

    return 0;
}
