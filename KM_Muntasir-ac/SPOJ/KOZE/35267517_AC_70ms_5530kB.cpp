#include <bits/stdc++.h>
using namespace std;

char adj[255][255];
int fx[]= {1,-1,0,0};
int fy[]= {0,0,1,-1};
int vis[255][255];
int k,v,xx,yy,n,m;

void dfs(int x,int y)
{
    vis[x][y]=1;
    if(adj[x][y]=='k')
        k++;
    if(adj[x][y]=='v')
        v++;
    for(int i=0; i<4; i++)
    {
        xx=x+fx[i];
        yy=y+fy[i];

        if((xx>=0&&xx<n)&&(yy>=0&&yy<m)&&vis[xx][yy]==0 && adj[xx][yy]!='#')
        {
            dfs(xx, yy);
        }
    }
}
int main()
{
    int s=0,w=0;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>adj[i][j];
            if(adj[i][j]=='k')
                s++;
            if(adj[i][j]=='v')
                w++;
        }
    }
    memset(vis,0,sizeof(vis));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(adj[i][j]=='k'&&vis[i][j]==0)
            {
                k=0;
                v=0;
                dfs(i,j);
                if(k>v)
                    w-=v;
                else
                    s-=k;
            }
        }
    }
    cout<<s<<" "<<w<<endl;
    return 0;
}
