#include <stdio.h>
#include <math.h>
int main()
{
    double s,k;
    int t,i;
    scanf("%d", &t);

    for(i=1;i<=t;i++) {
        scanf("%lf",&k);
        if(k>=0 && k<=180000)
            printf("Case %d: 0\n",i);
        else if(k>180000 && k<=480000) {
                s= ceil((k-180000)/10);
                if(s <= 2000)
                printf("Case %d: 2000\n",i);
                else
            printf("Case %d: %.0lf\n",i, s );
        }
        else if(k>480000 && k<=880000) {
               s= ceil(((k-480000)*15)/100);
            printf("Case %d: %.0lf\n",i, 30000+s );
        }
        else if(k>880000 && k<=1180000) {
                s= ceil((k-880000)/5);
            printf("Case %d: %.0lf\n",i, 30000+60000+s );
        }
        else if(k>1180000) {
            s= ceil((k-1180000)/4);
            printf("Case %d: %.0lf\n",i, 150000+s );
        }
    }

    return 0;
}
