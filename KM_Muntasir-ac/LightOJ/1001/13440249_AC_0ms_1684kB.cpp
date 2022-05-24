#include<bits/stdc++.h>
using namespace std;

int main()
{
    long t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n>10)
            cout<<n-10<<" "<<10<<endl;
        else
            cout<<"0 "<<n<<endl;
    }

    return 0;
}
