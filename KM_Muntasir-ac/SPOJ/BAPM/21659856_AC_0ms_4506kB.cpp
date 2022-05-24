#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    for(int tc = 1; tc <= t; ++tc) {
        double a, b, x, y;
        scanf("%lf %lf %lf %lf", &x, &a, &y, &b);
        x = a*log(x);
        y = b*log(y);
        if(x==y) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
