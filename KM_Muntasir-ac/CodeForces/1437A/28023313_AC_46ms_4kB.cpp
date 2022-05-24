#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, x, y;
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        if(2*x>y) cout << "YES" <<endl;
        else cout << "NO" << endl;
    }

    return 0;
}
