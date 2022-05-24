#include <stdio.h>
int main()
{
    int t,n,cnt=0;
    scanf("%d",&t);

    while(t--) {
        scanf("%d",&n);
        if (n<0)
            cnt++;
    }
    printf("%d\n",cnt);

    return 0;
}
