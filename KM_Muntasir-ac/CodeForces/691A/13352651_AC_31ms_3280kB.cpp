#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,x=0,y=0,l=0,m;
    cin>>n;
    int a[n+4];
    for(i=0; i<n; i++)
    {
        cin>>m;
        if(m==0)
            ++y;
    }
    if(n==1 && m==1)
        cout<<"YES"<<endl;
     else if(y==1 && n>1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
