#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<queue>
#include<vector>
#define MAX 201
using namespace std;

int node,edge,color[MAX],g=0,w=0,cou;
vector<int >mat[MAX];
char color1[MAX];
int BFS(int s)
{
    queue<int> q;
    q.push(s);
    color[s]=1;
    int tot=0,black=0;

    while (!q.empty())
    {
        int u=q.front();
        q.pop();
        tot++;
        if (color[u]==1)
            black++;

        for (int i=0; i<mat[u].size(); i++)
        {

            int   v=mat[u][i];
            if (color[v]==2)
            {
                color[v]=1-color[u];
                q.push(v);
            }
            else if (color[v]==color[u])
            {
                return -1;
            }


        }

    }
    if (tot==1)
        return 1;
    return min(black,tot-black);
}
int main()
{
    int i,j,k,test,n,m,ans;
    scanf("%d",&test);
    while(test--)
    {
        for(i=0; i<MAX; i++)
        {
            mat[i].clear();
        }
        scanf("%d %d",&node,&edge);
        for(i=1; i<=edge; i++)
        {
            scanf("%d %d",&n,&m);
            mat[n].push_back(m);
            mat[m].push_back(n);

        }
        for(i=0; i<node; i++)
        {
            color[i]=2;
        }
        cou=0;
        ans=0;
        for (int i=0; i<node; i++)
        {
            if (color[i]==2)
            {
                int x=BFS(i);
                if (x==-1)
                {
                    printf("-1\n");
                    cou=-1;
                    break;
                }

                else
                    ans+=x;

            }
        }
        if(cou==0)
        {
            printf("%d\n",ans);
        }
    }

}
