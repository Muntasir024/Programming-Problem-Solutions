#include<stdio.h>
int main()
{
    unsigned x,n;
    scanf("%d",&x);
    if(x>0 && x<6)
        printf("1\n");
    else if(x%5==0)
        printf("%d\n",x/5);
    else
        printf("%d\n",(x/5)+1);

    return 0;
}
