#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll sum[30007], coin[5] = {1, 5, 10, 25, 50};

int main()
{
    ll n, i, j;
    sum[0] = 1;
    for(i = 0; i < 5; i++)
    {
        for(j = coin[i]; j <= 30000; j++)
        {
            sum[j] += sum[j - coin[i]];
        }
    }
    while(scanf("%lld", &n) != EOF)
    {
        if(sum[n]==1)
            printf("There is only 1 way to produce %lld cents change.\n", n);
        else
            printf("There are %lld ways to produce %lld cents change.\n", sum[n], n);
    }
    return 0;
}
