#include<stdio.h>
int main()
{
    int t,a,b,c,s;
    scanf("%d",&t);
    while(t--) {
            scanf("%d %d %d",&a,&b,&c);
        if (a>=b && a>=c) {
            s=b+c;
            if(s>a)
                printf("OK\n");
            else
                printf("Wrong!!\n");
        }
        else if (b>=a && b>=c) {
            s=a+c;
            if(s>b)
                printf("OK\n");
            else
                printf("Wrong!!\n");
        }
        else if (c>=b && c>=a) {
            s=b+a;
            if(s>c)
                printf("OK\n");
            else
                printf("Wrong!!\n");
        }
        else if (a==b && b==c) {
            printf("OK\n");
        }
    }

return 0;
}
