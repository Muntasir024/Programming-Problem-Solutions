#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,w,i,cnt,t,sum;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>n>>w;
        long long a[n+5];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        sum=0;
        for(i=0;i<n;i++)
        {
            sum = sum + a[i];
            if(sum>w)
                break;
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
