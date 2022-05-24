#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    double x,y,r,s;
    scanf("%d",&tc);
    while(tc--)
    {
        x=0;
        y=0;
        r=0;
        scanf("%lf %lf %lf",&x,&y,&r);
        s=sqrt(x*x+y*y);
        printf("%.2f %.2f\n",r-s,r+s);
    }
    return 0;
}
