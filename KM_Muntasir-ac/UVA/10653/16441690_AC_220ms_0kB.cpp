#include<bits/stdc++.h>
#define pii pair<int,int>

using namespace std;

int cell[1050][1050];
int r,c;
int visited[1050][1050];

int fx[]= {1,-1,0,0};
int fy[]= {0,0,1,-1};

void bfs(pii s,pii d)
{
    int b,i,k,x,y;

    memset(visited,-1,sizeof(visited));

    queue<pii>q;
    pii a,u;

    q.push(s);
    visited[s.first][s.second]=0;

    while(!q.empty())
    {
        a=q.front();
        q.pop();

        for(i=0; i<4; i++)
        {
            x=a.first+fx[i];
            y=a.second+fy[i];

            if(x>=0 and x<r and y>=0 and y<c and cell[x][y]!=-1 and visited[x][y]==-1)
            {
                visited[x][y]=visited[a.first][a.second]+1;
                u=make_pair(x,y);
                q.push(u);
            }
            if(a.first==d.first&&a.second==d.second)
                break;
        }
    }
    cout<< visited[d.first][d.second]-visited[s.first][s.second]<<endl ;
}

int main()
{
    int a,b,e,f,g,i,j,w;

    while(cin>>r>>c && (r && c))
    {

        memset(cell,0,sizeof(cell));

        scanf("%d",&a);

        for(i=0; i<a; i++)
        {
            scanf("%d%d",&b,&w);
            for(j=0; j<w; j++)
            {
                scanf("%d",&e);
                cell[b][e]=-1;
            }
        }
        pii s,d;

        scanf("%d%d",&s.first,&s.second);

        scanf("%d%d",&d.first,&d.second);

        bfs(s,d);

    }

}
