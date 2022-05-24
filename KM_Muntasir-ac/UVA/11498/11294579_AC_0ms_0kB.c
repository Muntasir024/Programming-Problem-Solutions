#include<stdio.h>
int main()
{
    int tc,n,m,i;

    while(scanf("%d",&tc) ==1 && tc) {
        scanf("%d %d",&n,&m);
        int ar1[tc],ar2[tc];
        for(i=1;i<=tc;i++)
            scanf("%d %d",&ar1[i],&ar2[i]);
        for(i=1;i<=tc;i++) {
            if(ar1[i]==n || ar2[i]==m)
                printf("divisa\n");
            else if(ar1[i]>n && ar2[i]>m)
                printf("NE\n");
            else if(ar1[i]<n && ar2[i]>m)
                printf("NO\n");
            else if(ar1[i]<n && ar2[i]<m)
                printf("SO\n");
            else if(ar1[i]>n && ar2[i]<m)
                printf("SE\n");
        }
    }


    return 0;
}
