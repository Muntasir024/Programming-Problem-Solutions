#include<stdio.h>

int main()
{
    int a,b,s;

    while(scanf("%d%d", &a,&b)==2) {
        if(0<=a && 0<=b && a<=10 && b<=10) {
                s=a+b;
            printf("%d\n",s);
        }
        else
            continue;
    }
    return 0;
}
