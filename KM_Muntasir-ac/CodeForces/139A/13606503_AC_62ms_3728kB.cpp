#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,s=0,l=0,ans=0;
    cin>>n;
    long long a[n+2];
    for(i=0;i<7;i++)
        cin>>a[i];
    while(1)
    {
        for(i=0;i<7;i++)
        {
            s+=a[i];
            if(s>=n)
            {
                l=1;
                ans=(i%7)+1;
                break;
            }
        }
        if(l) break;
    }
    cout<<ans<<endl;

    return 0;
}
