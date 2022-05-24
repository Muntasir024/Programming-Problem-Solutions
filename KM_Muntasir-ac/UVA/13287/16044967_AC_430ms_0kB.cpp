#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){ll n,t,a,b,x,s;while(scanf("%lld%lld",&n,&t)!=EOF){s=0;while(t--){scanf("%lld%lld", &a,&b);x=a*b;s+=x;}printf("%lld\n",s/n);}}
