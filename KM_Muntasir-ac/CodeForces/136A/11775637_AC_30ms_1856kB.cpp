#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,arr[200],ar2[200];
    cin>>n;
    for(i=1;i<=n;i++) {
        cin>>arr[i];
    }
    for(i=1;i<=n;i++)
        ar2[arr[i]]=i;
    for(i=1;i<=n;i++)
        cout<<ar2[i]<<" ";
    cout<<endl;

    return 0;
}