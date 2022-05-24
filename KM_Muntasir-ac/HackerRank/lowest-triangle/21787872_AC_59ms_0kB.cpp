#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long h, a, b;
    cin>>b>>a;
    if(a%b==0) cout<<(2*a)/b<<endl;
    else cout<<((2*a)/b)+1<<endl;
    return 0;
}
