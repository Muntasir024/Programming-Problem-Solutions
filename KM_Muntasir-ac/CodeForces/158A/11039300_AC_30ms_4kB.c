#include<stdio.h>
int main()
{
    int n,k,i,cnt=0;
    scanf("%d %d",&n,&k);
    int arr[n+5];

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        }
    for(i=0;i<n;i++) {
        if(arr[i]>=arr[k-1] && arr[i]>0)
            cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}
