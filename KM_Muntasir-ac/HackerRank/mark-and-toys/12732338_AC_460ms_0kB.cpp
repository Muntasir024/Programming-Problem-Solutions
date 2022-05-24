#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,k,s=0,cnt=0,x;
    cin>>n>>k;
    long long a[n+5];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        s += a[i];
        if(s>k)
        {
            break;
        }
        ++cnt;
    }
    cout<<cnt<<endl;

    return 0;
}
