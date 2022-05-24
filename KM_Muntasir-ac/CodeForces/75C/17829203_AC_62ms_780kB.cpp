#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    if(b == 0)
        return a;
    else
        return gcd(b, a%b);
}

int main()
{
    long long c, b, d, q, l, h, i, j=0, x ,y, m, a[100007], g;
    scanf("%lld %lld", &c, &b);
    g = gcd(c, b);
    d = sqrt(g);
    for(i=1; i<=d; i++)
    {
        if(g%i==0)
        {
            a[j++]=i;
            a[j++]=g/i;
        }
    }
    sort(a, a+j);
    scanf("%lld", &q);
    while(q--)
    {
        scanf("%lld %lld", &l, &h);
        x = 0, y = j;
        while(x < y)
        {
            m = (x+y) / 2;
            if(a[m] <= h)
                x = m+1;
            else
                y = m;
        }
        x--;
        if(a[x] < l) printf("-1\n");
        else printf("%lld\n", a[x]);
    }
    return 0;
}
