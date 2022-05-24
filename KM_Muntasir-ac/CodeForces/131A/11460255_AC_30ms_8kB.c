#include<stdio.h>
#include<string.h>
int main()
{
    char str[105];
    int len,i,cnt=0;
    scanf("%s",str);
    len=strlen(str);

    for(i=1;i<len;i++) {
        if (str[i]>=65 && str[i]<=90)
            cnt++;
    }
    if(cnt==(len-1)) {
        for(i=0;i<len;i++) {
            if (str[i]>=65 && str[i]<=90)
                printf("%c",str[i]+32);
            else if (str[i]>=97 && str[i]<=122)
                printf("%c",str[i]-32);
        }
        printf("\n");
    }
    else
        printf("%s\n",str);

    return 0;
}
