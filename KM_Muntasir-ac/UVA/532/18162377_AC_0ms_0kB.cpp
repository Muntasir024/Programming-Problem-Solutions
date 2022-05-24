#include<bits/stdc++.h>
using namespace std;

struct node
{
    int x, y, z;
    int level;
};

int dx[6]={1, 0, -1, 0, 0, 0};
int dy[6]={0, 1, 0, -1, 0, 0};
int dz[6]={0, 0, 0, 0, 1, -1};
int adj[37][37][37];
bool vis[37][37][37];

int main()
{
    int n, r, c, i, j, k;
    int sx, sy, sz;
    int ex, ey, ez;
    int xx, yy, zz;
    char t;
    while(scanf("%d %d %d", &n, &r, &c) && n)
    {
        memset(adj, 0, sizeof(adj));
        memset(vis, 0, sizeof(vis));
        for(i=0;i<n;i++)
        {
            for(j=0;j<r;j++)
            {
                for(k=0;k<c;k++)
                {
                    cin >> t;
                    if(t=='#') adj[i][j][k]=1;
                    if(t=='S') sz=i, sy=j, sx=k;
                    if(t=='E') ez=i, ey=j, ex=k;
                }
            }
        }
        queue <node> q;
        q.push((node){sx,sy,sz,0});
        int ans = -1;
        while(!q.empty())
        {
            node u = q.front(); q.pop();
            if(vis[u.z][u.y][u.x]) continue;
            if(u.z==ez && u.y==ey && u.x==ex) {ans = u.level; break;}
            vis[u.z][u.y][u.x] = 1;
            for(i=0;i<6;i++)
            {
                zz = u.z + dz[i];
                yy = u.y + dy[i];
                xx = u.x + dx[i];

                if(zz<0 || zz>=n || yy<0 || yy>=r || xx<0 || xx>=c || adj[zz][yy][xx]) continue;
                q.push((node){xx,yy,zz,u.level+1});
            }
        }
        if(ans!=-1) printf("Escaped in %d minute(s).\n", ans);
        else printf("Trapped!\n");
    }
    return 0;
}
