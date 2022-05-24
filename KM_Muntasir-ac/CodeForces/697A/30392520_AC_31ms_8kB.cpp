#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ll t, n, q;
    cin>>t>>n>>q;
    if(q==0 && t==0)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    if(q<t) {cout<<"NO"<<endl;return 0;}
    if(q==(t+1)) {cout<<"NO"<<endl;return 0;}
    if((n-t)>=q)
    {
        //cout<<"ANS "<<(n-t)%q<<endl;
        if((n-t)%q==0 or (n-t)%q==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else if((q-t)>=n)
    {
        if((q-t)%n==0 or (q-t)%n==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else cout<<"NO"<<endl;
    //main();
    return 0;
}
