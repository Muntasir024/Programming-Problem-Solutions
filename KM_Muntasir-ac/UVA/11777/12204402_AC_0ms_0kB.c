#include<stdio.h>
int main()
{
    int T,i, t1,t2,f,a,ct1,ct2,ct3, avg,sum;
    scanf("%d",&T);
    for(i=1;i<=T;i++) {
        scanf("%d %d %d %d %d %d %d",&t1,&t2,&f,&a,&ct1,&ct2,&ct3);
        if(ct2>=ct1 && ct1<=ct3)
            avg=(ct2+ct3)/2;
        else if(ct2>=ct3 && ct3<=ct1)
            avg=(ct2+ct1)/2;
        else if(ct1>=ct2 && ct2<=ct3)
            avg=(ct1+ct3)/2;

        sum=t1+t2+f+a+avg;

        if(sum<=100 && sum>=90)
            printf("Case %d: A\n",i);
        else if(sum<90 && sum>=80)
            printf("Case %d: B\n",i);
        else if(sum<80 && sum>=70)
            printf("Case %d: C\n",i);
        else if(sum<70 && sum>=60)
            printf("Case %d: D\n",i);
        else
            printf("Case %d: F\n",i);
    }

    return 0;
}
