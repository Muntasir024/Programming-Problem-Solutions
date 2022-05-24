#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,l,x,cnt;
    while(scanf("%lld",&n) && n)
    {
        cnt=0;
        long long a[n+5];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=1;i<n;i++)
        {
            x = abs(a[i-1]-a[i]);
            if(x<=200)
            {
                cnt++;
            }
        }
        if(cnt == (n-1) && a[n-1]>=1322)
            cout<<"POSSIBLE"<<endl;
        else
            cout<<"IMPOSSIBLE"<<endl;
    }

    return 0;
}
