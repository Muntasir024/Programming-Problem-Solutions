#include<bits/stdc++.h>
using namespace std;

int isprime(int x)
{
    int i, v = sqrt(x);
    for(i=2; i<=v; i++)
    {
        if(x%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    int n, p, i, k, c, b, d, l;

    while(scanf("%d",&n) && n)
    {
        printf("%d:\n",n);

        if(n%2==1)
        {
            if(isprime(n-2))
            {
                printf("2+%d\n",n-2);
            }
            else
            {
                printf("NO WAY!\n");
            }
        }
        else
        {
            for(i=3; i<=n; i++)
            {
                if(isprime(i) && isprime(n-i))
                {
                    printf("%d+%d\n",i,n-i);
                    break;
                }
            }
        }
    }
    return 0;
}
