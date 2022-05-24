#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    double a, b, d;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%lf%lf%lf", &a, &b, &d);
        printf("%lf\n", (d * d) / 2.0);
    }
    return 0;
}
