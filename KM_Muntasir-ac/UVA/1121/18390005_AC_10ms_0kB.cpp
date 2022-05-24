#include<bits/stdc++.h>
using namespace std;

int main ()
{
    long long n, m, i;
    while(scanf("%lld %lld", &n, &m) != EOF)
    {
        long long a[n+2], s = 0, j = 1, p , mn = 10000000000, b[n+2];
        b[0] = 0;
        for(i=1; i<=n; i++)
        {
            scanf("%lld", &a[i]);
            b[i] = a[i] + b[i-1];
            s = b[i] - b[j-1];
            p = i - j + 1;
            while(s>m)
            {
                s -= a[j];
                if(s>=m)
                {
                    --p;
                    ++j;
                    mn = min(mn, p);
                    //cout << s << " " << mn << " " << p << " " << i << endl;
                }
            }
        }
        if(mn == 10000000000) mn = 0;
        printf("%lld\n", mn);
    }
    return 0;
}

