#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,i,f[70],l;
    cin>>t;
    f[0]=0;
    f[1]=1;
    for(i=2;i<60;i++)
        f[i]=f[i-2]+f[i-1];
    while(t--)
    {
        cin>>n;
        l=0;
        for(i=0;i<60;i++)
        {
            if(f[i]==n)
            {
                l=1;
                break;
            }
        }
        if(l==1)
            cout<<"IsFibo"<<endl;
        else
            cout<<"IsNotFibo"<<endl;
    }
    return 0;
}

