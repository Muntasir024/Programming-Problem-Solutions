#include<bits/stdc++.h>
using namespace std;

int par[5007], rnk[5007];
int i, n, m, mx;
string s[5007], p, pp;

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
    while(scanf("%d%d", &n, &m) == 2)
    {
        getchar();
        if(n==0 && m==0)
            return 0;
        map <string, int > a;
        mx=1;
        for(i=1; i<=n; i++)
        {
            getline(cin, s[i]);
            a[s[i]]=i;
            par[i]=i;
            rnk[i]=1;
        }
        for(i=1; i<=m; i++)
        {
            cin>>p>>pp;
            Union(a[p], a[pp]);
        }
        printf("%d\n", mx);
    }
}

