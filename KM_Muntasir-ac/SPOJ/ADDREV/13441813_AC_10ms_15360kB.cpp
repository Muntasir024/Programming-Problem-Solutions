#include<bits/stdc++.h>
using namespace std;

long long riv(long long n)
{
    long long d=0;
    while(n!=0)
    {
        d = (d*10) + (n%10);
        n = (n/10);
    }
    return d;
}

int main()
{
    long long t,n,m,s;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        s=riv(n)+riv(m);
        cout<<riv(s)<<endl;
    }

    return 0;
}
