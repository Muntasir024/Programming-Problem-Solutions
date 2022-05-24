#include<bits/stdc++.h>
using namespace std;

int par[10007], rnk[10007];
int i, n, m, t, mx, a, b;
char c;
string s;

int Find(int x)
{
    if(par[x]==x)
        return x;
    else
        return par[x] = Find(par[x]);
}

void Union(int x, int y)
{
    int u=Find(x), v=Find(y);
    if(u != v)
    {
        par[u]=v;
        rnk[v]+=rnk[u];
        mx=max(mx,rnk[v]);
    }
}

int main()
{
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d",&n);
        getline(cin, s);
        for(i=1; i<=n; i++)
        {
            par[i]=i;
            rnk[i]=1;
        }
        int ca = 0, cb = 0;

        while(getline(cin, s), s!="")
        {
            stringstream ss(s);
            ss >> c >> a >> b;
            if(c == 'c')
            {
                Union(a, b);
            }
            else
            {
                a = Find(a);
                b = Find(b);
                if(a == b)
                    ca++;
                else
                    cb++;
            }
        }

        cout << ca << "," << cb << endl;
        if(t)
            cout << endl;
    }
}
