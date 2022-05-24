#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,i;
    string s,p,k;
    cin>>s;
    cin>>k;
    p=s;
    reverse(p.begin(),p.end());
    if(k==p)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
