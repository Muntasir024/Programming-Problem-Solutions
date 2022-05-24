#include<bits/stdc++.h>
using namespace std;
int main() {
    long long t, n, x;
    cin >> t;
    while(t--) {
        cin >> n;
        string s = "Richard";
        int c = 1;
        while(n>1) {
            double l = log2(n);
            if(l == (int)l) n/=2;
            else n-=pow(2, (int)l);
            c = (c+1)%2;
            s = (c%2)==0?"Louise":"Richard";
        }
        cout << s << endl;
    }
}
