#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, mx = -128, i, j, k, sum;
    scanf("%d", &n);
    int a[n+2][n+2];
    a[1][0] = 0;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            scanf("%d", &a[i][j]);
            a[i][j]+=a[i][j-1];
        }
    }
    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j++)
        {
            for(k=1,sum=0; k<=n; k++)
            {
                sum += a[k][j] -  a[k][i-1];
                if(sum > mx)
                    mx = sum;
                if(sum < 0)
                    sum = 0;
            }
        }
    }
    printf("%d\n", mx);
    return 0;
}
