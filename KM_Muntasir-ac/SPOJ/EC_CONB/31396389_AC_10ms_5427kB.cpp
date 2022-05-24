#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &x);
        if(x%2)
        {
            printf("%d\n", x);
        }
        else
        {
            int ans=0;
            while (x)
            {
                ans = ans * 2;
                ans = ans + (x & 1);
                x = x / 2;
            }
            printf("%d\n", ans);
        }
    }
}
