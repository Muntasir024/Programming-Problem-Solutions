#include <stdio.h>
#include <string.h>

int main()
{
    char ch[105];
    int index,i,upper=0,lower=0;

    gets(ch);


    i = 0;
    while (ch[i] != '\0')
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z')
            upper++;
        if (ch[i] >= 'a' && ch[i] <= 'z')
            lower++;
        i++;
    }

    if(upper<=lower)
        printf("%s\n",strlwr(ch));
    else
        printf("%s\n",strupr(ch));

    return 0;
}
