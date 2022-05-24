#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, p;

    bool prime[100007];
    memset(prime, true, sizeof(prime));

    for (p=2; p*p<=100007; p++)
    {
        if (prime[p] == true)
        {
            for (i=p+p; i<=100007; i += p)
                prime[i] = false;
        }
    }

    scanf("%d", &n);
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
