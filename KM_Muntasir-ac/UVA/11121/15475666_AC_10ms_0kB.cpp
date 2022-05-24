#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, t = 1, d, a[102], l, tc;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d",&n);
        if(n==0)
        {
            printf("Case #%d: 0\n", t++);
            continue;
        }
        l = 0;
        while(n)
        {
            d = n % (-2);
            a[l++] = abs(d);
            n = n / (-2);
            if(d == (-1))
                n++;
        }
        printf("Case #%d: ", t++);
        for(i = l - 1; i >= 0; i--)
            printf("%d", a[i]);
        printf("\n");
    }
    return 0;
}
