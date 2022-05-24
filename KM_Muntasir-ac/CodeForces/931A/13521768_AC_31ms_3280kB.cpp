#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,s,t,sum=0,p,i;
    cin>>n>>m;
    p = s = (n+m)/2;
    if(m>n)
    {
        t=n;n=m;m=t;
    }
    if(n-m == 1){
        cout<<"1"<<endl;
        return 0;
    }
    //cout<<((n-s)+(s-m))<<endl;
    for(i=1;;i++)
    {
        sum=sum+i;
        ++p;
        if(n==p)
            break;
    }
    for(i=1;;i++)
    {
        sum=sum+i;
        --s;
        if(m==s)
            break;
    }
    cout<<sum<<endl;
    return 0;
}
