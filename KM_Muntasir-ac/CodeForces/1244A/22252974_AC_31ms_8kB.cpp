#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, k, s, t;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d %d %d %d", &a, &b, &c, &d, &k);
        if(a%c) a=(a/c)+1;
        else a=a/c;
        if(b%d) b=(b/d)+1;
        else b=b/d;
        if(a+b<=k) printf("%d %d\n", a, b);
        else printf("-1\n");
    }
    return 0;
}
