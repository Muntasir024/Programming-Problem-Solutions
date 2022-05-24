#include <stdio.h>

int pri(int n) {
    int i,cnt=0;
    for(i=2; i<n/2; i++)
        {
            if(n%i==0)
            {
                cnt = 1;
                break;
            }
        }
        return cnt;
        }

int main()
{
    int n,i,rem,j,cnt;
    while(scanf("%d",&n) != EOF)
    {
        cnt=pri(n);
        j=n;
        if(n<=1)
            printf("%d is not prime.\n",n);

        else if (cnt==0)
        {
            rem=0;
            while(n)
            {
                rem=(rem*10)+(n%10);
                n=n/10;
            }
            cnt=pri(rem);
            if(cnt==0 && rem==j)
                printf("%d is prime.\n",j);


            else if (cnt==0)
                printf("%d is emirp.\n",j);

            else
                printf("%d is prime.\n",j);
        }
        else
            printf("%d is not prime.\n",j);
    }

    return 0;
}
