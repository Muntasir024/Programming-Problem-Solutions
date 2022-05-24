#include <stdio.h>
int main()
{
    long long a[81];
    int n,i;
    a[0] = 1;
    a[1] = 1;
    for (i=2;i<=80;i++)
        a[i]=a[i-2]+a[i-1];

    while (scanf("%lld",&n)==1 && n)
    {
        printf("%lld\n", a[n]);
    }
    return 0;
}
