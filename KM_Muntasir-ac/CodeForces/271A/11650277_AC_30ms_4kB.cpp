#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n,i,m,arr[4],j;
    cin>>n;
    for(i=n+1; i<=9021; i++)
    {
        arr[0]=i/1000;
        arr[1]=(i/100)-(arr[0]*10);
        arr[2]=(i/10)%10;
        arr[3]=i%10;
        if(arr[0] != arr[1] && arr[0] != arr[2] && arr[0] != arr[3] && arr[1] != arr[0] && arr[1] != arr[2] && arr[1] != arr[3] && arr[2] != arr[0] && arr[2] != arr[1] && arr[2] != arr[3] && arr[3] != arr[0] && arr[3] != arr[1] && arr[3] != arr[2] )
            break;
    }
    cout<<i<<endl;

    return 0;
}
