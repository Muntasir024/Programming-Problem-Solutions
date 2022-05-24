#include <stdio.h>

int main()
{
    long t, a, b, m, n, temp, gcd, lcm;
    scanf("%ld",&t);

    while(t--)
    {
        scanf("%ld %ld", &a, &b);

        m = a;
        n = b;

        while (n != 0)
        {
            temp = n;
            n = m % n;
            m = temp;
        }

        gcd = m;
        lcm = (a*b) / gcd;

        printf("%ld %ld\n",gcd,lcm);
    }
    return 0;
}
