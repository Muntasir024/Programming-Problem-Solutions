#include<bits/stdc++.h>
using namespace std;

vector <int > arr[100007];
bool visited[100007];
int i, n, m, mx, mn, l = 0, p, pp;

void dfs(int s)
{
    visited[s]=true;
    l++;

    for(int j=0; j<arr[s].size(); j++)
    {
        if(visited[arr[s][j]]==false)
        {
            dfs(arr[s][j]);
        }
    }
}

int main()
{
    scanf("%d", &m);
    vector <int > v;
    map <int, int > mp;
    for(i = 0; i <= 100000; i++)
        arr[i].clear(),visited[i] = false;
    for(i=1; i<=m; i++)
    {
        cin>>p>>pp;
        if(mp[p]==0) v.push_back(p);
        if(mp[pp]==0) v.push_back(pp);
        arr[p].push_back(pp);
        arr[pp].push_back(p);
    }
    mx = 0;
    mn = 100000007;
    for(i=0; i<v.size(); i++)
    {
        if(visited[v[i]]==false)
        {
            dfs(v[i]);
            mx=max(l, mx);
            mn=min(l, mx);
            l=0;
        }
        //cout<<i<<"----"<<endl;
    }
    printf("%d %d\n", mn, mx);
}
