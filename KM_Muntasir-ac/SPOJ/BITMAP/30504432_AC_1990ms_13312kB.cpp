#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

int cell[1050][1050];
int r,c;
int visited[1050][1050];
int v[1050][1050];

int fx[]= {1,-1,0,0};
int fy[]= {0,0,1,-1};

void bfs(pii s, int z)
{
    int b,i,j,x,y, o=0;

    queue<pii>q;
    pii a,u;

    q.push(s);
    v[s.first][s.second]=z;
    visited[s.first][s.second]=0;

    while(!q.empty())
    {
        a=q.front();
        q.pop();

        o++;
        if(o>(r*c)) break;

        for(i=0; i<4; i++)
        {
            x=a.first+fx[i];
            y=a.second+fy[i];

            if(x>=0 and x<r and y>=0 and y<c and cell[x][y]==0 and v[x][y]!=z and visited[x][y]!=0)
            {
                visited[x][y]=min(visited[x][y], visited[a.first][a.second]+1);
                //cout<<visited[x][y]<<"--"<<x<<"__"<<y<<endl;
                v[x][y]=z;
                u=make_pair(x,y);
                q.push(u);

            }
        }
    }
}

int main()
{
    int t, i, j, x = 1;
    memset(v,0,sizeof(v));
    cin>>t;
    while(t--)
    {
        memset(visited,200000,sizeof(visited));
        char s;
        cin>>r>>c;
        cin.ignore();
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                cin>>s;
                if(s=='1')
                cell[i][j] = 1;
                else
                cell[i][j] = 0;
            }
        }
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                if(cell[i][j] == 1)
                {
                    pii n;
                    n.first = i;
                    n.second = j;
                    bfs(n,x);
                    x++;
                }
            }
        }
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                if(visited[i][j] == 200000) visited[i][j]=0;
                cout<<visited[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
