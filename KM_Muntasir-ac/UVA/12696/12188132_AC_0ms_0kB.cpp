#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,cnt=0;
    double a,b,c,d,s;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        s = a+b+c;
        if((a<=56 && b<=45 && c<=25 && d<=7) || (s<=125 && d<=7))
        {
            cout<<"1"<<endl;
            ++cnt;
        }
        else
            cout<<"0"<<endl;
    }
    cout<<cnt<<endl;
    return 0;
}
