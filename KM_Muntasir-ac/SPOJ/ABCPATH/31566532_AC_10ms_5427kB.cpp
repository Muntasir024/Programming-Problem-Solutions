#include<bits/stdc++.h>
using namespace std;

int dx[] = {1, 1, 1, 0, -1, -1, -1, 0};
int dy[] = {1, 0, -1, -1, -1, 0, 1, 1};
int vis[60][60];
char grid[60][60];
char str[55];
int n, m, tc = 1;

int dfs(int x, int y) {
    if(vis[x][y]) return vis[x][y];

    int r = 0;
    for(int i=0;i<8;i++) {
        if(x + dx[i] >= 0 && x + dx[i] < n && y + dy[i] >= 0 && y + dy[i] < m && grid[x+dx[i]][y+dy[i]] == grid[x][y]+1)
            r = max(r, dfs(x+dx[i], y+dy[i]) +1);
    }
    return vis[x][y] = r;
}

int main() {
    while(scanf("%d %d", &n, &m) && n && m) {
        for(int i=0;i<n;i++) {
            scanf("%s", str);
            for(int j=0;j<m;j++) grid[i][j] = str[j];
        }

        memset(vis, 0, sizeof(vis));
        int r=0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(grid[i][j] == 'A') r = max(r, dfs(i, j) + 1);
            }
        }
        printf("Case %d: %d\n", tc++, r);
    }
    return 0;
}
