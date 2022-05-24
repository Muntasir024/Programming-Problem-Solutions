#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long d,k,i,j,n;
    map <int , int> m;
    for(i=1;i<=1000005;i++)
    {
        n=i;
        d=0;
        while(n != 0)
        {
            d = d + n%10;
            n/=10;
        }
        if((d+i) <= 1000000)
            m[d+i]=1;
    }
    for(i=1;i<=1000000;i++)
    {
        if(m[i]==0)
            cout<<i<<endl;
    }

    return 0;
}
