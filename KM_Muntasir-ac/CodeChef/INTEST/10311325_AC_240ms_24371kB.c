#include <stdio.h>
int main()
{
    long k,n,i,cnt=0;
    scanf("%ld %ld",&n,&k);
    long a[n+5];
    for(i=1;i<=n;i++) {
        scanf("%ld",&a[i]);
    }
    for(i=1;i<=n;i++)
        if(a[i]%k==0)
            cnt++;

    printf("%ld\n",cnt);

    return 0;
}
