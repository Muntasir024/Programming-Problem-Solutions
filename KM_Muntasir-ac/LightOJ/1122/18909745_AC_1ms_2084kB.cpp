#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, i, j, k, t, tc = 1;
    int a[12], b[13][12];
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &n, &m);
        int c = 0;
        memset(b, 0, sizeof(b));
        for(i=1;i<=n;i++) {scanf("%d", &a[i]);b[1][i] = 1;}

        for(i=2;i<=m;i++)
        {
            for(j=1;j<=n;j++)
            {
                for(k=1;k<=n;k++)
                {
                    if(abs(a[j]-a[k]) <=2)
                    {
                        b[i][j] += b[i-1][k];
                    }
                }
            }
        }
        for(i=1;i<=n;i++) c += b[m][i];
        printf("Case %d: %d\n", tc++, c);
    }
    return 0;
}

