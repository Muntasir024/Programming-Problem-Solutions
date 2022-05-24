#include<stdio.h>
int main ()
{
    char a[5];
    int n,i,cnt=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%s",a);
        if(a[1]=='+')
            cnt=cnt+1;
        else
            cnt=cnt-1;
    }
 
    printf("%d\n",cnt);
 
    return 0;
}