#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k,p=1,i;
    cin>>n>>k;
    for(i=1;i<=min(n,k);i++)
        p*=i;
    cout<<p<<endl;

    return 0;
}
