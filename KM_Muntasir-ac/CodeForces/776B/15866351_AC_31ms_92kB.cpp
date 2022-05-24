#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, p;

    scanf("%d", &n);

    bool prime[n+20];
    memset(prime, true, sizeof(prime));

    for (p=2; p*p<=n+10; p++)
    {
        if (prime[p] == true)
        {
            for (i=p+p; i<=n+10; i += p)
                prime[i] = false;
        }
    }


    if(n<=2)
    {
        printf("1\n1");
        if(n==1) printf("\n");
        else printf(" 1\n");
    }
    else
    {
        printf("2\n1");
        ++n;
        for(i=3; i<=n; i++)
        {
            if(prime[i])
                printf(" 1");
            else
                printf(" 2");
        }
        printf("\n");
    }


    //main();
}
