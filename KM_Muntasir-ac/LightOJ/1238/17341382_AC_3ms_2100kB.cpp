#include<bits/stdc++.h>
#define ll long long
#define pii pair<ll, ll>
using namespace std;

ll fx[]= {1, 0, -1, 0};
ll fy[]= {0, 1, 0, -1};

ll cost[27][27];
ll sx, sy, dx, dy, r, c;

int main()
{
    ll n, x, i, j, y, t, tc = 1;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld %lld", &r, &c);
        getchar();

        string str[25];
        int ai, aj, bi, bj, ci, cj, hi, hj;y = 0;

        for(i=0;i<r;i++) getline(cin, str[i]);

        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(str[i][j] == 'a')
                {
                    ai = i;
                    aj = j;
                }
                if(str[i][j] == 'b')
                {
                    bi = i;
                    bj = j;
                }
                if(str[i][j] == 'c')
                {
                    ci = i;
                    cj = j;
                }
                if(str[i][j] == 'h')
                {
                    hi = i;
                    hj = j;
                }
            }
        }


        queue<pii>q;

        memset(cost, 0, sizeof(cost));
        q.push(pii(hi,hj));
        cost[hi][hj]=1;
        while(!q.empty())
        {
            pii top = q.front();
            q.pop();

            for(int i=0; i<4; i++)
            {
                ll f = top.first + fx[i];
                ll s = top.second + fy[i];

                if((f>=0 && f<r) && (s>=0 && s<c) && cost[f][s]==0  && str[f][s] != 'm' && str[f][s] != '#')
                {
                    cost[f][s]=cost[top.first][top.second]+1;

                    q.push(pair<ll, ll> (f, s));
                }
            }
        }
        y = max(y, cost[ai][aj]);
        y = max(y, cost[bi][bj]);
        y = max(y, cost[ci][cj]);

        printf("Case %lld: %lld\n", tc++, y-1);
    }


    return 0;
}

