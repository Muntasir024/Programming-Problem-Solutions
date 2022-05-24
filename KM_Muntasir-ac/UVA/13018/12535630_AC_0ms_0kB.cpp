#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,i,tmp,l=1;
    while(scanf("%lld %lld",&n,&m) != EOF)
    {
        if(l==0)
            cout<<endl;
        if(m<n)
        {
            tmp=n;n=m;m=tmp;
        }
        for(i=n+1;i<=m+1;i++)
        {
            cout<<i<<endl;
        }
        l=0;
    }

    return 0;
}
