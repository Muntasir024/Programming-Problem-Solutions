#include<bits/stdc++.h>
using namespace std;

vector <int > arr[5007];
bool visited[5007];
int i, n, m, mx, l = 0;
string s[5007], p, pp;

void dfs(int s)
{
    visited[s]=true;
    l++;

    for(int j=0;j<arr[s].size();j++)
    {
        if(visited[arr[s][j]]==false)
        {
            dfs(arr[s][j]);
        }
    }
}

int main()
{
    while(scanf("%d%d", &n, &m) == 2)
    {
        getchar();
        if(n==0 && m==0) return 0;
        map <string , int > a;
        for(i = 0; i <= n; i++) arr[i].clear(),visited[i] = false;
        for(i=1;i<=n;i++)
        {
            getline(cin, s[i]);
            a[s[i]]=i;
        }
        for(i=1;i<=m;i++)
        {
            cin>>p>>pp;
            arr[a[p]].push_back(a[pp]);
            arr[a[pp]].push_back(a[p]);
        }
        mx = 0;
        for(i=1;i<=n;i++)
        {
            if(visited[i]==false)
            {
                dfs(i);
                mx=max(l, mx);
                l=0;
            }
            //cout<<i<<"----"<<endl;
        }
        printf("%d\n", mx);
    }
}

