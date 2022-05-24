#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,p,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>p;
        map <int,int> m;
        long long a[p+2],c=0,j;
        for(i=0;i<p;i++)
        {
            cin>>a[i];
        }
        for(i=1;i<=n;i++)
        {
            if(i%7==6 || i%7==0)
                m[i]=0;
            else
            {
                for(j=0;j<p;j++)
                {
                    if(i%a[j]==0)
                    {
                        m[i]=1;
                        break;
                    }
                }
            }
        }
        for(i=1;i<=n;i++)
        {
            if(m[i]==1)
            {
                ++c;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
