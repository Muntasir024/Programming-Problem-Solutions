#include<bits/stdc++.h>
using namespace std;
main()
{long t,n,i,d=1,s,a[50];a[1]=1;for(i=2;i<=30;i++){a[i]=d*4;d=(2*d)+1;}scanf("%lld",&t);while(t--){scanf("%lld",&n);printf("%lld\n",a[n]);}}
