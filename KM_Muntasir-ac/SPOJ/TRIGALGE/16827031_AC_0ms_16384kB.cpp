#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, i;
    double a, b, c, l, r, x, mid;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%lf %lf %lf", &a, &b, &c);
        l = 0, r = c;
        while(r-l > 0.000000001)
        {
            mid = (l+r)/2;
            x = (a*mid) + (b*sin(mid));
            if(x == c)
            {
                break;
            }
            else if(x > c)
                r = mid;
            else
                l = mid;
        }
        printf("%.6lf\n", mid);
    }
    //main();
    return 0;
}
