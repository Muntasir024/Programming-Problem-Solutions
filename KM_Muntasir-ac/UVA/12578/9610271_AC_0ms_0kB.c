#include <stdio.h>
#include <math.h>

int main()
{
    int t,n;
    double a,b,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        a = n/5.0;
        b = (n*6)/10.0;
        c = acos(-1)*a*a;
        printf("%.2lf %.2lf\n",c, (n*b)-c );
    }

    return 0;
}
