#include <stdio.h>

int GCD(int n1, int n2)
{
    if (n2 != 0)
       return GCD(n2, n1%n2);
    else
       return n1;
}

int main()
{
    int i,j, g,n;
    while(1) {
        scanf("%d", &n);
        if(n==0)
            return 0;
        else {
            g=0;
            for(i=1;i<n;i++)
                for(j=i+1;j<=n;j++)
                    g=g+ GCD(i,j);

            printf("%d\n",g);
        }
    }
    return 0;
}

