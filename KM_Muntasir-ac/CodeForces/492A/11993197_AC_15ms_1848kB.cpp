#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,sum=0,s=0,m=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        sum=sum+i;
        s =s+sum;
        if(s>n)
        {
            break;
        }
        m++;
    }

    cout<<m<<endl;

    return 0;
}
