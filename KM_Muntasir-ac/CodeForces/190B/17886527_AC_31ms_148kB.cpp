#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x1,x2,y1,y2,r1,r2,r;
    cin >> x1 >> y1 >> r1;
    cin >> x2 >> y2 >> r2;
    r = sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
    if(r >= r1+r2)
        r = (r - r1 - r2) * 0.5;
    else
    {
        if(r2>r1)
            r = (r2 - r1 - r) * 0.5;
        else
            r = (r1 - r2 - r) * 0.5;
    }
    if(r < 0)
        r = 0;
    printf("%.15lf\n", r);
    return 0;
}
