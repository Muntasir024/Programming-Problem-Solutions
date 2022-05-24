#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, s = 0, x, i;
    cin >> n >> m;
    int res[n+2];
    for(i=0;i<n;i++) {
        cin >> x;
        s += x;
        if(s < m) res[i] = 0;
        else {
            res[i] = s / m;
            s = s % m;
        }
    }
    cout << res[0];
    for(i=1;i<n;i++) cout << " " << res[i];
    cout << endl;
}
