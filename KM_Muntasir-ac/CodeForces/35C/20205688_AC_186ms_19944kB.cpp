#include<bits/stdc++.h>
using namespace std;


int n,m,k,ax,ay,ma,i,j,a,b,x,y,u,v;
bool burned[2001][2001];
int d[2001][2001];
queue <int> qx,qy;
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> n >> m;
    cin >> k;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            d[i][j] = 0;
            burned[i][j]=false;
        }
    }
    for(i=0; i<=k-1; i++)
    {
        cin >> a >> b;
        burned[a][b] = true;
        qx.push(a);
        qy.push(b);
    }
    ma=-1;
    while (qx.empty()==false && qy.empty()==false)
    {
        x = qx.front();
        y = qy.front();
        qx.pop();
        qy.pop();
        for(k=0; k<=3; k++)
        {
            u = x+dx[k];
            v = y+dy[k];
            if (burned[u][v]==false && (u>=1 && u<=n) && (v>=1 && v<=m))
            {
                burned[u][v] = true;
                qx.push(u);
                qy.push(v);
                d[u][v]=d[x][y]+1;
            }
        }
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            if (d[i][j]>ma)
            {
                ma = max (ma,d[i][j]);
                ax = i;
                ay = j;
            }
        }
    }
    cout << ax << " " << ay << endl;
}
