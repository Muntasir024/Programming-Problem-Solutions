#include<bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pii;
char a[100][100];
bool visit[100][100];
ll m,n;
ll dx[] = {1, 1, 0, -1, -1, -1, 0, 1};
ll dy[] = {0, 1, 1, 1, 0, -1, -1, -1};
void bfs(ll x,ll y)
{
    queue<pii> q;
    ll i,xx,yy;
    pii p=pair<ll,ll>(x,y);
    q.push(p);
    while(!q.empty())
    {
        p=q.front();
        q.pop();
        x=p.first;
        y=p.second;
        for(i=0;i<8;i++)
        {
            xx=x+dx[i];
            yy=y+dy[i];
            if(xx>=0 && xx<m && yy>=0 && yy<n)
            {
                if(visit[xx][yy]==false)
                {
                    visit[xx][yy] = true;
                    if(a[xx][yy]=='@')
                        q.push(pair<ll, ll> (xx, yy));
                }
            }
        }
    }
}

int main()
{
    ll i,j,c;
    while(cin>>m>>n)
    {
        if(m==0 && n==0)
            break;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>a[i][j];
                visit[i][j]=false;
            }
        }
        c=0;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i][j]=='@')
                {
                    if(visit[i][j]==false)
                    {
                        visit[i][j]=true;
                        ++c;
                        bfs(i, j);
                    }
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}

