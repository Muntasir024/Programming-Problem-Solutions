#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long s,d,i,sum;
    while(scanf("%lld %lld",&s,&d) != EOF)
    {
        sum=0;
        for(i=s;i<=d;i++)
        {
            sum = sum + i ;
            if(sum>=d)
                break;
        }
        cout<<i<<endl;
    }
    return 0;
}
