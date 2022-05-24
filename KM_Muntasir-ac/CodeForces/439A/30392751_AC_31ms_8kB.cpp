#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ll n, k, i, c=0, x;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>x;
        c+=x;
    }
    if((c+(n-1)*10)<=k) cout<<(k-c)/5<<endl;
    else cout<<"-1"<<endl;
    //main();
    return 0;
}
