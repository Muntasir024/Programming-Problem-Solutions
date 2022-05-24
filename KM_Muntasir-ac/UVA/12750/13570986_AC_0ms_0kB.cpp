#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,l,t,k,ans,m;
    char s[1000];
    cin>>k;
    for(t=1;t<=k;t++)
    {
        cin>>n;
        cin.ignore();
        s[0]='W';
        ans=l=m=0;
        for(i=1;i<=n;i++)
        {
            cin>>s[i];
            if(s[i]=='W')
                l=0;
            if(s[i]=='L' || s[i]=='D')
                ++l;
            if(l==3 && m==0)
            {
                ans=i;
                m=1;
            }
        }
        if(ans==0)
            cout<<"Case "<<t<<": "<<"Yay! Mighty Rafa persists!"<<endl;
        else
            cout<<"Case "<<t<<": "<<ans<<endl;
    }

    return 0;
}
