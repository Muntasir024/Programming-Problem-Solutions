#include<bits/stdc++.h>
using namespace std;

long long msb(long long n)
{
    int i=0;
    while(n!=0)
    {
        i++;
        n/=2;
    }
    return i;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n],ans=0;
        vector<long long > v(32,0);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            v[msb(a[i])]++;
        }

        for(int i=0; i<32; i++)
        {
            ans+=((v[i]*(v[i]-1))/2);
        }
        cout<<ans<<endl;
    }
    return 0;
}
