#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m, i,j;
    cin>>n>>m;
    int arr[m],ar1[m];
    for(i=0;i<m;i++)
        cin>>arr[i];
    sort(arr,arr+m);
    for(i=0,j=0;i<m-n+1;i++,j++) {
        ar1[j]=arr[i+n-1]-arr[i];
    }
    sort(ar1,ar1+(m-n+1));
    cout<<ar1[0]<<endl;

    return 0;
}
