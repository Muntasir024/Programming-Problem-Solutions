#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t, i, j, n, x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        map <ll, ll> m;
        for(i=0;i<n-1;i++)
        {
            cin>>x;
            m[x]++;
        }
        for(i=1;i<=n;i++)
            if(!m[i])
                cout<<i<<endl;
    }
}

