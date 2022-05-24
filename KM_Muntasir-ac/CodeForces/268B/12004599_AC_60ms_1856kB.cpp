#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,sum;
    cin>>n;
    sum=n;
    for(i=1;i<n;i++)
        sum = sum +(n-i)*i;

    cout<<sum<<endl;

    return 0;
}
