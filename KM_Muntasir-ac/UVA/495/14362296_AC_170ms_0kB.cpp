#include<bits/stdc++.h>
using namespace std;

int i, j, n, c, l, v[5005][1205] = {0};
int main()
{
    v[0][0] = 0;
    v[1][0] = 1;
    for(i = 2; i <= 5000; i++)
    {
        c = 0;
        for(j = 0; j < 1200; j++)
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
        for(i = 1200;i > 0; i--)
        {
            if(v[n][i])
                break;
        }
        printf("The Fibonacci number for %d is ", n);
        for(j = i; j >=0; j--)
            printf("%d", v[n][j]);
        printf("\n");
    }
    return 0;
}
