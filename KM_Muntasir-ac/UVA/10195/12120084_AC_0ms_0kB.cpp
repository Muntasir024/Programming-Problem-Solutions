#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,s,r;
    while(scanf("%lf %lf %lf",&a,&b,&c) != EOF)
    {
        if(a==0.0 && b==0.0 && c==0.0)
            printf("The radius of the round table is: 0.000\n");
        else
        {
            s = (a+b+c)/2.0;
            r = sqrt((s-a)*(s-b)*(s-c)/s);
            printf("The radius of the round table is: %.3f\n",r);
        }
    }

    return 0;
}
