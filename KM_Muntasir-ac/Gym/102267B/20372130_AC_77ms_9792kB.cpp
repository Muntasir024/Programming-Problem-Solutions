#include <bits/stdc++.h>
using namespace std;
bool prime[10000005];

int main()
{
    int n,i,j;

    scanf("%d", &n);
    prime[0]=1;
    prime[1]=1;
    for(i=2;i*i<=n;i++)
        if(prime[i]==0) {
            for(j=i+i;j<=n;j=j+i)
                prime[j]=1;
    }

    for(i=2;i*i<=n;i++)
    {
        if(prime[n-i]==0 && prime[i]==0)
        {
            printf("%d %d\n", i, n-i);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}
