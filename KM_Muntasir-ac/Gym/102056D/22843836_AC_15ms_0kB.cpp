#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, i, x, t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=0;i<n;i++) cin>>x;
        for(i=0;i<m;i++) cin>>x;
        if(n<=m) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
