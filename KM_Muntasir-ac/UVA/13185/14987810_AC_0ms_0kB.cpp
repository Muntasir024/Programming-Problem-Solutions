#include <stdio.h>
#include <math.h>

int main()
{
    long long n, i, k, s, t, q;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld", &n);
        q = sqrt(n);
        s = 1;
        for(i = 2; i <= q; i++)
        {
            if(n % i == 0)
            {
                s += i;
                if((n/i) != i)
                    s += (n/i);
            }
            if(s > n)
                break;
        }
        if(s < n)
            printf("deficient\n");
        else if(s > n)
            printf("abundant\n");
        else
            printf("perfect\n");
    }
    return 0;
}
