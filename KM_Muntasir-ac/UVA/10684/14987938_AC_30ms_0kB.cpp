#include<bits/stdc++.h>
using namespace std;
main()
{int n,x,s,m;
    while(scanf("%d",&n) && n){s=m=0;
        while(n--){scanf("%d",&x);s+=x;if(s<0)s=0;if(m<s)m=s;}
        if(s)printf("The maximum winning streak is %d.\n",m);
        else printf("Losing streak.\n");}}
