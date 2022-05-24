#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t, k, p , n;
    cin>>t;
    while(t--)
    {
        cin>>k>>p>>n;
        n = (k-p)*n;
        if(n<0) n=0;
        cout<<n<<endl;
    }
}

