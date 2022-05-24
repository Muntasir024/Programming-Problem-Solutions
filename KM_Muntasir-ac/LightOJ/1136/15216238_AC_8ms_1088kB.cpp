#include <stdio.h>

int main()
{
    int k, t, a, b, x, y, ans;
    scanf("%d",&k);
    for(t=1; t<=k; t++)
    {
        scanf("%d %d",&a,&b);
        x = (b/3)*2;
        if(b%3 == 2)
            x++;
        y = (a/3)*2;
        if(a%3 == 2)
            y++;
        ans = x - y;
        if(a%3==0 || a%3==2)
            ans++;
        printf("Case %d: %d\n",t, ans);
    }
}

