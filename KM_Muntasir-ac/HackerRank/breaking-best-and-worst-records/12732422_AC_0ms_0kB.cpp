#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,mn,mx,cmn=0,cmx=0,x;
    cin>>n>>x;
    mn=mx=x;
    for(i=1;i<n;i++)
    {
        cin>>x;
        if(mn>x)
        {
            mn=x;
            ++cmn;
        }
        if(mx<x)
        {
            mx=x;
            ++cmx;
        }
    }
    cout<<cmx<<" "<<cmn<<endl;

    return 0;
}
