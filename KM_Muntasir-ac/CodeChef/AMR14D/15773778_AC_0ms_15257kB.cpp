#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t, n, i, x, f;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld", &n);
        map <ll, ll> m;
        f = 1;
        while(n--)
        {
            scanf("%lld", &x);
            m[x]++;
            if(m[x] > 1)
                f = 0;
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
