#include<stdio.h>

int main()
{
    int i;
    double x,sum=0;
    for(i=0;i<12;i++)
    {
        scanf("%lf",&x);
        sum+=x;
    }
    printf("$%.2f\n",sum/12.0);
    return 0;
}

