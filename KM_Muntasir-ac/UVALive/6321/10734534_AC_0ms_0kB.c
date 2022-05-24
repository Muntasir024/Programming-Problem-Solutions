#include <stdio.h>
int main()
{
    int T,x,y,z,i,sum;
    scanf("%d",&T);

    while(T--)
    {
        scanf("%d %d",&z,&x);
        sum =0;
        for(i=0; i<z; i++)
        {
            scanf("%d",&y);
            sum=sum+y/x;
        }
        printf("%d\n",sum);
    }
    return 0;
}
