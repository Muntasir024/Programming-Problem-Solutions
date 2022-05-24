# include<stdio.h>
# include<string.h>
int main(void)
{
    char str[105];
    int len,i,j,ct=0,dt=0;
    scanf("%s",str);
    len=strlen(str);
    for(i=0;i<len;i++) {
        if(str[i]>=65 && str[i]<=90)
            ct++;
        else if(str[i]>=97 && str[i]<=122)
            dt++;
    }
    if(ct>dt)
        printf("%s\n",strupr(str));
    else
        printf("%s\n",strlwr(str));

    return 0;
}
