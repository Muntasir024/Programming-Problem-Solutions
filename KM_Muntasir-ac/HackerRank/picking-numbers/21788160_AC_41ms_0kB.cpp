#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i, mx=0;
    cin>>n;
     int a[109];
     for(i=0;i<=107;i++) a[i]=0;
    for(i=0;i<n;i++)
    {
        cin>>t;
        a[t]++;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]+a[i+1]>mx)
            mx=a[i]+a[i+1];
    }
    cout<<mx<<endl;
    //main();
    return 0;
}
