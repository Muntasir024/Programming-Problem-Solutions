#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, T, n, d;
    scanf("%lld", &T);
    for(t = 1; t <= T; t++)
    {
        scanf("%lld%lld", &n, &d);
        n--;
        printf("Case %lld: %lld\n", t, n / d);
    }
    return 0;
}
