#include<bits/stdc++.h>
using namespace std;
int c[100005],n,k;
string s;
bool fun(int x)
{
   // cout<<x<<"=x | k="<<k<<endl;
    for(int i=x; i<=n; i++)
    {
        if(c[i]-c[i-x]<=k)
        {
            //cout<<i<<"=i  |  c="<<c[i]<<" "<<c[i-x]<<endl;
            return 1;
        }
    }
    return 0;
}
int main()
{
    cin>>s;
    n=s.size();
    c[0]=0;
    for(int i=0; i<n; i++)
    {
        c[i+1]=c[i]+(s[i]==',');
    }
    cin>>k;
    int lb=1,rb=n,md,ans=0;
    while(lb<=rb)
    {
        md=(lb+rb)/2;
        if(fun(md))
        {
            //cout<<md<<endl;
            ans=max(ans,md);
            lb=md+1;
        }
        else
            rb=md-1;
    }
    cout<<ans<<endl;
    return 0;
}
