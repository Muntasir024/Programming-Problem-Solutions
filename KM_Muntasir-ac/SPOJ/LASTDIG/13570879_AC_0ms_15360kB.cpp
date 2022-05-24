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
        return ((n%m)*(n%m))%m;
    }
    else
    {
        return ( (b%m) * (BigMod( b, p-1, m)))%m;
    }
}

int main()
{
    long long t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cout<<BigMod(a,b,10)<<endl;
    }

    return 0;
}
