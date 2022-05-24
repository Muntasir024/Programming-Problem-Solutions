#include<stdio.h>
#include<math.h>

int main()
{
    long long n;
    double arr[1000000];
    int t=1,u;
    while(scanf("%lld",&n) == 1) {
        arr[t]=sqrt(n);
        t++;
    }
    for(u=t-1;u>=1;u--)
        printf("%.4lf\n",arr[u]);

    return 0;
}

