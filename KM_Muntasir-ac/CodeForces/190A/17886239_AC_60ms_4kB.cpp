#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, mn, mx;
    cin >> n >> m;
    if(n == 0)
    {
        if(m == 0)
            cout<<"0 0"<<endl;
        else
            cout<<"Impossible"<<endl;
        return 0;
    }
    if(m == 0)
    {
        cout<<n<<" "<<n<<endl;
        return 0;
    }
    mx = n+m-1;
    if(n>=m) mn = n;
    else mn = m;

    cout<<mn<<" "<<mx<<endl;
    return 0;
}
