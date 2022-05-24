#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    long long n,i,a=0,b=0;
    cin>>n;
    cin>>st;
    for(i=0; i<n; i++)
    {
        if(st[i]=='1')
            a++;
        else if(st[i]=='0')
            b++;
    }
    if(a>=b)
        cout<<n-(2*b)<<endl;
    else
        cout<<n-(2*a)<<endl;

    return 0;
}
