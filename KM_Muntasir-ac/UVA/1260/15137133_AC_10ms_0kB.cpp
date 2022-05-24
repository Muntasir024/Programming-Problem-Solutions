#include<bits/stdc++.h>
using namespace std;

int a[1050];
int main()
{
    int t, n, i, j, c;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        c = 0;
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
