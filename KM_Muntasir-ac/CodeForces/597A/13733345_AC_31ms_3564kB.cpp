#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long k,a,b,s,x,y;
    cin>>k>>a>>b;
    x=(a/k)*k;
    if(x<a)
        x+=k;
    y=(b/k)*k;
    if(y>b)
        y-=k;
    s=y/k - x/k;
    cout<<s+1<<endl;

    return 0;
}
