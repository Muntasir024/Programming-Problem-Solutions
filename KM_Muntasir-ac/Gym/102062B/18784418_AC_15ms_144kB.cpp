#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, tc = 1;
    double m,d, r,s, pi;
    cin >> t;
    while(t--)
    {
        cin >> m >> d;
        pi = 3.14159265359;
        m=m*1.0/d;
        s = pow(3*m/(4*pi),(1.0/3));
        r = 4*pi*s*s;
        printf("Case %lld: %.4lf\n", tc++, r);
    }
    return 0;
}

