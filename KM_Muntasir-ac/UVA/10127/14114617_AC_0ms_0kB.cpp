#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,cnt,d;
    while(scanf("%d",&n) != EOF)
    {
        d = 1;
        cnt = 1;
        while(d % n != 0)
        {
            d = ((d * 10) + 1) % n;
            ++cnt;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
