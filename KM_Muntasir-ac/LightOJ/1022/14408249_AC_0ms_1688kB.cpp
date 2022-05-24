#include<bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;

int main()
{
    int t,i;
    double r,s,c;
    cin>>t;
    for(i = 1; i <= t; i++)
    {
        scanf("%lf", &r);
        c = pi * r * r;
        s = 4 * r * r;

        printf("Case %d: %.2lf\n", i, s-c);
    }

    return 0;
}
