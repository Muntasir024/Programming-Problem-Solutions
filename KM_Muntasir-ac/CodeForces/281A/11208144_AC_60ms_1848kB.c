#include<stdio.h>
int main()
{
    int a;
    char str[1000];
    scanf("%s",&str);
    a=str[0];
    if(a>= 97 && a<=122)
        a=a-32;
    str[0]=a;
    printf("%s",str);
    return 0;
}
