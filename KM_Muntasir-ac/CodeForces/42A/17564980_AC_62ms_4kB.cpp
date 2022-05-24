#include<bits/stdc++.h>
using namespace std;

int main()
{
    double l = 0.0,m,h = 10007, x, y, v, s, a[107], b[107];
    int i, n;
    scanf("%d %lf", &n, &v);
    for(i=0; i<n; i++)
        scanf("%lf", &a[i]);
    for(i=0; i<n; i++)
    {
        scanf("%lf", &b[i]);
        x = b[i]/a[i];
        if(x < h)
            h = x;
    }

    s = 0.0;
    for(i=0;i<n;i++)
        s += a[i]*h;
    if(s<v)
    printf("%lf\n", s);
    else
    printf("%lf\n", v);
    //main();
}
