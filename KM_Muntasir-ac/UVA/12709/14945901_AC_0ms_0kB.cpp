#include <stdio.h>
#define max(a,b) a > b ? a : b
int n,l,w,h,v,m;
main(){while(scanf("%d",&n) && n){m=v=0;while(n--){scanf("%d%d%d",&l,&w,&h);if(m<h){m=h;v=l*w*h;}else if(m==h) v=max(v,l*w*h);}printf("%d\n",v);}}
