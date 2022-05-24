#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a[10],sum=0,n;
    cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
    sum=a[0]+a[1]+a[2]+a[3]+a[4];
    if(sum%5 != 0 || sum==0)
        cout<<"-1"<<endl;
    else
        cout<<(sum/5)<<endl;

    return 0;
}
