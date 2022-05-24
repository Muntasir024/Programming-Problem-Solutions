#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,arr[55];

    arr[0]=1;
    arr[1]=1;
    for(i=2; i<51; i++)
    {
        arr[i]=arr[i-2]+arr[i-1];
    }
    while(scanf("%lld",&n) == 1 && n)
    {
        printf("%lld\n",arr[n]);
    }

    return 0;
}
