#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,x,sum=0,k;
    cin>>n>>x;
    for(i=0;i<n;i++)
    {
        cin>>k;
        sum += k;
    }
    if(sum<0)
        sum *= (-1);
    if(sum%x==0)
    cout<<(sum/x)<<endl;
    else
    cout<<(sum/x)+1<<endl;

    return 0;
}
