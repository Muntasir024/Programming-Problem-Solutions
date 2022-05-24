#include<bits/stdc++.h>
#define ll long long
#define maxn 10000007
using namespace std;

ll a[maxn];
bool prime[maxn+1];

int main()
{
    ll t, i, j, p, n, c;

    memset(prime, true, sizeof(prime));
    vector <ll > v;

    for (p=2; p*p<=maxn; p++)
    {
        if (prime[p] == true)
        {
            v.push_back(p);
            for (i=p+p; i<=maxn; i += p)
                prime[i] = false;
        }
    }
    ll l=v.size();
    a[0] = a[1] = 0;
    for(i=2; i<=10000000; i++)
    {
        if(prime[i]==true)
            c = i;
        else
        {
            for(j=0;j<l;j++)
            {
                if(i%v[j]==0)
                {
                    c = v[j];
                    break;
                }
            }
        }
        a[i]=a[i-1]+c;
    }
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        printf("%lld\n", a[n]);
    }
    return 0;
}
