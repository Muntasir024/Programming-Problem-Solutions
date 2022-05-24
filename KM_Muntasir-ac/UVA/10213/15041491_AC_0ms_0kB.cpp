#include<bits/stdc++.h>
using namespace std;

int T;
long long n;

void print(__int128 x)
{
    if(x)
    {
        print(x / 10);
        putchar( '0' + x % 10 );
    }
}

int main()
{
    scanf("%d",&T);
    while(T--)
    {
        scanf("%lld", &n);
        if(n == 1) puts("1");
        else if(n == 2) puts("2");
        else
        {
            n = n - 2;
            __int128 t = n*(n+1)/2;
            __int128 ans = (t*t+t*5)/6+n+2;
            print(ans);
            puts("");
        }
    }
    return 0;
}
