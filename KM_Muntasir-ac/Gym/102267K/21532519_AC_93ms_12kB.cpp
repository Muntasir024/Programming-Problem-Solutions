#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, i, j, x, ans=0, a[23], m;
    cin>>n;
    for(i=0; i<n; i++) cin>>a[i];
    m = pow(2, n);
    for(i = 1; i <= m; i++)
    {
        x=0;
        for(j = 0; j < n; j++)
            if(i & (1 << j))
                x = x|a[j];
        ans += x;
    }
    cout<< ans <<endl;
    return 0;
}
