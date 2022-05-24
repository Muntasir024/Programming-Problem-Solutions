#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a,ll b)
{
    if (a==0) return b;return gcd(b%a,a);
}
int main()
{
    ll t,k,i,n,x,s;scanf("%lld",&k);
    for(t=1;t<=k;t++){scanf("%lld",&n);ll a[n+2];s=1;
        for(i=0;i<n;i++)
        {scanf("%lld",&a[i]);s*=a[i];}x=0;
        for(i=0;i<n;i++)x+=(s/a[i]);
        s*=n;i=gcd(min(x,s),max(x,s));
        printf("Case %lld: %lld/%lld\n",t,s/i,x/i);
    }
}
