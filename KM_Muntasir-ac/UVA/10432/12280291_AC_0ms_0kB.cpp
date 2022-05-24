#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159265358979323846

int main()
{
    double r,n,s;
    while(scanf("%lf%lf",&r,&n) != EOF)
    {
        s = ((n*r*r)/2.0)*(sin(2*PI/n));
        printf("%.3f\n",s);
    }

    return 0;
}
