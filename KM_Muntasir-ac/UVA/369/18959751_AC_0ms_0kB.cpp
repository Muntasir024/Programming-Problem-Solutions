#include<bits/stdc++.h>
using namespace std;
long long n,r, table[107][107];

long long nCr(long long n, long long r)
{
    if (r==1) return n;
    if (n==r) return 1;
    if (table[n][r] != -1) return table[n][r];
    table[n][r] = nCr(n-1, r) + nCr(n-1, r-1);
    return table[n][r];
}

int main()
{
    while(scanf("%lld%lld",&n,&r)==2 && n && r)
    {
        memset(table, -1, sizeof(table));
        printf("%lld things taken %lld at a time is %lld exactly.\n",n,r,nCr(n,r));
    }
    return 0;
}
