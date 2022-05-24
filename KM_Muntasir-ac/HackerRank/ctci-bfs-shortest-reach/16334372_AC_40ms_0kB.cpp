#include<bits/stdc++.h>
#define ll long long
using namespace std;


ll level[1007];
bool vis[1007];

int main()
{
    ll n, m, i, a, b, t, x;
    scanf("%lld", &t);
    while(t--)
    {
        vector <ll> v[1007];
        scanf("%lld %lld", &n, &m);
        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));
        for(i=0; i<m; i++)
        {
            scanf("%lld %lld", &a, &b);
            v[a].push_back(b);
            v[b].push_back(a);
        }
        scanf("%lld", &x);

        queue <ll> q;
        q.push(x);
        level[ x ] = 0 ;
        vis[ x ] = true;
        while(!q.empty())
        {
            ll p = q.front();
            q.pop();
            for( i = 0; i < v[ p ].size() ; i++)
            {
                if(vis[ v[ p ][ i ] ] == false)
                {
                    level[ v[ p ][ i ] ] = level[ p ] + 6;
                    q.push(v[ p ][ i ]);
                    vis[ v[ p ][ i ] ] = true;
                }
            }
        }
        for(i=1; i<=n; i++)
            if(i!=x)
                printf("%lld ", level[i]);
        printf("\n");
    }
    //main();
    return 0;
}


