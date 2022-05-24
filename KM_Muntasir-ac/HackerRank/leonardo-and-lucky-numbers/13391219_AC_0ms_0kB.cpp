#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,i;
    map<long long, long long> m;
    m[1]=1;
    m[2]=1;
    m[3]=1;
    m[5]=1;
    m[6]=1;
    m[9]=1;
    m[10]=1;
    m[13]=1;
    m[17]=1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(m[n]==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

    return 0;
}
