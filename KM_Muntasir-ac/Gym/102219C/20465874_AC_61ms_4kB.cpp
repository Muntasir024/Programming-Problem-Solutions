#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, t, tc, s, a, b, mx;
    cin>>tc;
    for(t=1;t<=tc;t++)
    {
        cin>>n>>s;
        mx=-9999999;
        while(n--)
        {
            cin>>a>>b;
            if(b<=s) mx=max(mx,a);
            else
                mx=max(mx, a-(b-s));
        }
        cout<< "Case #" << t << ": " << mx <<endl;
    }
    return 0;
}
