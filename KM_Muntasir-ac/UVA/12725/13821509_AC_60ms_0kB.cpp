#include<stdio.h>

int main()
{
    double n,m,s;
    int a,b,t,k;
    scanf("%d",&k);
    for(t=1; t<=k; t++)
    {
        scanf("%lf%lf%d%d",&n,&m,&a,&b);
        s = (m * (a + b) - n * a) / b;
        if(s>=0 && s<=10)
            printf("Case #%d: %.2lf\n",t,s);
        else
            printf("Case #%d: Impossible\n",t);
    }

    return 0;
}
