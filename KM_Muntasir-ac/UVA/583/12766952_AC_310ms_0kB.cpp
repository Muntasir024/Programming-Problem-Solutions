#include<bits/stdc++.h>
using namespace std;

void fact(long long n)
{
    long long i,l=1,a;
    cout<<n<<" = ";
    if(n>=0)
    {
        a=n;
        while (n%2 == 0)
        {
            if(l==0)
                cout<<" x ";
            printf("%d", 2);
            n = n/2;
            l=0;
        }
        for (int i = 3; i <= sqrt(n); i = i+2)
        {
            while (n%i == 0)
            {
                if(l==0)
                    cout<<" x ";
                printf("%d", i);
                n = n/i;
                l=0;
            }
        }
        if(n>2 && n!=a)
            printf(" x %lld",n);
        else if (n > 2 && n==a)
            printf ("%lld", n);
        cout<<endl;
    }
    else
    {
        n = n*(-1);
        cout<<"-1";
        while (n%2 == 0)
        {
            printf(" x %d", 2);
            n = n/2;
        }
        for (int i = 3; i <= sqrt(n); i = i+2)
        {
            while (n%i == 0)
            {
                printf(" x %d", i);
                n = n/i;
            }
        }
        if (n > 2)
            printf (" x %d", n);
        cout<<endl;
    }
}

int main()
{
    long long n;
    while(scanf("%lld",&n) == 1 && n)
    {
        fact(n);
    }
    return 0;
}
