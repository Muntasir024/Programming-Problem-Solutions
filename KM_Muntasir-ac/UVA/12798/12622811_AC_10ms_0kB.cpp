#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x,i,cnt,j,l,n,m;

    while(scanf("%lld %lld",&n,&m) != EOF)
    {
        cnt=0;
        for(i=0;i<n;i++)
        {
            l=1;
            for(j=0;j<m;j++)
            {
                cin>>x;
                if(x == 0)
                    l=0;
            }
            if(l==1)
                ++cnt;
        }
        cout<<cnt<<endl;
    }

    return 0;
}
