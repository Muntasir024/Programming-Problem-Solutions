#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,i,y=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x==0)
            ++y;
    }
    if(n==1 && x==1)
        cout<<"YES"<<endl;
    else if(y==1 && n>1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
