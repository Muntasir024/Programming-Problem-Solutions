#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    while(scanf("%d",&n) == 1 && n) {
        int arr[n+5];
        arr[0]=0;
        arr[1]=1;
        for(i=2;i<=n;i++) {
            if(i%2==0)
                arr[i]=arr[i/2];
            else
                arr[i]=arr[i/2]+arr[(i/2)+1];
        }
        sort(arr,arr+n+1);
        printf("%d\n",arr[n]);
    }
    return 0;
}