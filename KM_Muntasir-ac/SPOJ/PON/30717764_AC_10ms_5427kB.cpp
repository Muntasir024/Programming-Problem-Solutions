#include<bits/stdc++.h>
#define ll long long
using namespace std;
using u64 = uint64_t;
using u128 = __uint128_t;

u64 binPower(u64 base, u64 e, u64 mod)
{
    u64 result = 1;
    base %= mod;
    while(e){
        if(e & 1)
            result = (u128) result * base % mod;
        base = (u128) base * base % mod;
        e >>= 1;
    }
    return result;
}

bool isPrime(ll n, int iter = 5)
{
    if(n <= 5) return n == 2 || n == 3 || n == 5;

    for(int i=1;i <= iter;i++)
    {
        ll a = 2 + rand() % (n-3);
        ll ans = binPower(a, n-1, n);

        if(ans != 1) return false;
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

    ll t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(isPrime(n)) cout << "YES" << endl;
        else           cout << "NO" << endl;
    }
    return 0;
}
