#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, i, s = 0, mx = -1;
    scanf("%lld %lld", &n, &m);
    long long a[n+2], j = 0;
    for(i=0;i<n;i++)
        scanf("%lld", &a[i]);
    //sort(a, a+n);
    for(i=0;i<n;i++)
    {
        s += a[i];
        while(s > m) s -= a[j++];
        mx = max(s, mx);
    }
    printf("%lld\n", mx);
    //main();
}
