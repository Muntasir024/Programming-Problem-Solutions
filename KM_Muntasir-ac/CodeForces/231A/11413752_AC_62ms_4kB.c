# include<stdio.h>

int main()
{
    int n,a,b,c, cnt=0,i;
    scanf("%d",&n);
    int sum[n+5];
    for(i=0;i<n;i++) {
        scanf("%d %d %d",&a,&b,&c);
        sum[i]=a+b+c;
        if(sum[i]>=2)
            cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}
