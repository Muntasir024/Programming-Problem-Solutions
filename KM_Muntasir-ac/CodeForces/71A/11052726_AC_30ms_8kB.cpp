#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned i,len,cnt,n,m;
    scanf("%d",&n);
    char str[101];
    while(n--)
    {
        cnt=0;
        cin>>str;
        m=strlen(str);
        if(m<11) puts(str);
        else
        {
            for(i=0; str[i]; i++)
            {
                if(str[i]>='a' && str[i]<='z')
                    cnt++;
            }
            printf("%c%d%c\n",str[0],cnt-2,str[m-1]);
        }
    }


    return 0;
}
