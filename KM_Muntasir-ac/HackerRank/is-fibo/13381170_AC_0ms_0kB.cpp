#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long fib[70],n,x,i,t;
    map <int,int> m;
    fib[0]=0;
    fib[1]=1;
    m[0]=1;
    m[1]=1;
    for(i=2;i<=63;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
        m[fib[i]]=1;
    }
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(m[n]==1)
            cout<<"IsFibo"<<endl;
        else
            cout<<"IsNotFibo"<<endl;
    }


    return 0;
}
