#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, i, c = 0,x, f=1;
        cin>>n>>x;
        cin.ignore();
        string s, p, m;
        map <char, int> mp;
        for(i='a';i<='z';i++) mp[i]=-1;
        cin>>s;
        cin>>m;
        for(i=0;i<n;i++)
        {
            if(mp[s[i]] == -1) mp[s[i]] = m[i]-'0';
            else  mp[s[i]] = min(m[i]-'0', mp[s[i]]);
        }
        cin>>p;
        for(i=0;i<x;i++)
        {
            if(mp[p[i]]==-1) f=0;
            c += mp[p[i]];
        }
        if(f)
        cout<<c<<endl;
        else cout<<"-1"<<endl;
    }

}
