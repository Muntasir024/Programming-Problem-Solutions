#include <bits/stdc++.h>
#define ll long long
#define maxn 1000000
using namespace std;

bool prime[maxn+7];
ll pri[maxn];

int main()
{
    ll n=2, i, p, l = 1, tc=1;
    vector<ll > v;
    v.push_back(n);

    memset(prime, true, sizeof(prime));

    prime[1]=false;
    for(i=4; i<=maxn; i+=2)
        prime[i]=false;
    for (p=3; p<=maxn; p+=2)
    {
        if (prime[p] == true)
        {
            v.push_back(p);
            ++l;
            for (i=p+p; i<=maxn; i += p)
                prime[i] = false;
        }
    }

    while(scanf("%lld", &n) && n)
    {
        ll ans = 0 , t;
        for(i=0; i<l; i++)
        {
            if(v[i]>=n) break;
            t = upper_bound(v.begin(),v.end(), n-v[i])-v.begin();
            t--;
            if(t<=i) break;
            ans += (t-i);
        }
        printf("Case %lld: %lld\n", tc++, ans);
    }

}

