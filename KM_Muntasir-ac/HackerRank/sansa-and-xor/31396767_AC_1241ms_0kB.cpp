#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,x,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n+2], c=0;
        for(i=0;i<n;i++) cin>>a[i];
        if(n%2==1)
        {
            for(i=0;i<n;i+=2) c = c^a[i];
            cout<<c<<endl;
        }
        else
            cout<<"0"<<endl;
    }
    return 0;
}