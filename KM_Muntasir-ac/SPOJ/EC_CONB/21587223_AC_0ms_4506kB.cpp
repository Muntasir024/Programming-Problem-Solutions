#include<stdio.h>

int main()
{
    int n, x, s, c, d;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &x);
        if(x%2)
        {
            printf("%d\n", x);
            continue;
        }
        else
        {
            int tem=0;
            while (x != 0)
            {
                tem = tem * 2;
                tem = tem + (x & 1);
                x = x / 2;

            }
            printf("%d\n", tem);
            continue;
        }
        c=s=d=0;
        while(x)
        {
            x/=2;
            c=c*10+(x%2);
            s++;
        }
        while(c)
        {
            x=(x*10)+(c%10);
            c/=10;
        }
        c=x;
        x=1;
        while(s--)
        {
            if(c%10)
                d+=x;
            c/=10;
            x*=2;
        }
        printf("%d\n", d);
    }
    return 0;
}
