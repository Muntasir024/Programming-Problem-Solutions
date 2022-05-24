#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,i,pos,x;
    cin>>n;
    long long ar1[n];
    for(i=0;i<n;i++)
        cin>>ar1[i];
    cin>>m;
    long long ar2[m];
    for(i=0;i<m;i++)
        cin>>ar2[i];

    sort(ar1,ar1+n);

    for(i=0;i<m;i++) {
        x=ar2[i];
        cout<<(upper_bound(ar1,ar1+n,x)-ar1)<<endl;
    }

    return 0;
}