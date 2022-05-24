#include<stdio.h>
main()
{int n;while(scanf("%d",&n)==1&&n){n=n%9?n%9:9;printf("%d\n",n);}}
