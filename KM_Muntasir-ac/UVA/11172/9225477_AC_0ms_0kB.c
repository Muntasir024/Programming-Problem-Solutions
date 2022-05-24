#include <stdio.h>
int main()
{
    int T;
    long a,b;
    scanf("%d", &T);

    while(T-- ) {
        scanf("%ld %ld", &a,&b);

        if(a<b)
            printf("<\n");
        else if(a>b)
            printf(">\n");
        else
            printf("=\n");
    }
    return 0;
}
