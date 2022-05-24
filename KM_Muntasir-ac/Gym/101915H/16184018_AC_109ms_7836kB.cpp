#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a[1000007], b[5];

int main()
{
    ll t, n, i, j, s, k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        i=0;
        while(n--)
        {
            cin>>b[0]>>b[1]>>b[2];
            sort(b, b+3);
            a[i++]=b[0];
            a[i++]=b[1];
        }
        sort(a, a+i);
        for(j=0,s=0;j<k;j++)
            s += a[j];
        cout<<s<<endl;
    }
}


