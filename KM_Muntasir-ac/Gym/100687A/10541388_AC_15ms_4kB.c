#include<stdio.h>

int main()
{
    char s[8];
    int i,raf=1;

    for(i=0;i<8;i++) {
        scanf("%c",&s[i]);
        if(s[i]=='?')
            raf=0;
    }
    if(raf)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
