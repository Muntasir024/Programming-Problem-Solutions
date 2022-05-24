#include<bits/stdc++.h>
#define mx 1000005
using namespace std;
bool prime[mx];
int ans[mx] = {0};

int mul(int n)
{
    int d = 0;
    while(n)
    {
        d = d + (n % 10);
        n = n / 10;
    }
    return d;
}

int main()
{
    int t, i, j, p, c, a, b, d, n;
    prime[0] = 1;
    prime[1] = 1;
    for(i = 2; i <= 1000002; i++)
    {
        if(prime[i] == 0)
        {
            d = mul(i);
            if(prime[d] == 0)
                ans[i] = 1;
            for(j = i + i; j <= 1000002; j = j + i)
            {
                prime[j] = 1;
            }
        }
    }

    for(i = 1; i <= 1000002; i++)
        ans[i] = ans[i] + ans[i-1];

    scanf("%d", &t);
    while(t--)
    {
        scanf("%d%d", &a, &b);
        //cout<<ans[b]<<"---"<<ans[a]<<endl;
        printf("%d\n", ans[b]-ans[a-1]);
    }

    return 0;
}
