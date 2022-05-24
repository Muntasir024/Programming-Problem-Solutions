#include <stdio.h>
main()
{char s;int a=0;while(s=getchar()){if(s== -1) break;if(s=='1'||s=='0'){a=(a<<1)+s-'0';if(a>=131071)a%=131071;}else if(s=='#'){puts(a?"NO":"YES");a=0;}}}
