#include<bits/stdc++.h>
using namespace std;
main()
{int b,s,t=1;while(scanf("%d%d",&b,&s)==2){if(b==0||s==0) break;if(b==1||b==0) printf("Case %d: :-\\\n",t++);else if(b<=s) printf("Case %d: :-|\n",t++);else if(b>s) printf("Case %d: :-(\n",t++);}}
