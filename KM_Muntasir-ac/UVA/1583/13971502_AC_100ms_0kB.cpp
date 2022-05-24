#include<bits/stdc++.h>
using namespace std;

int fac(int n)
{
    int d=n;
    while(n)
    {
        d = d + (n%10);
        n = n / 10;
    }
    return d;
}

int main()
{
    int t,l,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        l=0;
        for(i=n-1;i>=n-50;i--)
        {
            if(n == fac(i))
            {
                l=i;
            }
        }
        cout<<l<<endl;
    }

    return 0;
}
