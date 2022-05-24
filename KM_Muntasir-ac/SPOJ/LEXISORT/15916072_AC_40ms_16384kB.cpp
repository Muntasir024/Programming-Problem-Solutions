#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll m, i, n, u, v, k, x, t;
    scanf("%lld", &t);
    while(t--)
    {
        cin>>n;
        cin.ignore();
        string s[n+2];
        for(i=0; i<n; i++)
            getline(cin, s[i]);
        sort(s, s+n);
        for(i = 0; i<n; i++)
            cout<<s[i]<<endl;
    }
    return 0;
}

