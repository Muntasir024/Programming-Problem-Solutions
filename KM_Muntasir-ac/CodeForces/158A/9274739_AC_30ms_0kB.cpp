#include<stdio.h>
int main()
{
    int n,r,a[105],i,cnt=0;
    scanf("%d %d",&n,&r);

    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++) {
        if(a[i]>=a[r-1] && a[i]>0)
            cnt++;
    }

    printf("%d\n",cnt);


    return 0;
}
