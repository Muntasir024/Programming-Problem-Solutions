#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, tc = 1, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << "Case " << tc++ << ": " << n;
        n = n/10;
        while(n)
        {
            cout << n%10;
            n = n/10;
        }
        cout << endl;
    }
    return 0;
}

