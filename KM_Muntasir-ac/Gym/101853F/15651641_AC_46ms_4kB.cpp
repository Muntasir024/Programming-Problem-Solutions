#include<bits/stdc++.h>
using namespace std;

int main()
{
    char c1,c2;
    int t, i, n, c, h,m,h1,m1,t1,t2,m2;
    scanf("%d", &t);
    while(t--)
    {
        c = 0;
        scanf("%d%d", &n,&m);
        while(n--)
        {
            scanf("%d%c%d%d%c%d", &h,&c1,&m1,&h1,&c2,&m2);
            t1=(h*60)+m1;
            t2=(h1*60)+m2;
            c+= (t2-t1);
        }
        if(c >= (m*60))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
