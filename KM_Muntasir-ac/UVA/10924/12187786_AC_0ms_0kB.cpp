#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[25];
    int i,j,sum,bit;

    while(scanf("%s",s) != EOF)
    {
        j=strlen(s);
        bit=1;
        sum=0;
        for(i=0; i<j; i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                sum=sum+(s[i]-38);
            }
            else if(s[i]>=97 && s[i]<=122)
            {
                sum=sum+(s[i]-96);
            }
        }

        for(i=2; i<sum; i++)
        {
            if(sum%i==0)
            {
                bit=0;
                break;
            }
        }
        if(bit==1)
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }

    return 0;
}
