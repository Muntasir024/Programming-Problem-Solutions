#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,t,h1,h2,m1,m2,s1,s2;
    cin>>t;
    while(t--)
    {
        cin>>h1>>m1>>s1>>h2>>m2>>s2;
        a = (h1*3600)+(m1*60)+s1;
        b = (h2*3600)+(m2*60)+s2;
        if(a<b)
            cout<<"Player1"<<endl;
        else if(b<a)
            cout<<"Player2"<<endl;
        else
            cout<<"Tie"<<endl;
    }
    return 0;
}
