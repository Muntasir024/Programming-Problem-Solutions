#include <stdio.h>
int main()
{
    double t,n,c,a,b;
    scanf("%lf",&t);
    while(t--) {
        scanf("%lf %lf %lf",&a,&b,&c);
        if (a>50 && b<0.7 && c>5600)
            printf("10\n");
        else if (a>50 && b<0.7)
            printf("9\n");
        else if (b<0.7 && c>5600)
            printf("8\n");
        else if (a>50 && c>5600)
            printf("7\n");
        else if (a>50 || b<0.7 || c>5600)
            printf("6\n");
        else
            printf("5\n");
    }

    return 0;
}
