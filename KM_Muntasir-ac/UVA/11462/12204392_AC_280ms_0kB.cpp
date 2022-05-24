#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,i,temp;
    while(scanf("%ld",&n) == 1 && n)
    {
        long arr[n];
        for(i=0; i<n; i++)
            scanf("%ld",&arr[i]);
        sort(arr,arr+n);
        for(i=0; i<n; i++)
        {
            if(i==(n-1))
                printf("%d\n",arr[i]);
            else
                printf("%ld ",arr[i]);
        }
    }
        return 0;
    }
