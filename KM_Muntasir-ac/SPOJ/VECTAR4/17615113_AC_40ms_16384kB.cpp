#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, x;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld", &n);
        x = sqrt(n);
        if(x*x == n)
            printf("%lld\n", 2*x-1);
        else if(n -(x*x) <= x)
            printf("%lld\n", 2*x);
        else
            printf("%lld\n", 2*x+1);
    }
    return 0;
}
