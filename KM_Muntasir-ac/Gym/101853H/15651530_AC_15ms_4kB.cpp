#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, n;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        n = n / 6;
        n = sqrt(n);
        printf("%d\n",n);
    }
    return 0;
}
