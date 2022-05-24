#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,s,x,t,l;
    cin>>t;
    while(t--)
    {
        cin>>n;
        x=1;
        s=0;
        for(i=1;x<=n;i++)
        {
            s += x;
            x=x*2;
        }

        l = ((n*(n+1))/2) - 2*s;
        cout<<l<<endl;
    }

    return 0;
}
