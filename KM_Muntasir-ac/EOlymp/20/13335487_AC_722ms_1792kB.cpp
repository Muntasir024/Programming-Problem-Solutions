#include<bits/stdc++.h>
using namespace std;

long long digi(long long n)
{
    long long p,d=0;
    p=n;
    while(p != 0)
    {
        d = d + (p%10);
        p = p / 10;
    }
    return d;
}

int main()
{
    long long n,p,c=0;
    cin>>n;
    p=n;
    while(p>1)
    {
        p=p-digi(p);
        ++c;
    }

    cout<<c<<endl;
    return 0;
}
