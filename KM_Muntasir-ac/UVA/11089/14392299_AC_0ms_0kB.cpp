#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i, fibo[50];
    fibo[0] = 0;
    fibo[1] = 1;
    for(i = 2; i<= 45; i++)
        fibo[i] = fibo[i-1] + fibo[i-2];

    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        i = 45;
        while(fibo[i] > n) i--;
        while(i > 1)
        {
            if(n >= fibo[i])
            {
                n = n - fibo[i];
                printf("1");
            }
            else
                printf("0");
            --i;
        }
        printf("\n");
    }

    return 0;
}
