#include<bits/stdc++.h>
using namespace std;

int main()
{
    //char c1,c2;
    int t, i, n, mx, s;
    scanf("%d", &t);
    while(t--)
    {
        mx = 0;
        scanf("%d", &n);
        map <int, int> m;
        while(n--)
        {
            scanf("%d", &i);
            m[i]++;
        }
        for(i=1; i<=10000; i++)
        {
            s=m[i]+m[i+1];
            mx=max(s,mx);
        }
        printf("%d\n", mx);
    }
    return 0;
}
