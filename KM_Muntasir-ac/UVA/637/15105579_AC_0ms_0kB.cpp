#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, l, h;
    while(scanf("%d", &n) && n)
    {
        printf("Printing order for %d pages:\n", n);
        if(n == 1)
            printf("Sheet 1, front: Blank, 1\n");
        else if(n % 4 == 0)
        {
            l = 1, h = n;
            for(i = 1; i <= n/4; i++)
            {
                printf("Sheet %d, front: %d, %d\n", i, h--, l++);
                printf("Sheet %d, back : %d, %d\n", i, l++, h--);
            }
        }
        else if(n % 4 == 2)
        {
            l = 3, h = n;
            printf("Sheet 1, front: Blank, 1\n");
            printf("Sheet 1, back : 2, Blank\n");
            n = (n / 4) + 1;
            for(i = 2; i <= n; i++)
            {
                printf("Sheet %d, front: %d, %d\n", i, h--, l++);
                printf("Sheet %d, back : %d, %d\n", i, l++, h--);
            }
        }
        else if(n % 4 == 3)
        {
            l = 3, h = n;
            printf("Sheet 1, front: Blank, 1\n");
            printf("Sheet 1, back : 2, %d\n", h--);
            n = (n / 4) + 1;
            for(i = 2; i <= n; i++)
            {
                printf("Sheet %d, front: %d, %d\n", i, h--, l++);
                printf("Sheet %d, back : %d, %d\n", i, l++, h--);
            }
        }
        else if(n % 4 == 1)
        {
            l = 4, h = n;
            printf("Sheet 1, front: Blank, 1\n");
            printf("Sheet 1, back : 2, Blank\n");
            printf("Sheet 2, front: Blank, 3\n");
            printf("Sheet 2, back : %d, %d\n", l++, h--);
            n = (n / 4) + 1;
            for(i = 3; i <= n; i++)
            {
                printf("Sheet %d, front: %d, %d\n", i, h--, l++);
                printf("Sheet %d, back : %d, %d\n", i, l++, h--);
            }
        }
    }
    return 0;
}
