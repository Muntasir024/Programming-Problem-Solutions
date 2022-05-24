#include <stdio.h>
int main()
{
    long n, i, m, t;
    scanf("%ld",&t);

    for(i=1;i<=t;i++) {
        scanf("%ld %ld",&n,&m);
        if (n % (2*m) == 0) {
        printf("Case %ld: %ld\n",i, (n*m)/2 );
        }
        else
            continue;
    }

    return 0;
}
