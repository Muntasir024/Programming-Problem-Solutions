#include <stdio.h>
int main()
{
    int n,a[105],i,cnt1=0,cnt2=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=n;i++) {
        if(a[i]%2 == 0)
            cnt1++;
        else
            cnt2++;
    }
    for(i=1;i<=n;i++) {
        if(cnt1>cnt2 && a[i]%2 !=0)
            printf("%d\n",i);
        else if(cnt1<cnt2 && a[i]%2 == 0)
            printf("%d\n",i);
    }

    return 0;
}
