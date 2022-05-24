#include<bits/stdc++.h>
using namespace std;

long sum(long n)
{
    long d=0;
    while(n)
    {
        d += (n%10);
        n /= 10;
    }
    return d;
}

int main()
{
    long n,i,mn;
    cin>>n;
    long a[n+2];
    cin>>a[0];
    mn=sum(a[0]);
    for(i=1;i<n;i++)
    {
        cin>>a[i];
        if(mn > sum(a[i]))
            mn=sum(a[i]);
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        if(mn == sum(a[i]))
        {
            cout<<a[i]<<endl;
            break;
        }
    }

    return 0;
}
