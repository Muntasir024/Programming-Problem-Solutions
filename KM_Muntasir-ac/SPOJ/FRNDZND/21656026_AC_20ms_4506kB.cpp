#include <stdio.h>
int main()
{
    long long n, q, i, x, y, z;
    scanf("%lld %lld", &n, &q);
    long long a[n+2];
    for(i=1;i<=n;i++) scanf("%lld", &a[i]);
    while(q--)
    {
        scanf("%lld %lld", &x, &y);
        if(x==y) printf("%lld\n", a[x]);
        else printf("0\n");
    }
    return 0;
}
