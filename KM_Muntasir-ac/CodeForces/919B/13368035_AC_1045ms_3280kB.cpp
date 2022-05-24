#include<bits/stdc++.h>
using namespace std;

long long sum(long long x)
{
    long long d=0;
    while(x != 0)
    {
        d = d + (x%10);
        x = x / 10;
    }
    return d;
}

int main()
{
    long long n,i,j=0;

    cin>>n;
    for(i=9;;i++)
    {
        if(sum(i) == 10)
        {
            ++j;
            if(j==n)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}

