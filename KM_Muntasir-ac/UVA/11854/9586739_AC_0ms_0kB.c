#include <stdio.h>
int main()
{
    int a,b,c,d;
    while(1) {
        scanf("%d %d %d",&a,&b,&c);
        if(a==0 && b==0 && c==0)
            return 0;
        else if(a>b && a>c) {
            d=(b*b)+(c*c);
            if(d==(a*a))
                printf("right\n");
            else
                printf("wrong\n");
        }
        else if(b>a && b>c) {
            d=(a*a)+(c*c);
            if(d==(b*b))
                printf("right\n");
            else
                printf("wrong\n");
        }
        if(c>b && c>a) {
            d=(b*b)+(a*a);
            if(d==(c*c))
                printf("right\n");
            else
                printf("wrong\n");
        }
    }

    return 0;
}
