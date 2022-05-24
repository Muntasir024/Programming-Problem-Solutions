#include <stdio.h>
int main()
{
    int t,n,a[25],i,j,temp,sum;
    scanf("%d",&t);

    while(t--) {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);

        for(i=0;i<(n-1);i++) {
        for(j=0;j<(n-i-1);j++) {
            if(a[j]<a[j+1]) {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        }
        sum=0;
        for(i=0;i<(n-1);i++){
            sum=sum+(a[i]-a[i+1]);
        }
        printf("%d\n", (sum*2) );
    }

    return 0;
}
