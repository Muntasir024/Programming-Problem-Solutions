#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n;
    cin >> s;
    if(n == 1) cout << "1" << endl, cout << s << endl;
    else {
        int z = 0,o = 0, i, j;
        for(i=0;i<n;i++) {
                if(s[i] == '1') o++;
                if(s[i] == '0') z++;
        }
        if(o != z) cout << "1" << endl << s << endl;
        else {
            cout << "2" << endl;
            cout << s[0] << " ";
            for(i=1;i<n;i++) cout << s[i];
            cout << endl;
        }
    }
    return 0;
}
