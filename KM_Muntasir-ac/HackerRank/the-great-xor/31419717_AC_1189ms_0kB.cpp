#include<bits/stdc++.h>
using namespace std;
int main() {
    long long t, n, x;
    cin >> t;
    while(t--) {
        cin >> n, x=1;
        while(x<=n) x *= 2;
        cout << x-n-1 << endl;
    }
}
