#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, i, k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        long long a[n+2], c=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<=0) c++;
        }
        if(c>=k) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
