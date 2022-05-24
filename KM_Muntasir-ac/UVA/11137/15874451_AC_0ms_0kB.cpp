#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll sum[10007];

int main()
{
    ll n, i, j, coin[30];
    for(i = 0; i <= 21; i++)
    {
        j = (i+1)*(i+1)*(i+1);
        coin[i]=j;
    }
    sum[0] = 1;
    for(i = 0; i < 21; i++)
    {
        for(j = coin[i]; j <= 10000; j++)
        {
            sum[j] += sum[j - coin[i]];
        }
    }
    while(scanf("%lld", &n) != EOF)
    {
        printf("%lld\n", sum[n]);
    }
    return 0;
}

