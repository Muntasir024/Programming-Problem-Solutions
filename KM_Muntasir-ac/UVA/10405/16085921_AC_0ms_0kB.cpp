#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string s,p;
    ll n, m, i, j;
    while(getline(cin, s))
    {
        getline(cin, p);
        n = s.size();
        m = p.size();
        ll DP[n+2][m+2];
        memset(DP, 0, sizeof(DP));
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(s[i] == p[j])
                    DP[i+1][j+1] = DP[i][j] + 1;
                else
                    DP[i+1][j+1] = max(DP[i][j+1], DP[i+1][j]);
            }
        }
        printf("%lld\n", DP[n][m]);
    }
    return 0;
}
