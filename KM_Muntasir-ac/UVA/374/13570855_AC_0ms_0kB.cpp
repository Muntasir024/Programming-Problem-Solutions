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
    long long b,p,m;
    while(scanf("%lld %lld %lld",&b,&p,&m) != EOF)
    {
        cout<<BigMod(b,p,m)<<endl;
    }

    return 0;
}
