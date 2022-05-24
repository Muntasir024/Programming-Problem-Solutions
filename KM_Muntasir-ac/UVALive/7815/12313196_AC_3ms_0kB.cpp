#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,s;
    while(scanf("%lld",&n) && n)
    {
        if(n>1000000 && n<=5000000)
            n = n - (n/10);
        else if(n>5000000)
            n = n - (n/5);
        cout<<n<<endl;
    }
    return 0;
}
