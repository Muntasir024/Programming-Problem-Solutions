#include<bits/stdc++.h>
using namespace std;
#define mx 1000005
bool prime[mx+3];

int main()
{
    long long p,i,n,l;
    memset(prime, true, sizeof(prime));

    for (p=2; p*p<=1000005; p++)
    {
        if (prime[p] == true)
        {
            for (i=p*2; i<=1000005; i += p)
                prime[i] = false;
        }
    }

    while(scanf("%lld",&n) != EOF)
    {
        l=0;
        for(i=2;i*i<=n;i++)
        {
            if(n%i==0 && prime[i]==true && prime[n/i]==true)
            {
                l=1;
                break;
            }
        }
        if(l==0)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }

    return 0;
}
