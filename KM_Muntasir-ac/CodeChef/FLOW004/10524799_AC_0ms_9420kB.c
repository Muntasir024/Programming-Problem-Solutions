#include <stdio.h>
int main()
{
    int t,n,dem,s,dm;
    scanf("%d",&t);
    while(t--) {
        scanf("%d",&n);
        dem = n % 10;
        dm=0;
        while(n) {
            dm = n%10 ;
            n = n / 10;
        }
        s = dm + dem;
        printf("%d\n",s);
    }

    return 0;
}
