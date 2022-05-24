#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,arr[4];
    cin>>t;
    while(t--) {
        cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
        sort(arr,arr+4);
        if(arr[0]==arr[1] && arr[1]==arr[2] && arr[2]==arr[3] && arr[0]==arr[3] && arr[1]==arr[3] && arr[0]==arr[2])
            cout<<"square"<<endl;
        else if((arr[0]==arr[2] && arr[1]==arr[3]) || (arr[0]==arr[1] && arr[2]==arr[3]) || (arr[0]==arr[3] && arr[1]==arr[2]))
            cout<<"rectangle"<<endl;
        else if(arr[3]>=(arr[0]+arr[1]+arr[2]))
            cout<<"banana"<<endl;
        else
            cout<<"quadrangle"<<endl;
    }

    return 0;
}
