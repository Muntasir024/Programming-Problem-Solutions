#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long k,a,b,s,n,m;
    cin>>k>>a>>b;
    m=(a/k)*k;
    if(m<a)
        m+=k;
    n=(b/k)*k;
    if(n>b)
        n-=k;
    s=n/k - m/k;
    cout<<s+1<<endl;

    return 0;
}
