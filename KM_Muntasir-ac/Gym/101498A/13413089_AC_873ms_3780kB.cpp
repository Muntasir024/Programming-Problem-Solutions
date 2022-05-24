#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,i,t,ans;
    map <int,int> m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin.ignore();
        string s;
        int a[n+2];
        map <int,int> m;
        for(i=0;i<n;i++)
        {
            cin>>s>>a[i];
            m[a[i]]++;
        }
        int mx=0;
        for(i=0;i<n;i++)
        {
            if(mx<m[a[i]]) {
                mx=m[a[i]];
                ans=a[i];
            }
            else if(mx==m[a[i]]) {ans=min(ans,a[i]);}
        }
        cout<<ans<<endl;
    }


    return 0;
}
