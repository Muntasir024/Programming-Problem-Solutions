#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long fib[62],i;
    fib[0]=0;
    fib[1]=1;
    for(i=2;i<61;i++)
    {
        fib[i] = fib[i-2] + fib[i-1];
    }
    long long bee[50],n;
    bee[0]=0;
    bee[1]=1;
    for(i=2;i<=50;i++)
    {
        bee[i] = bee[i-1] + fib[i];
    }

    while(scanf("%lld",&n) == 1)
    {
        if(n== (-1))
            break;
        cout<<bee[n]<<" "<<bee[n+1]<<endl;
    }

    return 0;
}
