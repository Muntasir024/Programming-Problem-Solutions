#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    a=max(3*a/10, a-a*c/250);
    b=max(3*b/10, b-b*d/250);
    if(a==b) cout<<"Tie"<<endl;
    else if(a>b) cout<<"Misha"<<endl;
    else cout<<"Vasya"<<endl;
    return 0;
}
