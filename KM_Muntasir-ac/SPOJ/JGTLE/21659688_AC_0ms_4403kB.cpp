#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for(int tc = 1; tc <= t; ++tc) {
        long long a, b, c;
        scanf("%lld %lld %lld", &a, &b, &c);
        long long result = 0;
        result = a * (b*(b+1)/2) * (c*(c+1)/2);
        printf("Case %d: %lld\n", tc, result);
    }
    return 0;
}
