#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,c=0;
    cin>>n;
    long long a[n+2];
    cin>>a[0];
    for(i=1; i<n; i++)
    {
        cin>>a[i];
        if(a[i-1] > a[i])
        {
            c += (a[i-1]-a[i]);
        }
    }
    cout<<c<<endl;

    return 0;
}
