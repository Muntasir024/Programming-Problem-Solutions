#include<bits/stdc++.h>
using namespace std;
main()
{unsigned long long t,n,m;scanf("%llu",&t);while(t--){scanf("%llu%llu",&n,&m);n=m-n;m=(m*(m-1))/2;n=(n*(n-1))/2;printf("%llu\n",m-n);}}
