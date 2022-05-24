#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll D[2007][2007];

int main()
{
    ll n, m, i, j;
    scanf("%lld %lld", &m,&n);
    ll wt[n+2], c[n+2];
    for(i=0; i<=m; i++)
        for(j=0; j<=m; j++)
            D[i][j]=0;
    for(i=1; i<=n; i++)
        scanf("%lld%lld",&wt[i],&c[i]);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            if(j < wt[i])
                D[i][j]=D[i-1][j];
            else
                D[i][j] = max(D[i-1][j], c[i]+D[i-1][j-wt[i]]);
        }
    }
    printf("%lld\n", D[n][m]);
    return 0;
}
