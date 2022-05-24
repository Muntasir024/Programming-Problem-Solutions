#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, x, y, i;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>i;
        x = abs(x-y) - i;
        if(x >= 0)
            cout<<x<<endl;
        else
            cout<<"0"<<endl;
    }

    return 0;
}
