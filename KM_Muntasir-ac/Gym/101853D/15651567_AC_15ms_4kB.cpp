#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, n, c;
    scanf("%d", &t);
    while(t--)
    {
        c = 0;
        scanf("%d", &n);
        while(n--)
        {
            scanf("%d", &i);
            if(i) ++c;
        }
        printf("%d\n", c);
    }
    return 0;
}
