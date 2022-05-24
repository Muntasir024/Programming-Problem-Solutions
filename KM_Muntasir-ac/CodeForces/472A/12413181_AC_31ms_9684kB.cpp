#include<bits/stdc++.h>
using namespace std;
#define mx 1000000
long long prime[mx+3];
int main()
{
    long long n,p,i,s;
    cin>>n;

    for (int p=2; p*p<=mx; p++)
    {
        if (prime[p] == 0)
        {
            for (int i=p*2; i<=mx; i += p)
                prime[i] = 1;
        }
    }
    for(i=4;i<n; i++)
    {
        if(prime[i]==1 && prime[n-i]==1)
        {
            cout<<(i)<<" "<<(n-i)<<endl;
            break;
        }
    }
    return 0;
}