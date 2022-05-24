#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d%d", &a,&b);
        a=max(a,b);
        printf("%d\n",a*a);
    }
    return 0;
}
