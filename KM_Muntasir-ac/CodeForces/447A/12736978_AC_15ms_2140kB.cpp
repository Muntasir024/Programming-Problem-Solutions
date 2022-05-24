#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p,l=1,x,n,rem,i;
    map <int , int> mp;
    cin>>p>>n;
    int a[n+5];
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=n;i++)
    {
        rem=a[i]%p;
        if(mp[rem]>0)
        {
           cout<<i<<endl;
           l=0;
           break;
        }
        mp[rem]++;
    }
    if(l==1)
        cout<<"-1"<<endl;

    return 0;
}
