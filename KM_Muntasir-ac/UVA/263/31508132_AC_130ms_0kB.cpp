#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string s;
    while(cin >> s) {
        if(s == "0") return 0;
        int c=1;
        map <ll, int> mp;
        printf("Original number was ");
        cout << s << endl;
        while(1) {
            string a = s, b = s;
            int n1=0, n2=0, dif;
            sort(a.begin(), a.end());
            sort(b.rbegin(), b.rend());
            n1 = stoi(a);
            n2 = stoi(b);
            dif = n2 - n1;
            cout << n2 << " - " << n1 << " = " << dif << endl;
            mp[dif]++;
            if(mp[dif] == 2) break;
            c++;
            s = to_string(dif);
        }
        printf("Chain length %d\n\n", c);
    }
    return 0;
}
