#include<bits/stdc++.h>
#define PI acos(-1)
using namespace std;

int main()
{
    int n, i;
    double r, s = 0;
    scanf("%d%lf",&n,&r);
    double a[n+2],b[n+2];
    scanf("%lf%lf",&a[0],&b[0]);

    for(i = 1; i < n; i++)
    {
        scanf("%lf%lf",&a[i],&b[i]);
        s += sqrt((a[i]-a[i-1])*(a[i]-a[i-1])+(b[i]-b[i-1])*(b[i]-b[i-1]));
    }
    s += sqrt((a[0]-a[n-1])*(a[0]-a[n-1])+(b[0]-b[n-1])*(b[0]-b[n-1]));
    s += (2*PI*r);
    printf("%.2lf\n", s);
    return 0;
}
