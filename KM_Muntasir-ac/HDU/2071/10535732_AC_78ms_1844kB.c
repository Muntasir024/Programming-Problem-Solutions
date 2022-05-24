#include<stdio.h>
int main()
{
    int a,b;
    double c,max,i;
    scanf("%d",&a);
    while(a--) {
        scanf("%d",&b);
        max=0;
        for(i=0;i<b;i++) {
            scanf("%lf",&c);
                if(c>=max)
                    max=c;
        }
        printf("%.2lf\n",max);
    }

    return 0;
}
