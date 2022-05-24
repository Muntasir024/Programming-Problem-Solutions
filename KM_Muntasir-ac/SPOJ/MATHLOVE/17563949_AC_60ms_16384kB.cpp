#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, i, l,m,h,n, f, y;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld", &y);
        f = 1;
        l = 0, h = y;
        while(l<=h)
        {
            m = (l+h) / 2;
            n = ((m+1)*m) / 2;
            if(y == n)
            {
                printf("%lld\n", m);
                f = 0;
                break;
            }
            else if(n > y)
                h = m - 1;
            else
                l = m + 1;
        }
        if(f) printf("NAI\n");
    }
    //main();
    return 0;
}
