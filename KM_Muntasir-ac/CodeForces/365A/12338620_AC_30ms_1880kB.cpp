#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n,i,k,tc=0,cnt,j;

    cin>>n>>k;
    int mp[10000];
    cin.ignore();
    for(j=1; j<=n; j++)
    {
        cnt=0;
        cin>>s;
        memset(mp, 0, sizeof(mp));
        for(i=0; i<s.length(); i++)
        {
            if(s[i]>='0' && s[i]<=(k+'0'))
            {
                mp[s[i]]=1;
            }
        }
        for(i=0;i<s.length();i++)
        {
            if(mp[s[i]] != 0)
            {
                ++cnt;
                mp[s[i]]=0;
            }
        }
        if(cnt==k+1)
        {
            ++tc;
        }
    }
    cout<<tc<<endl;;

    return 0;
}
