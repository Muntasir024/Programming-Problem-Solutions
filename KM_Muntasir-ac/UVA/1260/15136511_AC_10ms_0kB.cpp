#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i, j;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        int a[n+2], c = 0;
        for(i=0;i<n;i++)
        {
            scanf("%d", &a[i]);
            if(i)
            {
                for(j=0;j<i;j++)
                {
                    if(a[j] <= a[i])
                        ++c;
                }
            }
        }
        printf("%d\n", c);
    }
    return 0;
}
