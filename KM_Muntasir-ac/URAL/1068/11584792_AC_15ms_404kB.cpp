#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n,i,sum=0;
    scanf("%ld",&n);
    if(n>0)
    for(i=1;i<=n;i++)
        sum=sum+i;
    else
        for(i=1;i>=n;i--)
        sum=sum+i;
    printf("%ld",sum);


    return 0;
}

