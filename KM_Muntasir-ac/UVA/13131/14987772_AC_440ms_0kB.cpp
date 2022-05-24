#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, i, k, s, t, q;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld%lld", &n, &k);
        q = sqrt(n);
        s = 0;
        for(i = 1; i <= q; i++)
        {
            if(n % i == 0)
            {
                if(i % k)
                    s += i;
                if((n/i) != i)
                    if((n/i) % k)
                        s += (n/i);
            }
        }
        printf("%lld\n",s);
    }
    return 0;
}
