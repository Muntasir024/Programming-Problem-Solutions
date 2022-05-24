#include<bits/stdc++.h>
using namespace std;
long long n,i,p,cnt,prms[100000],l=0;
bool prime[1000000+5];
int main()
{
    memset(prime, true, sizeof(prime));
    for (p=2; p*p<=1000005; p++)
    {
        if (prime[p] == true)
        {
            for (i=p*2; i<=1000005; i += p)
                prime[i] = false;
        }
    }
    for(p=2;p<=1000000;p++) if(prime[p]==true) prms[l++]=p;
    while(scanf("%lld",&n) == 1 && n)
    {
        //p=n;
        cnt=0;
        if(prime[n]==true)
            ++cnt;
        for(i=0;; i++)
        {
            if(prms[i]>=n) break;
            if(n%prms[i]==0)
            {
                ++cnt;
                //n = n / i;
            }
        }

        cout<<n<<" : "<<cnt<<endl;
    }

    return 0;
}
