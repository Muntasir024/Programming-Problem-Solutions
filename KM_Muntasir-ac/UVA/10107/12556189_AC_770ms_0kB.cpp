#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a[100005],n,i=0,m;
    while(scanf("%lld",&n) != EOF)
    {
        a[i]=n;
        sort(a,a+i+1);
        if(i%2==0)
            cout<<a[i/2]<<endl;
        else
        {
            m=a[i/2]+a[i/2+1];
            cout<<m/2<<endl;
        }
        ++i;
    }
    return 0;
}
