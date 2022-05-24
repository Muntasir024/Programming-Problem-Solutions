#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, p,q, i,f=0, num,arr[100000]={0};
    cin>>n;
    cin>>p;
    for(i=1;i<=p; i++) {
        cin>>num;
        arr[num]=1;
    }
    cin>>q;
    for(i=1;i<=q;i++) {
        cin>>num;
        arr[num]=1;
    }
    for(i=1;i<=n;i++) {
        if(arr[i] != 1) {
            f=1;
            break;
        }
    }
    if(f==0)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;

    return 0;
}
