#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000005];
    long long i,j,tc=1,n,temp;
    while(scanf("%s",s) != EOF)
    {
        scanf("%lld",&n);
        printf("Case %lld:\n",tc++);
        long long x,y,mx,mn;
        while(n--)
        {
            mx=0;
            mn=0;
            scanf("%lld %lld",&x,&y);
            if(x>y)
            {
                temp=x;x=y;y=temp;
            }
            for(i=0; i<strlen(s); i++)
            {
                if(i>=x && i<=y && s[i]=='1')
                {
                    ++mx;
                }
                else if(i>=x && i<=y && s[i]=='0')
                {
                    ++mn;
                }
            }
            if(mx == y+1-x || mn == y+1-x)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }

    return 0;
}
