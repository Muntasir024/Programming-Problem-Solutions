#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,p,i,s=0,x,ss,ps,mx=0,ss1,ps1;
    cin>>n>>x;
    long long a[n+2],b[n+2];
    cin>>a[0];
    b[0]=a[0];
    for(i=1;i<n;i++)
    {
        cin>>a[i];
        b[i]=b[i-1]+a[i];
    }
    if(n==2)
    {
        cout<<((a[0]%x)+(a[1]%x))<<endl;
        return 0;
    }
    s=b[n-1];
    for(i=1;i<n-1;i++)
    {
        ss=b[i];
        ps=s-ss;
        ss=ss%x;
        ps=ps%x;
        //cout<<ss<<" "<<ps<<endl;
        if(ss+ps>mx)
            mx=ss+ps;
    }
    cout<<mx<<endl;
    return 0;
}
