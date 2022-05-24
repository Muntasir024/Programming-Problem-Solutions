#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,t,i,x,s,c;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld", &n);

        if(n % 3 == 1)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
