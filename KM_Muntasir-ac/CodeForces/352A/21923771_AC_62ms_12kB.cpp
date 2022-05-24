#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, c=0, f, i;
    cin>>n;
    long long a[n+2];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==5) c++;
    }
    if(n==c) {cout<<"-1"<<endl; return 0;}
    if(c>=9 && n-c>=1)
    {
        f=c/9;
        f=f*9;
        for(i=0;i<f;i++) cout<<"5";
        for(i=0;i<n-c;i++) cout<<"0";
        cout<<endl;
    }
    else
        cout<<"0"<<endl;
    return 0;
}
