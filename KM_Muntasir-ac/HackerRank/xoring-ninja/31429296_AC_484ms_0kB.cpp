#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

ll pw(ll a, ll n) {
    ll res=1;
    while(n) {
        if(n&1) {
            res = ((res%mod) * (a%mod)) % mod;
            n--;
        }
        else {
            a = ((a%mod) * (a%mod)) % mod;
            n /= 2;
        }
    }
    return res % mod;
}

int main()
{
    int t, n, i, x, c;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        int c = 0;
        for(i=0;i<n;i++) {
            scanf("%d", &x);
            c |= x;
        }
        c = (c * pw(2, n-1)) % mod;
        printf("%d\n", c);
    }
    return 0;
}
