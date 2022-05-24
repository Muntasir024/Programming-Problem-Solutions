#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,i,k,a[100];
    cin>>t;
    for(k=1;k<=t;k++)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        cout<<"Case "<<k<<": "<<a[n/2]<<endl;
    }
    return 0;
}
