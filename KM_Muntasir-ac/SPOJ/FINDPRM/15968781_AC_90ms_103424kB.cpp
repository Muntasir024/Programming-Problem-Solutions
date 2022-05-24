#include<bits/stdc++.h>
#define ll long long
#define maxn 10000007
using namespace std;

ll a[maxn];
bool prime[maxn+1];

int main()
{
    ll t, i, j, p, n, c, l;

    memset(prime, true, sizeof(prime));

    for (p=2; p*p<=maxn; p++)
    {
        if (prime[p] == true)
        {
            for (i=p+p; i<=maxn; i += p)
                prime[i] = false;
        }
    }
    a[1]=0;
    for(i=2;i<maxn;i++)
        a[i]=a[i-1]+prime[i];

    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);

        printf("%lld\n", a[n]-a[n/2]);
    }
    return 0;
}
