#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,x,t;
    cin>>n;
    long long a[n+2], b[n+2];
    for(i=1;i<=n;i++) b[i]=0;
    for(i=1;i<=n;i++) cin>>a[i];
    for(i=1;i<=n;i++)
    {
        x=a[a[i]];
        b[x]=i;
    }
    for(i=1;i<=n;i++)
    {
        printf("%lld\n", b[i]);
    }
    return 0;
}
