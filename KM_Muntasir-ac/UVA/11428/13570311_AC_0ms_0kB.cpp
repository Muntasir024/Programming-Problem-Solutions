#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i,m,j,k,c,n,l,y;
    while(cin>>n,n)
    {
        for(i=1;i*i<=n;i++)
        {
            l=0;
            y=i*i*i;
            for(j=0;j<=i-1;j++)
            {
                m=j*j*j;
                m=y-m;
                if(m==n)
                {
                    l=1;
                    break;
                }
            }
            if(l)
                break;
        }
        if(l)
            cout<<i<<" "<<j<<endl;
        else
            cout<<"No solution"<<endl;
    }

    return 0;
}
