#include<iostream>
using namespace std;

int main()
{
    int n,k,i;
    cin>>n>>k;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];

    int cnt=0;
    for(i=0;i<n;i++)
        if(arr[k-1]<=arr[i] && arr[i]>0)
            cnt++;
    cout<<cnt<<endl;

    return 0;
}