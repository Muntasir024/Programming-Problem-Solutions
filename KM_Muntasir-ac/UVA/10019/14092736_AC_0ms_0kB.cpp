#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m,c,d,x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        m=n;
        c=d=0;
        while(m)
        {
            c+=(m%2);
            m/=2;
        }
        m=n;
        while(m)
        {
            x=(m%10);
            m/=10;
            if(x==1 || x==2 || x==4 || x==8) d++;
            else if(x==3 || x==5 || x==6 || x==9) d+=2;
            else if(x==7) d+=3;
        }
        printf("%d %d\n",c,d);
    }
    return 0;
}
