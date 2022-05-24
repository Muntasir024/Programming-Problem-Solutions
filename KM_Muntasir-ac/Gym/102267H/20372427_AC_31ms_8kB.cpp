#include <bits/stdc++.h>
#define PI 3.14159265
using namespace std;

int main()
{
    double n, a, res;
    cin>>n>>a;
    res = 2*sin(PI/n);
    res = a /res;
    printf("%.10lf\n", PI*res*res);
    return 0;
}
