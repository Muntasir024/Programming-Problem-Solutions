#include<bits/stdc++.h>
#define PI acos(-1)
using namespace std;

int main()
{
    double a,b,c, s,s1,s2,s3,p,R,r;
    while(scanf("%lf%lf%lf",&a,&b,&c) != EOF)
    {
        p = (a+b+c)/2;
        s = sqrt(p*(p-a)*(p-b)*(p-c));
        R = (a*b*c)/(4*s);
        r = sqrt((p-a)*(p-b)*(p-c)/p);
        s1= PI*R*R-s;
        s3= PI*r*r;
        s2= s-s3;
        printf("%.4lf %.4lf %.4lf\n",s1,s2,s3);
    }
}
