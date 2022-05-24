#include <stdio.h>
#include <math.h>
main(){int n,i,s,t,q;scanf("%d",&t);while(t--){scanf("%d",&n);q=sqrt(n);s=1;for(i=2;i<=q;i++){if(n%i==0){s+=i;if(n/i!=i)s+=n/i;}if(s>n)break;}if(s<n)printf("deficient\n");else if(s>n)printf("abundant\n");else printf("perfect\n");}}