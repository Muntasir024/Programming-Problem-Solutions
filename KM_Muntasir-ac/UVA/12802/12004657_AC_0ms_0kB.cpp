#include<bits/stdc++.h>
using namespace std;

int pal(int n)
{
    int d=0;
    while(n)
    {
        d = (d*10) + (n%10);
        n = n / 10;
    }
    return d;
}

int main()
{
    long long n,i,sum,p;

    bool prime[1000000+1];
    memset(prime, true, sizeof(prime));

    for (p=2; p*p<=1000000; p++)
    {
        if (prime[p] == true)
        {
            for (i=p*2; i<=1000000; i += p)
                prime[i] = false;
        }
    }

    while(1)
    {
        cin>>n;
        cout<<(n*2)<<endl;

        if(prime[n] == true && n==pal(n))
            return 0;
    }

    return 0;
}
