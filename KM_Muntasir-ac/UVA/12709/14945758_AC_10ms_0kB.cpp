#include<bits/stdc++.h>
using namespace std;
main(){int t,a,l,w,h,x,y;while(scanf("%d",&t)==1 && t){a=x=0;while(t--){cin>>l>>w>>h;y=(l*w*h);if(x<h){x=h;a=y;}else if(x==h){if(a<y){a=y;}}}printf("%d\n",a);}}
