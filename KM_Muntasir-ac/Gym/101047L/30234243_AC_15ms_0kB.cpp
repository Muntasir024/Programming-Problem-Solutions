#include<bits/stdc++.h>
using namespace std;

long long pwr(long long a, long long b)
{
    long long ans=1;
    for(int i=0;i<b;i++)
    {
        ans *= a;
    }
    return ans;
}

int main()
{
    long long t, c, d, e, f;
    cin>>t;
    while(t--)
    {
        cin>>c>>d;
        if(c==0 && d==0) cout<<"0"<<endl;
        else printf("%lld\n", pwr(26,c)*pwr(10,d));
    }
}
