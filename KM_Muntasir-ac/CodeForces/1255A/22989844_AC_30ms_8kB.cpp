#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, m, i, ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n>m) swap(n,m);
        i=m-n;
        ans=i/5;
        i=i%5;
        if(i==4 | i==3) ans+=2;
        if(i==2 | i==1) ans++;
        cout << ans << endl;
    }
    return 0;
}
