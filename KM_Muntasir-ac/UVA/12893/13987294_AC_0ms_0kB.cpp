#include<bits/stdc++.h>
using namespace std;

long long num(long long n)
{
    if(n==0) return 0;
    else return num(n/2)+(n%2);
}

int main()
{
    long long tc,n;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        cout<<num(n)<<endl;
    }

    return 0;
}
