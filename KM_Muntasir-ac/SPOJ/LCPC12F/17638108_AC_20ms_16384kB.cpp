#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, t, tc = 1, m, i, x;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld %lld", &m, &n);
        long long a[n+2], c = 0;
        unordered_map <long long, int> mp;
        for(i=0; i<n; i++)
        {
            scanf("%lld", &a[i]);
            x = m - a[i];
            c += mp[x];
            mp[a[i]]++;
        }

        printf("%lld. %lld\n", tc++, c);
    }
    //main();
}
