#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k, i, l = 0, a[100007];
    cin>>n>>k;
    for(i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            a[l]=i;
            l++;
            if(i!=n/i)
            {
                a[l]=n/i;
                l++;
            }
        }
    }
    sort(a, a+l);
    if(k<=l) cout<<a[k-1]<<endl;
    else cout<<"-1"<<endl;
    return 0;
}
