#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll sum[7507], coin[5] = {1, 5, 10, 25, 50};

int main()
{
    ll n, i, j;
    sum[0] = 1;
    for(i = 0; i < 5; i++)
    {
        for(j = coin[i]; j <= 7489; j++)
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