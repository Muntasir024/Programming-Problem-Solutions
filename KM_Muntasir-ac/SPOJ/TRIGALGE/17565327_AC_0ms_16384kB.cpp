#include<bits/stdc++.h>
using namespace std;

#define PI acos(-1.0)

int main()
{
    int t;
    double x, l, h, m, a, b, c;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%lf %lf %lf", &a, &b, &c);
        l = 0.0, h = c;
        while(h - l >= 0.000000001)
        {
            m = (l+h) / 2.0;
            x = (a * m) + (b * sin(m));
            if(x == c)
            {
                break;
            }
            else if(x > c)
                h = m;
            else
                l = m;
        }
        printf("%.6lf\n", m);
    }
    //main();
}

