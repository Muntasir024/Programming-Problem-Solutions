#include <bits/stdc++.h>
using namespace std;

int x, y, x1, d;

int gcd(int a, int b)
{
    if (a == 0)
    {
        x = 0;
        y = 1;
        return b;
    }
    d = gcd(b % a, a);
    x1 = x;
    x = y - (b / a) * x1;
    y = x1;
    return d;
}

int main()
{
    int a, b;
    while(scanf("%d%d", &a,&b) != EOF)
    {
        printf("%d %d %d\n", y, x, gcd(b, a));
    }
}
