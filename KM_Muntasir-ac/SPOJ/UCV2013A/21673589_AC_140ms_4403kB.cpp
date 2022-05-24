#include<bits/stdc++.h>
using namespace std;

long long BigMod(long long b, long long p, long long m)
{
    long long n,x;
    if(p==0)
        return 1;
    else if(p%2==0)
    {
        n = BigMod(b, p/2, m);
        return (n*n)%m;
    }
    else
    {
        x = b%m;
        n= BigMod(b, p-1, m);
        return (n*x)%m;
    }
}

int main()
{
    long long b,p,m,ans,x;
    while(scanf("%lld %lld",&b,&p) && b && p)
    {
        x=1;
        ans=0;
        for(int i=1;i<=p;i++){
            ans=(ans+BigMod(b,i,1000000007))%1000000007;
        }
        cout<<ans<<endl;
    }

    return 0;
}
