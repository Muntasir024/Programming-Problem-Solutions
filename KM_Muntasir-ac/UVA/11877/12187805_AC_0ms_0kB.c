#include<stdio.h>
int main()
{
    int a,b, s;
    while(scanf("%d",&a) == 1 && a)
    {
        s=0;
        while(a>=3)
        {
            s=s+(a/3);
            a=(a/3)+(a%3);
        }
        if(a==2)
            s=s+1;
        printf("%d\n",s);
    }

    return 0;
}
