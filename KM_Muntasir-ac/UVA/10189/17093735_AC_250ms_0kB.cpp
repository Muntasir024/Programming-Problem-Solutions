#include<bits/stdc++.h>
#include <sstream>
using namespace std;
#define ll long long
typedef pair<ll,ll> pii;
#define pi acos(-1.0)
char f[1000][1000];
bool v[1000][1000];
char DP[10000][10000];
ll fx[] = {1, 1, 0, -1, -1, -1, 0, 1};
ll fy[] = {0, 1, 1, 1, 0, -1, -1, -1};

int main()
{
    int R,C,t=0;
    while(cin>>R>>C)
    {
        memset(DP,0,sizeof(DP));
        if(R==0&&C==0)
            break;
        for(ll i=0; i<R; i++)
        {
            for(ll j=0; j<C; j++)
            {
                cin>>DP[i][j];
            }
        }

        ll x0,y0,cnt=0;
        for(ll i=0; i<R; i++)
        {
            for(ll j=0; j<C; j++)
            {
                if(DP[i][j]=='.')
                {
                    ll x=i;
                    ll y=j;

                    for(ll i=0; i<8; i++)
                    {
                        x0=x+fx[i];
                        y0=y+fy[i];
                        if(DP[x0][y0]=='*')
                        {
                            cnt++;
                        }
                    }
                    DP[i][j]=cnt+'0';
                    cnt=0;
                }
            }
        }
        if(t) cout<<endl;
        cout<<"Field #"<<++t<<":"<<endl;

        for(ll i=0; i<R; i++)
        {
            for(ll j=0; j<C; j++)
            {
                cout<<DP[i][j];
            }
            cout<<endl;
        }

    }
}
