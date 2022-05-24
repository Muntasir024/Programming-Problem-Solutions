#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,n,mx,tc=1;
    string s[15];
    map <string,int> m;
    scanf("%d",&t);
    while(t--)
    {
        for(i=0;i<10;i++)
        {
            cin>>s[i];
            scanf("%d",&n);
            m[s[i]]=n;
        }
        mx=0;
        for(i=0;i<10;i++)
        {
            if(mx<m[s[i]])
            {
                mx=m[s[i]];
            }
        }
        cout<<"Case #"<<tc<<":"<<endl;
        for(i=0;i<10;i++)
        {
            if(m[s[i]] == mx)
            {
                cout<<s[i]<<endl;
                m[s[i]]=0;
            }
        }
        ++tc;
    }
    return 0;
}
