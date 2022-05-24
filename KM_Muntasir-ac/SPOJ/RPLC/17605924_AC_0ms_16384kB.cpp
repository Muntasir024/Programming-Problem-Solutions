#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, x, h, m, n, i, s, f, tc = 1;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld", &n);
        s = f = 0;
        m = 1000000000000;
        for(i=0;i<n;i++)
        {
            scanf("%lld", &x);
            s += x;
            m = min(m, s);
        }
        printf("Scenario #%lld: ", tc++);
        if(m <= 0) printf("%lld\n", (-1)*m + 1);
        else
        printf("1\n");
    }
    //main();
}
