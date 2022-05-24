#include <stdio.h>
int main()
{
    int n,i,s;
    scanf("%d",&n);

    if(n==1)
        printf("I hate it\n");
    else if(n==2)
        printf("I hate that I love it\n");
    else if(n>=3 && n<=100) {
            s=n/2;

        if(n%2!=0) {
            printf("I hate");
        for(i=1;i<=s;i++)
            printf(" that I love that I hate");
        }
        else {
            printf("I hate that I love");
            for(i=2;i<=s;i++)
            printf(" that I hate that I love");
        }
        printf(" it\n");
    }


    return 0;
}
