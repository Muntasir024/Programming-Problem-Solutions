#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,t,i,j,x,y,d,k;

    cin>>t;
    for(k=1;k<=t;k++)
    {
        cin>>n;
        long long a[n+5],b[n+5],s[n+5];
        for(i=0;i<n;i++)
        {
            cin>>a[i]>>b[i];
        }
        d = 0;
        for(i=n-1;i>=0;i--)
        {
            d = d + (a[i]+b[i]);
            s[i] = (d%10);
            //cout<<s[i]<<endl;
            d = d / 10;
        }
        if(d != 0)
            cout<<d;
        for(i=0;i<n;i++)
            cout<<s[i];
        cout<<endl;

        if(k != t)
            cout<<endl;
    }

    return 0;
}
