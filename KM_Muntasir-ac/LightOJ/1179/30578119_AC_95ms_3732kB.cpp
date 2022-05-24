#include<bits/stdc++.h>
using namespace std;

int josephus(int n, int k)
{
    if (n == 1) return 1;
    else        return (josephus(n - 1, k) + k-1) % n + 1;
}

int main()
{
    int n, k, t, tc;
    cin >> t;
    for(tc=1; tc<=t; tc++)
    {
        cin >> n >> k;
        cout << "Case " << tc << ": " << josephus(n, k) << endl;
    }
    return 0;
}
