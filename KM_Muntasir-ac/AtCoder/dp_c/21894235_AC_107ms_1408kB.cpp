#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n;
    cin>>n;
    int a[n+2], b[n+2], c[n+2], x=0, y=0, z=0, p, q, r;
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i]>>c[i];
        if(i)
        {
            p=x,q=y,r=z;
            x=a[i]+max(q,r);
            y=b[i]+max(p,r);
            z=c[i]+max(q,p);
        }
        else
        {
            x=a[i], y=b[i], z=c[i];
        }
    }
    cout<<max(x, max(y, z))<<endl;
    return 0;
}
