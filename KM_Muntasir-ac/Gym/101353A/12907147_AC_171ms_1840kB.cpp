#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,m,i,x,sum;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        sum=0;
        for(i=0;i<n;i++)
        {
            cin>>x;
            if(m<x)
            {
                if(x%m != 0)
                sum+= (m-(x%m));
                //cout<<(x%m)<<endl;
            }
            else
            {
                sum+= m-x;
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}
