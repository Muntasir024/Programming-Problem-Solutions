#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    for(int tc = 1; tc <= t; ++tc) {
        long long n, i;
        scanf("%lld", &n);
        i = sqrt(n);
        if(i*i==n) printf("Case %d: Yes\n", tc);
        else printf("Case %d: No\n", tc);
    }
    return 0;
}
