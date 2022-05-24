#include <stdio.h>
int main()
{
    int a,b,c,s;

    while(1) {
        scanf("%d %d %d", &a, &b, &c);
    if (a==0 && b==0 && c==0)
        return 0;
    else {
        if (a>b && a>c) {
            s=(b*b)+(c*c);
            if ((a*a)== s )
                printf("right\n");
            else
                printf("wrong\n");
        }
        else if (b>a && b>c) {
            s=(a*a)+(c*c);
            if ((b*b)== s )
                printf("right\n");
            else
                printf("wrong\n");
        }
        if (c>b && c>a) {
            s =(b*b)+(a*a);
            if ((c*c)== s )
                printf("right\n");
            else
                printf("wrong\n");
        }
    }
    }
    return 0;
}
