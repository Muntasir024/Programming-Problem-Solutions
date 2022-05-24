#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a>=b)
            cout<<"FunkyMonkeys"<<endl;
        else
            cout<<"WeWillEatYou"<<endl;
    }
    return 0;
}