#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string ar[107], s;
    int l = 0;
    while(cin >> ar[l] && ar[l] != "XXXXXX") l++;
    sort (ar, ar + l);
    while(cin >> s && s != "XXXXXX" ) {
        sort (s.begin (), s.end ());
        bool f = false;
        for(int i = 0; i < l; i++ ) {
            string tmp = ar [i];
            sort (tmp.begin (), tmp.end ());
            if(s == tmp ) {
                cout << ar [i] << endl;
                f = true;
            }
        }
        if (!f) cout << "NOT A VALID WORD" << endl;
        cout << "******" << endl;
    }
    return 0;
}
