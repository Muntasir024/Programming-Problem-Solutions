#include<bits/stdc++.h>
using namespace std;

int n, i, j, c, l, v[400][800] = {0};
int main()
{
    v[1][0] = 1;
    for(i = 2; i < 370; i++)
    {
        c = 0;
        for(j = 0; j < 790; j++)
        {
            v[i][j] = v[i-1][j] * i;
            v[i][j] += c;
            c = v[i][j] / 10;
            if(v[i][j] > 9)
            {
                v[i][j] = v[i][j] % 10;
            }
        }
    }

    while(scanf("%d", &n) == 1 && n)
    {
        map <int, int> m;
        for(i = 790; i >= 0; i--)
            if(v[n][i])
                break;
        for(j = i; j >= 0; j--)
            m[v[n][j]]++;
        printf("%d! --\n", n);
        for(i = 0; i <= 4; i++)
        {
            printf("    (%d)    %d", i, m[i]);
        }
        printf("\n");
        for(i = 5; i <= 9; i++)
        {
            printf("    (%d)    %d", i, m[i]);
        }
        printf("\n");
    }
    return 0;
}
