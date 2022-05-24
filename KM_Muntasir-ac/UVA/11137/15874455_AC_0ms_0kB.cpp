#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll s[10007];
int main()
{
    ll n,i,j,c[30];
    for(i=1;i<=21;i++){j=i*i*i;c[i]=j;}s[0]=1;
    for(i=1;i<=21;i++)
        for(j=c[i];j<=10000;j++)
            s[j]+=s[j-c[i]];
    while(scanf("%lld",&n)!=EOF){printf("%lld\n",s[n]);}
}