#include <stdio.h>
int main()
{
    int t,n,i=1,x1,x2,y1,y2,x,y;

    scanf("%d",&t);
    while(t--) {
        scanf("%d %d %d %d", &x1,&y1,&x2,&y2);
        scanf("%d",&n);

        printf("Case %d:\n",i);
        while(n--) {
            scanf("%d %d",&x,&y);
            if (x>=x1 && y>=y1 && x<=x2 && y<=y2)
                printf("Yes\n");
            else
                printf("No\n");
        }
        i++;
    }

    return 0;
}
