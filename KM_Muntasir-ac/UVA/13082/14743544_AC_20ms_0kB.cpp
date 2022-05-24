#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,tc,k,x,in,c;
    cin>>tc;
    for(k=1;k<=tc;k++)
    {
        cin>>n;
        int a[n+2];
        in=1;
        for(i=0;i<n;i++)
            cin>>a[i];
        c=0;
        for(i=0;i<n;i++)
        {
            if(a[i] == in)
            {
                ++c;
                ++in;
            }
        }
        c=n-c;
        cout<<"Case "<<k<<": "<<c<<endl;
    }
    return 0;
}
