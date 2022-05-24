#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, y, n, i, l, r, m, x = 0;
    map <long long, long long> mp;
    for(i=1;i<=100000;i++)
    {
        x += i;
        mp[x] = i;
    }
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld", &y);
        if(mp[y]) printf("%lld\n", mp[y]);
        else printf("NAI\n");
    }
    return 0;
}
