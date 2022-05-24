#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n, a;
    while(scanf("%llu", &n) && n)
    {
        a=(n*10)/9;
        if(n%9==0) printf("%llu %llu\n",a-1,a);
        else printf("%llu\n", a);
    }
}
