#include <stdio.h>
int main()
{
    double t,n,s,a,b;
    scanf("%lf",&t);
    while(t--) {
        scanf("%lf %lf",&a,&b);

        if(a>1000)
            printf("%lf\n",(a*b)-((a*b)/10) );
        else
            printf("%lf\n", a*b );
    }

    return 0;
}
