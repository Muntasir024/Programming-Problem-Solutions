#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin>>n>>k;
    if(n==0) cout<<"Austin"<<endl;
    else if(k==1)
    {
        if(n%2) cout<<"Adrien"<<endl;
        else cout<<"Austin"<<endl;
    }
    else cout<<"Adrien"<<endl;

    return 0;
}
