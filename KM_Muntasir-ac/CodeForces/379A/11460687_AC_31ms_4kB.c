#include<stdio.h>
int main()
{
    int a,b, s;
    scanf("%d %d",&a,&b);
    s=a;
    while(a>=b) {
        s=s+(a/b);
        a=(a/b)+(a%b);
    }
    printf("%d\n",s);

    return 0;
}
