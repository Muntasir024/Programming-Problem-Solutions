#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h,m,x,t;
    scanf("%d:%d%d", &h,&m,&x);
    t = h*60+m+x;
    t%=24*60;
    printf("%02d:%02d\n",t/60,t%60);
    return 0;
}
