#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, i, m, s, x;
    char ch;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld", &n);
        m=1e18,s=0;
        while(n--)
        {
            scanf("%lld %c", &x, &ch);
            if(ch == '+')
                s += x+25;
            else
                m = min(m,s+x+24);
        }
        printf("%d\n", m-s+1);
    }
    return 0;
}
