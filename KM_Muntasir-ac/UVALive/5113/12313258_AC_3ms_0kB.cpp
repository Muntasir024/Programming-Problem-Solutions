#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a,d,i,s,t,sum;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>d;
        s=a;
        sum=a;
        for(i=1;i<n;i++)
        {
            s = s + d;
            sum = sum + s;
        }
        cout<<sum<<endl;
    }

    return 0;
}
