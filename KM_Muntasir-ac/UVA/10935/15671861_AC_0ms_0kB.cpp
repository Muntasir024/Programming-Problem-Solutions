#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, h, t, f, a[100];

    while(scanf("%d", &n) && n)
    {
        for(i = 0; i <= n; i++)
            a[i] = i;
        h = 1, t = n, f = 1;
        printf("Discarded cards:");
        while(h < t)
        {
            if(!f)
                printf(",");
            printf(" %d",a[h++]);
            a[++t] = a[h++];
            f = 0;
        }
        printf("\nRemaining card: %d\n", a[h]);
    }
    return 0;
}
