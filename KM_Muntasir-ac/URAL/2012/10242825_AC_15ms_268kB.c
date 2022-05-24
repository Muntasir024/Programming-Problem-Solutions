#include <stdio.h>
int main()
{
    int f,n;
    scanf("%d",&f);

    n = (12-f) * 45;

    if(n<=240)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
