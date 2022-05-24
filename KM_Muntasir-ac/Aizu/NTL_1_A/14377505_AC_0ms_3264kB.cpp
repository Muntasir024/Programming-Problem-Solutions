#include<bits/stdc++.h>
using namespace std;

void fact(long long n)
{
    long long i,l=1,a;
    cout<<n<<":";
    a=n;
    while (n%2 == 0)
    {
        printf(" %d", 2);
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            printf(" %d", i);
            n = n/i;
        }
    }
    if(n>2 && n!=a)
        printf(" %lld",n);
    else if (n > 2 && n==a)
        printf (" %lld", n);
    cout<<endl;
}

int main()
{
    long long n;
    scanf("%lld",&n);
    fact(n);
    return 0;
}
