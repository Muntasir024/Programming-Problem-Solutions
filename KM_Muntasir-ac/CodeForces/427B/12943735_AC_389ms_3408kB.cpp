#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,t,i,c,cnt=0,e=0,j=0;
    cin>>n>>t>>c;
    long long a[n+5];
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
        ++j;
        if(j == c)
        {
            if(a[i]<=t)
                ++e;
            if(e == c)
                ++cnt;
            if(a[i-c+1]<=t)
                --e;
            --j;
        }
        else
        {
            if(a[i]<=t)
                ++e;
            //cout<<e<<endl;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
