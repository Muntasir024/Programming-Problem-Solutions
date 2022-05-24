#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, s, mx;
    while(scanf("%d",&n) && n)
    {
        s = mx = 0;
        while(n--)
        {
            scanf("%d",&x);
            s += x;
            if(s <= 0)
                s = 0;

            mx = max(mx, s);
        }
        if(s)
            printf("The maximum winning streak is %d.\n", mx);
        else
            printf("Losing streak.\n", mx);
    }
    return 0;
}
