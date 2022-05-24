#include<stdio.h>
int main()
{
    int t,i,yr;
    double a,b;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lf %lf",&a,&b);
        yr=3.1416/100*(a*a+b*b)+1;
        printf("Property %d: This property will begin eroding in year %d.\n",i,yr);
    }
    printf("END OF OUTPUT.\n");
    return 0;
}
