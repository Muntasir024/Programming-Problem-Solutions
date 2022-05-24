#include<bits/stdc++.h>
using namespace std;

int dx[] = {0 , 0 , +1, -1 };
int dy[] = {+1 , -1 , 0, 0 };

string str[45];
bool vis[45][45][12];
int n,m,sp;
void dfs(int x, int y, int cnt)
{
    if(cnt > 10) return;
    if(vis[x][y][cnt] == 1 ) return;
    vis[x][y][cnt] = 1;
    for(int i=0;i<4;i++)
    {
        int x1 = x + dx[i];
        int y1 = y + dy[i];
        if(x1>=1 and x1<=n and y1>=1 and y1<=m and str[x1][y1] != '#')
        {
            if(str[x1][y1] == 's') dfs(x1, y1, cnt+1);
            else                   dfs(x1, y1, cnt);
        }
    }
}

int main()
{
    cin >> n >> m >> sp;
    int x, y;
    for(int i=1;i<=n;i++) cin>> str[i];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(str[i][j] == 'x') {
                x=i, y=j;
                break;
            }
        }
    }

    dfs(x, y, 0);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(str[i][j] == '@')
            {
                for(int cnt=0;cnt<=sp/2;cnt++)
                {
                    if(vis[i][j][cnt] == 1)
                    {
                        cout << "SUCCESS" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}
