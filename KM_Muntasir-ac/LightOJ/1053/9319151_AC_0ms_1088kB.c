#include <stdio.h>
int main()
{
    int t,i,s,a,b,c;
    scanf("%d", &t);

    for(i=1;i<=t;i++) {
        scanf("%d %d %d", &a,&b,&c);

        if (a>b && a>c) {
            s= (b*b)+(c*c);
            if (s== (a*a) )
                printf("Case %d: yes\n",i);
            else
                printf("Case %d: no\n",i);
        }
        else if (b>a && b>c) {
            s= (a*a)+(c*c);
            if (s== (b*b) )
                printf("Case %d: yes\n",i);
            else
                printf("Case %d: no\n",i);
        }
        else if (c>b && c>a) {
            s= (b*b)+(a*a);
            if (s== (c*c) )
                printf("Case %d: yes\n",i);
            else
                printf("Case %d: no\n",i);
        }

    }

    return 0;
}
