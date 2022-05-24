#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    return !b?a:gcd(b,a%b);
}

int main()
{
    int n,m,t=1,k;
    cin>>k;
    while(k--)
    {
        cin>>n>>m;
        cout<<"Case "<<t<<": "<<(n+m)/gcd(n,m)<<endl;
        t++;
    }
    return 0;
}
