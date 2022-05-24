#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,h, cnt=0,i;
    cin>>n>>h;
    long long arr[n+5];
    for(i=0;i<n;i++) {
        cin>>arr[i];
        if(arr[i]<=h)
            cnt=cnt+1;
        else
            cnt=cnt+2;
    }
    cout<<cnt<<endl;


    return 0;
}
