#include<bits/stdc++.h>
using namespace std;

int i, j, n, c, l, v[1005][305] = {0};
int main()
{
    v[0][0] = 1;
    v[1][0] = 2;
    for(i = 2; i <= 1000; i++)
    {
        c = 0;
        for(j = 0; j < 300; j++)
        {
            v[i][j] = v[i-1][j] + v[i-2][j] + c;
            c = v[i][j] / 10;
            if(v[i][j] > 9)
            {
                v[i][j] = v[i][j] % 10;
            }
        }
    }
    while(scanf("%d", &n) != EOF)
    {
        for(i = 300;i > 0; i--)
        {
            if(v[n][i])
                break;
        }
        for(j = i; j >=0; j--)
            printf("%d", v[n][j]);
        printf("\n");
    }
    return 0;
}