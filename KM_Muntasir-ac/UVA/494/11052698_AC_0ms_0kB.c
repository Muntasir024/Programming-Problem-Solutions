#include<stdio.h>
int main()
{
    char s[10000];
    int i,cnt,flag;
    while(gets(s))
    {
        cnt=0;flag=1;
        for(i=0; s[i]; i++)
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) {
                if(flag)
                cnt++;
                flag=0;
            }
            else {
                flag=1;
            }
        }

        printf("%d\n",cnt);
    }
    return 0;
}
