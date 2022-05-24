#include<bits/stdc++.h>
using namespace std;
#define mx 20000000
bool prime[mx+3];
long long a[mx+3];

int main()
{
    long long p,i,n,cnt,j,k,x,z;
    memset(prime, true, sizeof(prime));

    for (p=2; p*p<=mx; p++)
    {
        if (prime[p] == true)
        {
            for (i=p*2; i<=mx; i += p)
                prime[i] = false;
        }
    }
    for(i=3,z=1; i<=mx; i+=2)
    {
        if(prime[i]==true && prime[i+2]==true)
        {
            a[z]=i;
            ++z;
        }
    }
    while(scanf("%lld",&n) != EOF)
    {
        cout<<"("<<a[n]<<", "<<a[n]+2<<")"<<endl;
    }

    return 0;
}
