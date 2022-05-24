#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t, n, m, i, j, a[5];
    scanf("%lld", &t);
    while(t--)
    {
        cin>>n>>m;
        vector <ll > v;
        j=0;
        while(n--)
        {
            cin>>a[0]>>a[1]>>a[2];
            sort(a, a+3);
            v.push_back(a[0]);
            v.push_back(a[1]);
        }
        sort(v.begin(), v.end());
        for(i=0;i<m;i++) j+=v[i];
        cout<<j<<endl;
    }
    return 0;
}
