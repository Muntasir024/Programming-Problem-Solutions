#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc,i,n;
    cin>>tc;
    for(i=1;i<=tc;i++)
    {
        cin>>n;
        cout<<"Case "<<i<<":"<<endl;
        cout<<"-"<<((n*5*45)/100)<<" "<<((n*3)/2)<<endl;
        cout<<((n*5*55)/100)<<" "<<((n*3)/2)<<endl;
        cout<<((n*5*55)/100)<<" -"<<((n*3)/2)<<endl;
        cout<<"-"<<((n*5*45)/100)<<" -"<<((n*3)/2)<<endl;
    }

    return 0;
}
