#include<bits/stdc++.h>
#define ll long long
using namespace std ;

int main()
{
    ll n,i,p,s=0;
    cin>>n;
    ll a[n+2];
    for(i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);

    for(i=1;i<=n;i++)
    {
        p = abs(i - a[i]);
        s = s + p;
    }
    cout<<s<<endl;
    return 0;
}
